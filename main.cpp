/*!
 * @file
 */

// Copyright 2016 Joshua Hassler

#include <iostream>
#include "./power.h"
#include "./battery.h"

/*!
 * This driver creates a Battery vector, charges the battery then attempts to
 * drain power from it untill it is empty.
 */
int main() {
    using std::cout;
    Battery battery_array(10, 5);

    battery_array.print_battery();

    cout << "Draining battery:\n";

    battery_array.drain_power();

    battery_array.print_battery();

    cout << "Charging battery:\n";

    battery_array.add_power();

    battery_array.print_battery();

    return 0;
}
