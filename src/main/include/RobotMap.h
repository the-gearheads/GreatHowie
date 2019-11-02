/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/DoubleSolenoid.h>

/*       MAPS      */
constexpr int kLeftFront = 0;
constexpr int kRightFront = 4;
constexpr int kLeftBack = 2;
constexpr int kRightBack = 3;
constexpr bool kInvertMotors = true;

constexpr int kCylinder1On = 0;
constexpr int kCylinder1Off = 1;
constexpr int kCylinder2 = 2;
constexpr int kCylinder3 = 3;

constexpr frc::DoubleSolenoid::Value kCyl1Enable = frc::DoubleSolenoid::kReverse;
constexpr frc::DoubleSolenoid::Value kCyl1Disable = frc::DoubleSolenoid::kForward;

/*    PREFERENCES    */
constexpr double kForwardSpeed = 0.85;
constexpr double kRotSpeed = 0.6;