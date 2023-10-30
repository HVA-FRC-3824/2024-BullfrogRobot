#ifndef GRABBER_H
#define GRABBER_H

#include <ctre/phoenix/motorcontrol/can/WPI_TalonFX.h>
#include <frc2/command/SubsystemBase.h>
#include "../Constants.h"

using namespace ctre::phoenix::motorcontrol::can;

class Grabber : frc2::SubsystemBase
{
    public:
        void spin_grabber(double value);
    private:
        WPI_TalonFX MOTORS[2] = {
            {MOTOR_ONE_CAN_ID},
            {MOTOR_TWO_CAN_ID}
        };
};

#endif