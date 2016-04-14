/*!
 * @file
 */

// Copyright 2016 Joshua Hassler
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
