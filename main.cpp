/*!
 * @file
 */

// Copyright 2016 Joshua Hassler

#include <iostream>
#include "./power.h"
#include "./battery.h"

/*!
 * Simple driver to test interaction between PowerTeam
 * and Battery objects
 */
int main() {
    using std::cout;
    PowerTeam powerTeam(5.0);
    Battery tempBattery(0.0);

    cout << "Initial Power Level: " << powerTeam.getPowerLevel() << "\n";
    cout << "Charging Battery" << "\n";
    tempBattery.addToCharge(powerTeam.getPowerLevel());
    cout << "Battery Charged to: " <<tempBattery.getCharge() << "\n";

    return 0;
}
