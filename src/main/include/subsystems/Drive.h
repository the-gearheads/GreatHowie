#pragma once

#include <frc/Talon.h>
#include <frc/Spark.h>
#include <frc/commands/Subsystem.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

#include "commands/ArcadeDrive.h"
#include "RobotMap.h"

class DriveSubsystem : public frc::Subsystem
{
public:
  DriveSubsystem();
  void InitDefaultCommand() override;
  void Drive(double y, double rot);

private:
  // TODO: add motor invert
  frc::Talon rightBack{kRightBack};
  frc::Talon rightFront{kRightFront};
  frc::Spark leftBack{kLeftBack};
  frc::Spark leftFront{kLeftFront};
  frc::SpeedControllerGroup rightGroup{rightFront, rightBack};
  frc::SpeedControllerGroup leftGroup{leftFront, leftBack};
  frc::DifferentialDrive diffDrive{leftGroup, rightGroup};

  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};
