/*!
 * @file
 */

// Copyright 2016 Joshua Hassler
#ifndef BATTERY_H_
#define BATTERY_H_

/*!
 * Stores the amount of charge in a battery and provides
 * methods to add charge, subtract charge, and get charge
 */
class Battery {
 public:
  double getCharge(void);
  void addToCharge(double power);
  void subtractFromCharge(double power);
  Battery();
  explicit Battery(double initialCharge);
 private:
  /*! The charge stored in the battery. */
  double charge;
};

#endif  // BATTERY_H_
