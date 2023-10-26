# Copyright (C) Team 3602 All rights reserved. This work is
# licensed under the terms of the MIT license which can be
# found in the root directory of this project.

import typing
import commands2
import wpilib


class RobotContainer:
    def __init__(self) -> None:
        # Autonomous
        self.sendableChooser = wpilib.SendableChooser()

        # Subsystems

        # Controllers

        self.configDefaultCommands()
        self.configButtonBindings()

    def configDefaultCommands(self) -> None:
        pass

    def configButtonBindings(self) -> None:
        pass

    def configAutonomous(self) -> None:
        self.sendableChooser.addOption()  # Add auton commmand here

        wpilib.SmartDashboard.putData(self.sendableChooser)

    def getAutonomousCommand(self) -> typing.Optional[commands2.Command]:
        return self.sendableChooser.getSelected()
