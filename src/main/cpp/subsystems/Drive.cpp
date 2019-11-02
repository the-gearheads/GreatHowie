#include "subsystems/Drive.h"
#include "RobotMap.h"

DriveSubsystem::DriveSubsystem() : frc::Subsystem("Drive") {}

void DriveSubsystem::InitDefaultCommand()
{
  SetDefaultCommand(new ArcadeDrive());
}

void DriveSubsystem::Drive(double y, double rot)
{
  diffDrive.ArcadeDrive(y, -rot);
}