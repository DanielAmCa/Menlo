#ifndef MENLO_FRACEXP_H
#define MENLO_FRACEXP_H

#include "../InternalHeaderCheck.h"

namespace Menlo {

namespace internal {

class fracexp {
    private:  // members
        int32_t num;
        int32_t den;

    public:  // getters
        int32_t get_num() const { return this->num; }

        int32_t get_den() const { return this->den; }

        std::array<int32_t, 2> show() const { return std::array<int32_t, 2>{this->num, this->den}; };

        // debug-only
        double to_double() const { return double(this->num) / this->den; }

    private:  // methods
        void make_den_pos() {

            if (this->den < 0) {
                this->den *= -1;
                this->num *= -1;
            }
        }

        bool make_zero_0_1() {

            if (this->is_zero()) {
                this->den = 1;
                return true;
            }

            return false;
        }

        void reduce() {

            const int32_t gcd = std::gcd(this->den, this->num);

            this->num /= gcd;
            this->den /= gcd;
        }

        void normalize() {

            if (this->den == 0) throw std::domain_error("Division by zero in exponent!");

            if (this->make_zero_0_1()) return;  // force 0 be 0/1
            this->make_den_pos();               // force positive denominator
            this->reduce();                     // force reduced form
        }

    public:  // methods
        bool is_zero() const { return this->num == 0; }

    public:  // constructors
        fracexp() : num(0), den(1) { this->normalize(); };

        fracexp(int32_t num_) : num(num_), den(1) { this->normalize(); };

        fracexp(int32_t num_, int32_t den_) : num(num_), den(den_) { this->normalize(); };

    public:  // operators
        fracexp &operator+=(const fracexp &rhs) {
            this->num  = this->num * rhs.get_den() + this->den * rhs.get_num();
            this->den *= rhs.get_den();
            this->normalize();
            return *this;
        };

        fracexp &operator-=(const fracexp &rhs) {
            this->num  = this->num * rhs.get_den() - this->den * rhs.get_num();
            this->den *= rhs.get_den();
            this->normalize();
            return *this;
        };

        fracexp &operator*=(const fracexp &rhs) {
            this->num *= rhs.get_num();
            this->den *= rhs.get_den();
            this->normalize();
            return *this;
        };

        fracexp &operator/=(const fracexp &rhs) {
            if (rhs.is_zero()) throw std::domain_error("Division by zero in exponent!");
            this->num *= rhs.get_den();
            this->den *= rhs.get_num();
            this->normalize();
            return *this;
        };

        bool operator==(const fracexp &) const = default;

        friend fracexp            operator+(const fracexp &lhs, const fracexp &rhs);
        friend fracexp            operator-(const fracexp &lhs, const fracexp &rhs);
        friend fracexp            operator*(const fracexp &lhs, const fracexp &rhs);
        friend fracexp            operator/(const fracexp &lhs, const fracexp &rhs);
        friend std::weak_ordering operator<=>(const fracexp &lhs, const fracexp &rhs);
};

fracexp operator+(const fracexp &lhs, const fracexp &rhs) {
    fracexp that = lhs;
    that        += rhs;
    return that;
}

fracexp operator-(const fracexp &lhs, const fracexp &rhs) {
    fracexp that = lhs;
    that        -= rhs;
    return that;
}

fracexp operator*(const fracexp &lhs, const fracexp &rhs) {
    fracexp that = lhs;
    that        *= rhs;
    return that;
}

fracexp operator/(const fracexp &lhs, const fracexp &rhs) {
    fracexp that = lhs;
    that        /= rhs;
    return that;
}

std::weak_ordering operator<=>(const fracexp &lhs, const fracexp &rhs) {
    return static_cast<int64_t>(lhs.num) * rhs.den <=> static_cast<int64_t>(rhs.num) * lhs.den;
}

}  // namespace internal
}  // namespace Menlo

#endif
