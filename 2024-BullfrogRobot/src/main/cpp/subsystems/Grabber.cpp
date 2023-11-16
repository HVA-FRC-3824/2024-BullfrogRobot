#include "../../include/subsystems/Grabber.hpp"

void Grabber::spin_grabber(double value)
{
    this->MOTORS[0].Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, value);
    this->MOTORS[1].Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, -value);
}