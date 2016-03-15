/*!
 * @file
 */

// Copyright 2016 Joshua Hassler

#include "./power.h"

/*!
 * Creates a PowerTeam object
 */
PowerTeam::PowerTeam(void) {}

/*!
 * Creates a PowerTeam object with a specified power level
 *
 * @param power The default power level to be set
 */
PowerTeam::PowerTeam(double power) {
    powerLevel = power;
}

/*!
 * Sets the power level for the object
 *
 * @param power The new power level to be set
 */
void PowerTeam::setPowerLevel(double power) {
    powerLevel = power;
}

/*!
 * Gets the power level of the PowerTeam object
 *
 * @return The current power level of the object
 */
double PowerTeam::getPowerLevel(void) {
    return powerLevel;
}
