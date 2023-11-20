#include "../../include/subsystems/LinearActuator.hpp"

void LinearActuator::actuate(double input)
{
    /* Control TalonSRX, see documentation! */
    /*https://store.ctr-electronics.com/content/api/cpp/html/classctre_1_1phoenix_1_1motorcontrol_1_1can_1_1_w_p_i___talon_s_r_x.html*/
    ACTUATOR_CONTROLLER.Set(ctre::phoenix::motorcontrol::ControlMode::PercentOutput, input);
}