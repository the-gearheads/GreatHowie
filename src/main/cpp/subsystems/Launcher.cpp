#include "subsystems/Launcher.h"
#include "RobotMap.h"

LauncherSubsystem::LauncherSubsystem() : frc::Subsystem("Launch") {}

void LauncherSubsystem::Launch(int power)
{
  if (power >= 0)
  {
    cyl1.Set(kCyl1Enable);
  }
  if (power >= 1)
  {
    cyl2.Set(true);
  }
  if (power >= 2)
  {
    cyl3.Set(true);
  }
}

void LauncherSubsystem::Retract()
{
  cyl1.Set(kCyl1Disable);
  cyl2.Set(false);
  cyl3.Set(false);
}