#include "OI.h"

#include <frc/WPILib.h>
#include <frc/XboxController.h>

OI::OI()
{
}

frc::Joystick *OI::GetJoystick()
{
  return &joy;
}

JoystickTrigger *OI::GetTrigger()
{
  return &LTrigger;
}