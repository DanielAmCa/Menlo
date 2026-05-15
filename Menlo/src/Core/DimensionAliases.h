#ifndef MENLO_DIMENSION_ALIASES_H
#define MENLO_DIMENSION_ALIASES_H

#include "../../Core"
#include "./InternalHeaderCheck.h"
#include "Dimension.h"

namespace Menlo::Dimensions {

// SI-base dimensions
inline const Dimension Length{1, 0, 0, 0, 0, 0, 0};
inline const Dimension Mass{0, 1, 0, 0, 0, 0, 0};
inline const Dimension Time{0, 0, 1, 0, 0, 0, 0};
inline const Dimension Current{0, 0, 0, 1, 0, 0, 0};
inline const Dimension Temperature{0, 0, 0, 0, 1, 0, 0};
inline const Dimension Amount{0, 0, 0, 0, 0, 1, 0};
inline const Dimension LuminousIntensity{0, 0, 0, 0, 0, 0, 1};

// Derived dimensions
// TODO: Express using base dimensions once fracexp and Dimension are constexpr

// >> Scalar quantities

inline const Dimension AbsorbedDoseRate{2, 0, -3, 0, 0, 0, 0};
inline const Dimension Action{2, 1, -1, 0, 0, 0, 0};
inline const Dimension Angle{};
inline const Dimension AngularSpeed{1, 0, -1, 0, 0, 0, 0};
inline const Dimension AreaDensity{-2, 1, 0, 0, 0, 0, 0};
inline const Dimension Capacitance{-2, -1, 4, 2, 0, 0, 0};
inline const Dimension CatalyticActivityConcentration{-3, 0, -1, 0, 0, 1, 0};
inline const Dimension ChemicalPotential{2, 1, -2, 0, 0, -1, 0};
inline const Dimension CrossSection{2, 0, 0, 0, 0, 0, 0};
inline const Dimension Density{-3, 1, 0, 0, 0, 0, 0};
inline const Dimension Dimensionless{};
inline const Dimension DoseEquivalent{2, 0, -2, 0, 0, 0, 0};
inline const Dimension ElectricCharge{0, 0, 1, 1, 0, 0, 0};
inline const Dimension ElectricChargeDensity{-3, 0, 1, 1, 0, 0, 0};
inline const Dimension ElectricalConductance{-2, -1, 3, 2, 0, 0, 0};
inline const Dimension ElectricalConductivity{-3, -1, 3, 2, 0, 0, 0};
inline const Dimension ElectricPotential{2, 1, -3, -1, 0, 0, 0};
inline const Dimension ElectricalResistance{2, 1, -3, -2, 0, 0, 0};
inline const Dimension ElectricalResistivity{3, 1, -3, -2, 0, 0, 0};
inline const Dimension Energy{2, 1, -2, 0, 0, 0, 0};
inline const Dimension EnergyDensity{-1, 1, -2, 0, 0, 0, 0};
inline const Dimension Entropy{2, 1, -2, 0, -1, 0, 0};
inline const Dimension Frequency{0, 0, -1, 0, 0, 0, 0};
inline const Dimension HalfLife{0, 0, 1, 0, 0, 0, 0};
inline const Dimension Heat{2, 1, -2, 0, 0, 0, 0};
inline const Dimension HeatCapacity{2, 1, -2, 0, -1, 0, 0};
inline const Dimension HeatFluxDensity{0, 1, -3, 0, 0, 0, 0};
inline const Dimension Illuminance{-2, 0, 0, 0, 0, 0, 1};
inline const Dimension Impedance{2, 1, -3, -2, 0, 0, 0};
inline const Dimension Inductance{2, 1, -2, -2, 0, 0, 0};
inline const Dimension Irradiance{0, 1, -3, 0, 0, 0, 0};
inline const Dimension Intensity{0, 1, -3, 0, 0, 0, 0};
inline const Dimension KineticEnergy{2, 1, -2, 0, 0, 0, 0};
inline const Dimension LinearDensity{-1, 1, 0, 0, 0, 0, 0};
inline const Dimension LuminousFlux{0, 0, 0, 0, 0, 0, 1};
inline const Dimension MachNumber{};
inline const Dimension MagneticFlux{2, 1, -2, -1, 0, 0, 0};
inline const Dimension MassFraction{};
inline const Dimension MeanLifetime{0, 0, 1, 0, 0, 0, 0};
inline const Dimension MolarConcentration{-3, 0, 0, 0, 0, 1, 0};
inline const Dimension MolarEnergy{2, 1, -2, 0, 0, -1, 0};
inline const Dimension MolarEntropy{2, 1, -2, 0, -1, -1, 0};
inline const Dimension MolarHeatCapacity{2, 1, -2, 0, -1, -1, 0};
inline const Dimension NumberDensity{-3, 0, 0, 0, 0, 0, 0};
inline const Dimension OpticalPower{-1, 0, 0, 0, 0, 0, 0};
inline const Dimension Permeability{1, 1, -2, -2, 0, 0, 0};
inline const Dimension Permittivity{-3, -1, 4, 2, 0, 0, 0};
inline const Dimension PlaneAngle{};
inline const Dimension PotentialEnergy{2, 1, -2, 0, 0, 0, 0};
inline const Dimension Power{2, 1, -3, 0, 0, 0, 0};
inline const Dimension Pressure{-1, 1, -2, 0, 0, 0, 0};
inline const Dimension Radioactivity{0, 0, -1, 0, 0, 0, 0};
inline const Dimension Radiation{2, 0, -2, 0, 0, 0, 0};
inline const Dimension Radiance{0, 1, -3, 0, 0, 0, 0};
inline const Dimension RadiantIntensity{2, 1, -3, 0, 0, 0, 0};
inline const Dimension ReactionRate{-3, 0, -1, 0, 0, 1, 0};
inline const Dimension RefractiveIndex{};
inline const Dimension Reluctance{-2, -1, 2, 2, 0, 0, 0};
inline const Dimension SolidAngle{};
inline const Dimension SpecificEnergy{2, 0, -2, 0, 0, 0, 0};
inline const Dimension SpecificHeatCapacity{2, 0, -2, 0, -1, 0, 0};
inline const Dimension SpecificVolume{3, -1, 0, 0, 0, 0, 0};
inline const Dimension Speed{1, 0, -1, 0, 0, 0, 0};
inline const Dimension Spin{2, 1, -1, 0, 0, 0, 0};
inline const Dimension Strain{};
inline const Dimension SurfaceTension{0, 1, -2, 0, 0, 0, 0};
inline const Dimension ThermalConductance{2, 1, -3, 0, -1, 0, 0};
inline const Dimension ThermalConductivity{1, 1, -3, 0, -1, 0, 0};
inline const Dimension ThermalResistance{-2, -1, 3, 0, 1, 0, 0};
inline const Dimension ThermalResistivity{-1, -1, 3, 0, 1, 0, 0};
inline const Dimension Viscosity{-1, 1, -1, 0, 0, 0, 0};
inline const Dimension Volume{3, 0, 0, 0, 0, 0, 0};
inline const Dimension VolumetricFlowRate{3, 0, -1, 0, 0, 0, 0};
inline const Dimension Wavelength{1, 0, 0, 0, 0, 0, 0};
inline const Dimension Wavenumber{-1, 0, 0, 0, 0, 0, 0};
inline const Dimension Work{2, 1, -2, 0, 0, 0, 0};
inline const Dimension YoungModulus{-1, 1, -2, 0, 0, 0, 0};
inline const Dimension SpringConstant{0, 1, -2, 0, 0, 0, 0};

// >> Vector quantities

inline const Dimension Absement{1, 0, 1, 0, 0, 0, 0};
inline const Dimension Acceleration{1, 0, -2, 0, 0, 0, 0};
inline const Dimension AngularAcceleration{0, 0, -2, 0, 0, 0, 0};
inline const Dimension AngularMomentum{2, 1, -1, 0, 0, 0, 0};
inline const Dimension AngularVelocity{0, 0, -1, 0, 0, 0, 0};
inline const Dimension Area{2, 0, 0, 0, 0, 0, 0};
inline const Dimension CentrifugalForce{1, 1, -2, 0, 0, 0, 0};
inline const Dimension Crackle{1, 0, -5, 0, 0, 0, 0};
inline const Dimension CurrentDensity{-2, 0, 0, 1, 0, 0, 0};
inline const Dimension Displacement{1, 0, 0, 0, 0, 0, 0};
inline const Dimension ElectricDipoleMoment{1, 0, 1, 1, 0, 0, 0};
inline const Dimension ElectricFieldStrength{1, 1, -3, -1, 0, 0, 0};
inline const Dimension Force{1, 1, -2, 0, 0, 0, 0};
inline const Dimension GravitationalFieldStrength{1, 0, -2, 0, 0, 0, 0};
inline const Dimension Impulse{1, 1, -1, 0, 0, 0, 0};
inline const Dimension Jerk{1, 0, -3, 0, 0, 0, 0};
inline const Dimension MagneticFieldStrength{-1, 0, 0, 1, 0, 0, 0};
inline const Dimension MagneticFluxDensity{0, 1, -2, -1, 0, 0, 0};
inline const Dimension MagneticDipoleMoment{2, 0, 0, 1, 0, 0, 0};
inline const Dimension Magnetization{-1, 0, 0, 1, 0, 0, 0};
inline const Dimension Momentum{1, 1, -1, 0, 0, 0, 0};
inline const Dimension Pop{1, 0, -6, 0, 0, 0, 0};
inline const Dimension PressureGradient{-2, 1, -2, 0, 0, 0, 0};
inline const Dimension Snap{1, 0, -4, 0, 0, 0, 0};
inline const Dimension TemperatureGradient{-1, 0, 0, 0, 1, 0, 0};
inline const Dimension Torque{2, 1, -2, 0, 0, 0, 0};
inline const Dimension Velocity{1, 0, -1, 0, 0, 0, 0};
inline const Dimension Wavevector{-1, 0, 0, 0, 0, 0, 0};
inline const Dimension Weight{1, 1, -2, 0, 0, 0, 0};

// >> Tensor quantities

inline const Dimension ElectricSusceptibility{};
inline const Dimension MomentOfInertia{2, 1, 0, 0, 0, 0, 0};
inline const Dimension Stress{-1, 1, -2, 0, 0, 0, 0};

// Aliases

inline const Dimension &Activity        = Radioactivity;
inline const Dimension &Dose            = Radiation;
inline const Dimension &ElectricCurrent = Current;
inline const Dimension &Jounce          = Snap;
inline const Dimension &MagneticMoment  = MagneticDipoleMoment;
inline const Dimension &VolumeDensity   = Density;

}  // namespace Menlo::Dimensions

#endif
