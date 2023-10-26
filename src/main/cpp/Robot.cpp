/*
 * Copyright (C) 2023 Team 3602 All rights reserved. This work is
 * licensed under the terms of the MIT license which can be found
 * in the root directory of this project.
 */

#include "Robot.hpp"

#include <frc2/command/CommandScheduler.h>

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {
    frc2::CommandScheduler::GetInstance().Run();
}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::AutonomousInit() {
    autonomousCommand = robotContainer.GetAutonomousCommand();

    if (autonomousCommand) {
        autonomousCommand->Schedule();
    }
}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {
    if (autonomousCommand) {
        autonomousCommand->Cancel();
    }
}

void Robot::TeleopPeriodic() {}

void Robot::TestInit() {
    autonomousCommand->Cancel();
}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
    return frc::StartRobot<Robot>();
}
#endif
