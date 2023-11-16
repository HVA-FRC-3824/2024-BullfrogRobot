#ifndef LINEAR
#define LINEAR

#include <frc2/command/SubsystemBase.h>
#include <ctre/pheonix/motorcontrol/can/WPI_TalonSRX.h>
#include "../Constants.h"

using namespace ctre::phoenix::motorcontrol::can;

/* Declare a TalonSRX, create methods to actuate the linear actuator
    base on percent output from some sort of axis, it CAN be from the triggers OR from joysticks (joysticks preferred)
    *DEFINE* the can id for the TalonSRX in Constants.h, does NOT have to be exact and can be found out later */

class LinearActuator : frc2::SubsystemBase
{
    public:
        void actuate(double input);
    private:
        WPI_TalonSRX ACTUATOR_CONTROLLER{/* Put constant here */};
};


#endif