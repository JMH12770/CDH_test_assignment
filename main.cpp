/*!
 * @file
 */

// Copyright 2016 Joshua Hassler

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include "./power.h"
#include "./battery.h"

unsigned int NUMBER_OF_DRAINS = 10;  // Set to how many times to drain batteries

void drain_power(std::vector<PowerTeam>* Battery);
void print_battery(std::vector<PowerTeam> Battery);

/*!
 * This driver creates a Battery vector, charges the battery then attempts to
 * drain power from it untill it is empty.
 */
int main() {
    using std::cout;
    using std::vector;
    int i;
    vector<PowerTeam> Battery;
    PowerTeam powerTeam(10.0);

    for (i = 0; i < 5; i++) {
        Battery.push_back(powerTeam);
    }

    print_battery(Battery);

    cout << "Draining battery: ";

    drain_power(&Battery);

    print_battery(Battery);

    return 0;
}

void drain_power(std::vector<PowerTeam>* Battery) {
    int number;
    unsigned int i, j;
    unsigned int seed = time(NULL);

    for (i = 0; i < NUMBER_OF_DRAINS && number == 0; i++) {
        number = (rand_r(&seed) % 9) + 1;

        for (j = 0; j < (*Battery).size() && number >= 0; j++) {
            if ((*Battery)[j] - static_cast<double>(number) >= 0) {
                (*Battery)[j] = (*Battery)[j] - static_cast<double>(number);
                number = 0;
            } else if ((*Battery)[j] - static_cast<double>(number) < 0) {
                number = number - (*Battery)[j].getPowerLevel();
                (*Battery)[j] = 0;
            }
        }
        if (number != 0) {
            std:: cout << "WARNING! Batteries are depleated!\n";
        }
    }
}

void print_battery(std::vector<PowerTeam> Battery ) {
using std::cout;
        int i;
    cout << "Showing charge of battery:\n---------\n";
    for (i = 0; i < 5; i++) {
        cout << "|" << std::setw(6) << Battery[i].getPowerLevel() << " |\n";
    }
    cout << "---------\n";
}
