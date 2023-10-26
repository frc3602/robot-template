/*
 * Copyright (C) 2023 Team 3602 All rights reserved. This work is
 * licensed under the terms of the MIT license which can be found
 * in the root directory of this project.
 */

#pragma once

#include <frc/smartdashboard/SendableChooser.h>
#include <frc2/command/CommandPtr.h>

class RobotContainer {
   public:
    explicit RobotContainer();

    // Autonomous
    frc::SendableChooser<frc2::CommandPtr> sendableChooser;

    std::optional<frc2::CommandPtr> GetAutonomousCommand();

   private:
    // Subsystems

    // Controllers

    void ConfigDefaultCommands();

    void ConfigButtonBindings();

    void ConfigAutonomous();
};
