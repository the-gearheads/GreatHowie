#pragma once

#include <frc/TimedRobot.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "OI.h"
#include "commands/ArcadeDrive.h"
#include "subsystems/Drive.h"

class Robot : public frc::TimedRobot
{
public:
  static DriveSubsystem m_drive;
  static OI m_oi;

  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

private:
  // Have it null by default so that if testing teleop it
  // doesn't have undefined behavior and potentially crash.
  frc::Command *m_autonomousCommand = nullptr;
  ArcadeDrive m_defaultDrive;
  // MyAutoCommand m_myAuto;
  // frc::SendableChooser<frc::Command*> m_chooser;
};
