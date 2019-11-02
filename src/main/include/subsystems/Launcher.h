#pragma once

#include <frc/DoubleSolenoid.h>
#include <frc/Solenoid.h>

#include "commands/ArcadeDrive.h"
#include "RobotMap.h"

class LauncherSubsystem : public frc::Subsystem
{
public:
    LauncherSubsystem();
    void Launch(int power);
    void Retract();

private:
    frc::DoubleSolenoid cyl1{kCylinder1On, kCylinder1Off};
    frc::Solenoid cyl2{kCylinder2};
    frc::Solenoid cyl3{kCylinder3};
};