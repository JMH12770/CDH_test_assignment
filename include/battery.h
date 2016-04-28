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

#ifndef BATTERY_H_
#define BATTERY_H_

#include <stdlib.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include "./power.h"


/*!
 * Stors a vector of batteries, forming an array. Provides methods to print a
 * picture of the array, get the total charge, subtract power, and add power to
 * the array.
 */
class Battery {
 public:
  void drain_power(void);
  void add_power(void);
  double getCharge(void);
  void print_battery(void);
  Battery();
  Battery(double initialCharge, double number_of_batteries);
 private:
  /*! The vector holding PowerTeam objects to make a battery array. */
  std::vector<PowerTeam> battery_array;
  /*! The number of batteries the array will hold. */
  int cells;
  /*! The max charge that can be held by a single PowerTeam in this array. */
  double max_charge;
};

#endif  // BATTERY_H_
