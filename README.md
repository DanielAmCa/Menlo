<p align="center">
    <img width="auto" height="200" alt="header" src="https://raw.githubusercontent.com/danielamca/menlo/assets/img/github-social.png" />
    <br>
    <a href="http://perso.crans.org/besson/LICENSE.html"><img src="https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=fff&style=flat"></a>
    <a href="/DanielAmCa/Menlo/wiki"><img alt="Static Badge" src="https://img.shields.io/badge/read-wiki-blue?style=flat"></a>
    <a href="http://perso.crans.org/besson/LICENSE.html"><img src="https://img.shields.io/badge/License-GPLv3-blue.svg" /></a>
</p>

# Menlo

<p align="center"><i>Powering your Invention Factory.</i></p>

> [!WARNING]
> Menlo is still under heavy development. Many features are still missing, and existing ones will likely be modified.

Menlo is an ergonomic internal domain-specific language in C++ for use in physics, chemistry and engineering. For more information, you can read the [Wiki](/DanielAmCa/Menlo/wiki).

## Demo

Here's a simple program to find the frequency in MHz of a photon with an energy of 5±1 keV.

```cpp
#include <Menlo/Core.hpp>
#include <Menlo/Units.hpp>

// f = E / h
Menlo::Udouble photon_E_to_f(Menlo::Udouble E) {

    return E / Menlo::Constants::h;
}

int main() {

    namespace in = Menlo::Units::In;
    namespace to = Menlo::Units::To;
    using Menlo::Udouble;

    // 5±1 keV → SI Joules
    Udouble E = Udouble(5, 1) * (in::prefix::k * in::eV); 
    // Hz → MHz
    Udouble f_MHz = photon_E_to_p(E) * to::prefix::M;

    std::cout << "Frequency of a 5±1 keV photon: " << f_MHz << " MHz." << std::endl;

    return 0;
} 
```
```
Frequency of a 5±1 keV photon: 1.21(24)e12 MHz.
```

## AI Disclosure

AI may be used to brainstorm and research how to implement new features or rework already existing ones. However, the code itself and this repository will always be managed by a human.

## License
    
This project is licensed under the [GNU General Public License v3](https://www.gnu.org/licenses/gpl-3.0.en.html#license-text).

## Star History

<a href="https://www.star-history.com/?repos=DanielAmCa%2FMenlo&type=date&legend=top-left">
    <picture>
        <source media="(prefers-color-scheme: dark)" srcset="https://api.star-history.com/chart?repos=DanielAmCa/Menlo&type=date&theme=dark&legend=top-left" />
        <source media="(prefers-color-scheme: light)" srcset="https://api.star-history.com/chart?repos=DanielAmCa/Menlo&type=date&legend=top-left" />
        <img alt="Star History Chart" src="https://api.star-history.com/chart?repos=DanielAmCa/Menlo&type=date&legend=top-left" />
    </picture>
</a>
