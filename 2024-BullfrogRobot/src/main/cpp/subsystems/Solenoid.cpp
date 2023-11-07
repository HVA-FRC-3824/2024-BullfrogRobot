#include "../../include/subsystems/Solenoid.hpp"

void Solenoid::toggle()
{
    this->solenoidToggle = !this->solenoidToggle;
} 