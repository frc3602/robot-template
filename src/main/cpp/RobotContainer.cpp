/*
 * Copyright (C) 2023 Team 3602 All rights reserved. This work is
 * licensed under the terms of the MIT license which can be found
 * in the root directory of this project.
 */

#include "RobotContainer.hpp"

#include <frc/smartdashboard/SmartDashboard.h>

RobotContainer::RobotContainer() {
    ConfigDefaultCommands();
    ConfigButtonBindings();
    ConfigAutonomous();
}

void RobotContainer::ConfigDefaultCommands() {
}

void RobotContainer::ConfigButtonBindings() {
}

void RobotContainer::ConfigAutonomous() {
    frc::SmartDashboard::PutData(&sendableChooser);
}

std::optional<frc2::CommandPtr> RobotContainer::GetAutonomousCommand() {
    return sendableChooser.GetSelected();
}
