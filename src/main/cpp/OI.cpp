#include "OI.h"

#include <frc/WPILib.h>
#include <frc/XboxController.h>

OI::OI()
{
  LTrigger.WhenActive(new LaunchLow());
  RTrigger.WhenActive(new Retract());
}

frc::Joystick *OI::GetJoystick()
{
  return &joy;
}

JoystickTrigger *OI::GetTrigger()
{
  return &LTrigger;
}