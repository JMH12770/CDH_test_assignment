/*!
 * @file
 */

// Copyright 2016 Joshua Hassler
#ifndef _USR_CS_UNDERGRAD_2019_JHASSLER_CDH_TESTASSIGNMENT_POWER_H_
#define _USR_CS_UNDERGRAD_2019_JHASSLER_CDH_TESTASSIGNMENT_POWER_H_

/*!
 * Stores the current power level of the power team
 * provides the ability to get and set the power level
 */
class PowerTeam {
 public:
  double getPowerLevel(void);
  void setPowerLevel(double power);
  PowerTeam();
  explicit PowerTeam(double power);
 private:
  /*! The current power level of the Power Team */
  double powerLevel;
};

#endif  // _USR_CS_UNDERGRAD_2019_JHASSLER_CDH_TESTASSIGNMENT_POWER_H_
