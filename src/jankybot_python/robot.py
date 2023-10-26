#!usr/bin/env python3

# Copyright (C) Team 3602 All rights reserved. This work is
# licensed under the terms of the MIT license which can be
# found in the root directory of this project.

import typing
import wpilib
import commands2

from robotcontainer import RobotContainer


class Robot(commands2.TimedCommandRobot):
    autonomousCommand: typing.Optional[commands2.Command] = None

    def robotInit(self) -> None:
        self.robotContainer = RobotContainer()

    def robotPeriodic(self) -> None:
        commands2.CommandScheduler.getInstance().run()

    def autonomousInit(self) -> None:
        self.autonomousCommand = self.robotContainer.getAutonomousCommand()

        if self.autonomousCommand:
            self.autonomousCommand.schedule()

    def autonomousPeriodic(self) -> None:
        pass

    def teleopInit(self) -> None:
        if self.autonomousCommand:
            self.autonomousCommand.cancel()

    def teleopPeriodic(self) -> None:
        pass

    def testInit(self) -> None:
        commands2.CommandScheduler.getInstance().cancelAll()

    def testPeriodic(self) -> None:
        pass


if __name__ == "__main__":
    wpilib.run(Robot)
