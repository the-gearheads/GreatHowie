#pragma once

#include <frc/Joystick.h>
#include <frc/buttons/Trigger.h>
#include <frc/XboxController.h>
#include <frc/smartdashboard/SmartDashboard.h>

class JoystickTrigger : public frc::Trigger
{

    frc::Joystick *joy;
    frc::GenericHID::JoystickHand hand;
    double value;

public:
    JoystickTrigger(frc::Joystick *joystick, frc::GenericHID::JoystickHand jsHand)
    {
        joy = joystick;
        hand = jsHand;
    }

    bool Get()
    {
        if (hand == frc::GenericHID::kLeftHand)
        {
            value = joy->GetRawAxis(2);
            return (value > 0);
        }
        else if (hand == frc::GenericHID::kRightHand)
        {
            value = joy->GetRawAxis(3);
            return (value > 0);
        }
        return true;
    }

    double GetVal()
    {
        return value;
    }
};