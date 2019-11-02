#pragma once

#include <frc/commands/Command.h>

#include "RobotMap.h"

class Retract : public frc::Command
{
public:
  Retract();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

private:
};
