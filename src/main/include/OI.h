/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/XboxController.h>
#include <frc/Joystick.h>
#include <frc/buttons/JoystickButton.h>

class OI {
 public:
  OI();
  frc::Joystick* GetJoystick();
private:
  frc::Joystick joy{0};
  frc::JoystickButton AButton{&joy, 1},
                      BButton{&joy, 2},
                      XButton{&joy, 3},
                      YButton{&joy, 4},
                      LeftBumper{&joy, 5},
                      RightBumper{&joy, 6};
};