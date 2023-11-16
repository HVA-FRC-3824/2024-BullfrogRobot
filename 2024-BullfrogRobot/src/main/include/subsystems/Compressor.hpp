#ifndef AIR_H
#define AIR_H

#include <frc2/command/SubsystemBase.h>
#include <frc/PneumaticHub.h>
#include "../Constants.h"


class Compressor : frc2::SubsystemBase
{
    public:
        void toggle_compressor();
    private:
        bool toggle = false;
        /* Create genuine compressor obejct, will have to go off of Pneum. Hub thingy */
        /*Overview: https://docs.wpilib.org/en/stable/docs/software/hardware-apis/pneumatics/pneumatics.html#generating-and-storing-pressure*/
        /*Compressor Docs: https://github.wpilib.org/allwpilib/docs/release/cpp/classfrc_1_1_compressor.html*/
        /* We used a REV branded Pneumatics Hub! (REVPH) */


        /* For phyiscal requirements (max psi, desired psi, etc.) ask a build member until they tell you (may take a while!) */
};

#endif