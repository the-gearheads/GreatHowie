#include "commands/Retract.h"
#include "Robot.h"

Retract::Retract()
{
  Requires(&Robot::m_launch);
}

void Retract::Initialize()
{
  Robot::m_launch.Retract();
}

void Retract::Execute()
{
}

bool Retract::IsFinished() { return true; }
void Retract::End() {}

void Retract::Interrupted() {}
