#ifndef SOLENOID_H
#define SOLENOID_H

#include <frc2/command/SubsystemBase.h>
#include <frc/Solenoid.h>
#include "../Constants.h"


class Solenoid : frc::Solenoid
{
    public:
        void toggle();
    private:
        bool solenoidToggle = false;
        
};

#endif