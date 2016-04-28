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

#include "./battery.h"

unsigned int NUMBER_OF_DRAINS = 10;  // Set to how many times to drain batteries

/*!
 * Creates a battery object with default charge level and default number of
 * PowerTeam objects.
 */
Battery::Battery(void) {
    PowerTeam powerTeam(10.0);
    int i;

    cells = 5;
    max_charge = 10.0;
    for (i = 0; i < cells; i++) {
        battery_array.push_back(powerTeam);
    }
}

/*!
 * Creates a bettery object with a specified charge and a specified number of
 * PowerTeam objects.
 *
 * @param initialCharge The initial charge of each PowerTeam object
 * @param number_of_batteries The number of PowerTeam objects to be stored in
 * the vector.
 */
Battery::Battery(double initialCharge, double number_of_batteries) {
    PowerTeam powerTeam(initialCharge);
    int i;

    cells = number_of_batteries;
    max_charge = initialCharge;
    for (i = 0; i < cells; i++) {
        battery_array.push_back(powerTeam);
    }
}

/*!
 * Returns how much charge is in the battery array
 *
 * @return The amount of charge in the battery array.
 */
double Battery::getCharge(void) {
     double sum = 0;
     int i;

     for (i = 0; i < cells; i++) {
         sum += battery_array[i].getPowerLevel();
     }

     return sum;
}

/*!
 * Drains power from the battery array untill it can't or it has iterated the
 * number of times specified by NUMBER_OF_DRAINS.
 */
void Battery::drain_power(void) {
    int number;
    unsigned int i, j;
    unsigned int seed = time(NULL);

    for (i = 0; i < NUMBER_OF_DRAINS && number == 0; i++) {
        number = (rand_r(&seed) % 9) + 1;

        for (j = 0; j < battery_array.size() && number >= 0; j++) {
            if (battery_array[j] - static_cast<double>(number) >= 0) {
                battery_array[j] = battery_array[j]-static_cast<double>(number);
                number = 0;
            } else if (battery_array[j] - static_cast<double>(number) < 0 &&
                j != battery_array.size() - 1) {
                number = number - battery_array[j].getPowerLevel();
                battery_array[j] = 0;
            } else {
                std::cout << "WARNING: Trying to pull " << number
                << " power when there is only "
                << battery_array[j].getPowerLevel()
                << " left!\n" << "Pulling as much power as I can.\n";
                number = number - battery_array[j].getPowerLevel();
                battery_array[j] = 0;
            }
        }
        if (number != 0) {
            std:: cout << "WARNING! Batteries are depleated!\n";
        }
    }
}

/*!
 * Adds power to the battery array untill it can't or it has iterated the
 * number of times specified by NUMBER_OF_DRAINS.
 */
void Battery::add_power(void) {
    int number = 0;
    unsigned int i, j;
    unsigned int seed = time(NULL);

    for (i = 0; i < NUMBER_OF_DRAINS && number == 0; i++) {
        number = (rand_r(&seed) % 9) + 1;

        for (j = 0; j < battery_array.size() && number != 0;) {
            if (battery_array[j] + static_cast<double>(number) < max_charge) {
                battery_array[j] = battery_array[j] + (number);
                number = 0;
            } else if (battery_array[j] +
                static_cast<double>(number)== max_charge) {
                battery_array[j] = max_charge;
                j++;
                number = 0;
            } else if (battery_array[j] +
                static_cast<double>(number) > max_charge) {
                number = number + (battery_array[j] - max_charge);
                battery_array[j] = max_charge;
                j++;
            }
        }
    }
    if (number != 0) {
        std::cout << "WARNING! Tryed to overcharge by " << number << "\n";
    }
}

/*!
 * Prints a ASCII view of the battery
 */
void Battery::print_battery(void) {
    using std::cout;
    int i;
    cout << "Showing charge of battery:\n---------\n";
    for (i = 0; i < 5; i++) {
        cout << "|" << std::setw(6) << battery_array[i].getPowerLevel()
        << " |\n";
    }
    cout << "---------\n";
}
