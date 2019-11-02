#pragma once

#include <frc/commands/Command.h>

#include "RobotMap.h"

class LaunchLow : public frc::Command
{
public:
  LaunchLow();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;

private:
};
