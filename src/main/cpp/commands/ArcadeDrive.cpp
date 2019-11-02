#include "commands/ArcadeDrive.h"
#include "Robot.h"

ArcadeDrive::ArcadeDrive()
{
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::m_drive);
}

// Called just before this Command runs the first time
void ArcadeDrive::Initialize()
{
  joy = Robot::m_oi.GetJoystick();
}

// Called repeatedly when this Command is scheduled to run
void ArcadeDrive::Execute()
{
  double x = joy->GetX(frc::Joystick::kLeftHand);
  double y = joy->GetY(frc::Joystick::kRightHand);
  Robot::m_drive.Drive((y * kForwardSpeed), (x * kRotSpeed));
}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDrive::IsFinished() { return false; }

// Called once after isFinished returns true
void ArcadeDrive::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeDrive::Interrupted() {}
