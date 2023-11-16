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
        /* Create genuine compressor obejct, will have to go off of Pneum. Control Module thingy*/
};

#endif