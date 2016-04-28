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

#include <iostream>
#include "./power.h"
#include "./battery.h"

/*!
 * This driver creates a Battery vector, charges the battery then attempts to
 * drain power from it untill it is empty.
 */
int main() {
    using std::cout;
    using std::endl;
    using std::cin;
    char c;

    cout << "Would you like to run a charge cycle? (y/n): ";
    cin >> c;

    if (c == 'y' || c == 'Y') {
        Battery battery_array(10, 5);

        battery_array.print_battery();

        cout << "Draining battery:" << endl;

        battery_array.drain_power();

        battery_array.print_battery();

        cout << "Charging battery:" << endl;

        battery_array.add_power();

        battery_array.print_battery();
    }

    return 0;
}
