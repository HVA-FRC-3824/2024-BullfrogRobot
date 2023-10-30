#include "../../include/subsystems/Grabber.hpp"

void Grabber::spin_grabber(double value)
{
    for(int i = 0; i < 2 ; i++)
    {
        this->MOTORS[i].Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, value);
    }
}