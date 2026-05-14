#ifndef MENLO_DIMENSION_H
#define MENLO_DIMENSION_H

#include "./InternalHeaderCheck.h"

namespace Menlo {

class Dimension {
    public:  // members
        enum class Base { Length, Mass, Time, Current, Temperature, Amount, LuminousIntensity };

    private:  // members
        static constexpr std::size_t NumDims = 7;

        std::array<Menlo::internal::fracexp, NumDims> base_exponents;

    public:  // indexer
        static constexpr std::size_t idx(Base base) { return static_cast<std::size_t>(base); }

    public:  // methods
        bool is_dimensionless() const {
            return std::all_of(
                this->base_exponents.begin(), this->base_exponents.end(),
                [](const internal::fracexp &base) { return base.is_zero(); }
            );
        };

        const internal::fracexp &operator[](Base base) const { return this->base_exponents[idx(base)]; }

    public:  // constructors
        Dimension() : base_exponents{} {};
        Dimension(const std::array<internal::fracexp, NumDims> base_exponents_) : base_exponents(base_exponents_) {};
        Dimension(
            const internal::fracexp length, const internal::fracexp mass, const internal::fracexp time,
            const internal::fracexp current, const internal::fracexp temperature, const internal::fracexp amount,
            const internal::fracexp luminous_intensity
        ) : base_exponents{length, mass, time, current, temperature, amount, luminous_intensity} {};

    public:  // operators
        Dimension &operator*=(const Dimension &rhs) {
            for (std::size_t i = 0; i < NumDims; i++) {
                this->base_exponents[i] += rhs.base_exponents[i];
            }
            return *this;
        };

        Dimension &operator/=(const Dimension &rhs) {
            for (std::size_t i = 0; i < NumDims; i++) {
                this->base_exponents[i] -= rhs.base_exponents[i];
            }
            return *this;
        };

        bool operator==(const Dimension &) const = default;

    public:  // more arithmetic methods
        Dimension pow(const internal::fracexp &exponent) const {
            Dimension that = *this;
            for (internal::fracexp &base_exponent : that.base_exponents) {
                base_exponent *= exponent;
            }
            return that;
        };

        Dimension sqrt() const { return pow(internal::fracexp{1, 2}); }

        Dimension cbrt() const { return pow(internal::fracexp{1, 3}); }
};

Dimension operator*(const Dimension &lhs, const Dimension &rhs) {
    Dimension that = lhs;
    that          *= rhs;
    return that;
}

Dimension operator/(const Dimension &lhs, const Dimension &rhs) {
    Dimension that = lhs;
    that          /= rhs;
    return that;
}

}  // namespace Menlo

#endif  // MENLO_DIMENSION_H
