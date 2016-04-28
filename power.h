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
  double operator+(double value);
  double operator=(double value);
  PowerTeam();
  explicit PowerTeam(double power);
 private:
  /*! The current power level of the Power Team */
  double powerLevel;
};

#endif  // POWER_H_
