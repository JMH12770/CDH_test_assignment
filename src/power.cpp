/*!
 * @file
 */

// Copyright 2016 Joshua Hassler

/*
 This file is part of CDH test assignment.

 CDH test assignmen is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 CDH test assignmen is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with CDH test assignmen.  If not, see <http://www.gnu.org/licenses/>.
*/

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

/*!
 * Overloads the - operator to work with PowerTeam object. Returns the value of
 * the powerLevel minus the given double
 *
 * @param value The value you are subtracting from powerLevel
 * @return The value of powerLevel minus value
 */
double PowerTeam::operator-(double value) {
    return this->getPowerLevel() - value;
}

/*!
 * Overloads the = operator to work with PowerTeam object. Returns the value
 * assigned to powerLevel.
 *
 * @param value The value to assign as the new powerLevel
 * @return The value assigned to powerLevel
 */
double PowerTeam::operator=(double value) {
    this->setPowerLevel(value);
    return this->getPowerLevel();
}

/*!
 * Overloads the + operator to work with PowerTeam object. Returns the value of
 * the powerLevel plus the given double
 *
 * @param value The value you are adding to powerLevel
 * @return The value of powerLevel plus value
 */
double PowerTeam::operator+(double value) {
    return this->getPowerLevel() + value;
}
