/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/Talon.h>
#include <frc/Spark.h>
#include <frc/commands/Subsystem.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

#include "commands/ArcadeDrive.h"
#include "RobotMap.h"

class DriveSubsystem: public frc::Subsystem {
 public:
  DriveSubsystem();
  void InitDefaultCommand() override;
  void Drive(double y, double rot);
 private:
  frc::Talon rightBack{kRightBack};
  frc::Talon rightFront{kRightFront};
  frc::Talon leftBack{kLeftBack};
  frc::Talon leftFront{kLeftFront};
  frc::SpeedControllerGroup rightGroup{rightFront, rightBack};
  frc::SpeedControllerGroup leftGroup{leftFront, leftBack};
  frc::DifferentialDrive diffDrive{leftGroup, rightGroup};

  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};
