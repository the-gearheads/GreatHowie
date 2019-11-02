#include "commands/LaunchLow.h"
#include "Robot.h"

LaunchLow::LaunchLow()
{
  Requires(&Robot::m_launch);
}

void LaunchLow::Initialize()
{
  Robot::m_launch.Launch(0);
}

void LaunchLow::Execute()
{
}

bool LaunchLow::IsFinished() { return true; }
void LaunchLow::End() {}

void LaunchLow::Interrupted() {}
