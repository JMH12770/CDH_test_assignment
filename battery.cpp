/*!
 * @file
 */

// Copyright 2016 Joshua Hassler

#include "./battery.h"

/*!
 * Creates a battery object
 */
Battery::Battery(void) {}

/*!
 * Creates a bettery object with a charge
 *
 * @param initialCharge The initial charge of the battery
 */
Battery::Battery(double initialCharge) {
     charge = initialCharge;
}

/*!
 * Returns how much charge is in the battery
 *
 * @return The amount of charge in the battery.
 */
double Battery::getCharge(void) {
     return charge;
}

/*!
 * Adds a specified amount of charge to the battery
 *
 * @param power The amount of charge to add.
 */
void Battery::addToCharge(double power) {
    charge += power;
}

/*!
 * Subtracts a specified amount of charge from the battery
 *
 * @param power The amount of charge to subtract
 */
void Battery::subtractFromCharge(double power) {
    charge -= power;
}
