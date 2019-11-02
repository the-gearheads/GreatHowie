#pragma once

#include <frc/XboxController.h>
#include <frc/Joystick.h>
#include <frc/buttons/JoystickButton.h>
#include <frc/XboxController.h>

#include "commands/LaunchLow.h"
#include "commands/Retract.h"

#include "util/JoystickTrigger.h"

class OI
{
public:
  OI();
  frc::Joystick *GetJoystick();
  JoystickTrigger *GetTrigger();

private:
  frc::Joystick joy{0};
  JoystickTrigger LTrigger{&joy, frc::Joystick::kLeftHand};
  JoystickTrigger RTrigger{&joy, frc::Joystick::kRightHand};
  frc::JoystickButton AButton{&joy, 1},
      BButton{&joy, 2},
      XButton{&joy, 3},
      YButton{&joy, 4},
      LeftBumper{&joy, 5},
      RightBumper{&joy, 6};
};