#pragma once

#include <frc/commands/Command.h>
#include <frc/Joystick.h>

#include "RobotMap.h"

class ArcadeDrive : public frc::Command
{
public:
  ArcadeDrive();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

private:
  frc::Joystick *joy;
};
