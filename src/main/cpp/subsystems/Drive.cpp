/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Drive.h"
#include "RobotMap.h"

DriveSubsystem::DriveSubsystem() : frc::Subsystem("Drive") {}

void DriveSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new ArcadeDrive());
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void DriveSubsystem::Drive(double y, double rot) {
  diffDrive.ArcadeDrive(y, -rot);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
