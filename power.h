/*!
 * @file
 */

// Copyright 2016 Joshua Hassler
#ifndef POWER_H_
#define POWER_H_

/*!
 * Stores the current power level of the power team
 * provides the ability to get and set the power level
 */
class PowerTeam {
 public:
  double getPowerLevel(void);
  void setPowerLevel(double power);
  double operator-(double value);
  double operator=(double value);
  PowerTeam();
  explicit PowerTeam(double power);
 private:
  /*! The current power level of the Power Team */
  double powerLevel;
};

#endif  // POWER_H_
