#include <iostream>
#include <string>  //for string manipulation
#include <fstream> //for input/output
#include <cmath>   //for math operations
#include "mosfet.h"

MOSFET::MOSFET()
{

    //set all values equal to -1
    ox_cap = aspect_ratio = width = length = vov = vg = vs = vd = oxide_thick = kn = kp = kpprime = knprime = drain_current = vgs = vds = vtn = vtp = lambda = va = vaprime = drain_sat_current = vsg = -1;
}

void MOSFET::setPMOSVals(MOSFET *mos, double ocap, double othick, double w, double l, double vover, double vgate, double vsource, double vdrain, double strans, double trans, double lamb)
{

    mos->ox_cap = ocap;
    mos->oxide_thick = othick;
    mos->width = w;
    mos->length = l;
    mos->vov = vover;
    mos->vg = vgate;
    mos->vs = vsource;
    mos->vd = vdrain;
    mos->kpprime = strans;
    mos->kp = trans;
    mos->lambda = lamb;
}

void MOSFET::printPMOS(MOSFET *mos)
{

    cout << "\n\n\n\n\n\n\n\n//////////////////////////////////////////////////\nCurrent MOSFET VALUES:\n";

    if (mos->ox_cap != -1)
    {

        cout << "Oxide Capacitence = " << mos->ox_cap << "F/m^2";
    }
    else
    {

        cout << "Oxide Capacitence: N/A";
    }

    if (mos->oxide_thick != -1)
    {

        cout << "\t\tOxide Thickness = " << mos->oxide_thick << "nm";
    }
    else
    {

        cout << "\t\tOxide Thickness: N/A";
    }
    if (mos->width != -1)
    {

        cout << "\nMOSFET Width = " << mos->width << "µm";
    }
    else
    {

        cout << "\nMOSFET Width: N/A";
    }

    if (mos->length != -1)
    {

        cout << "\t\t\tMOSFET Length = " << mos->length << "µm";
    }
    else
    {

        cout << "\t\t\tMOSFET Length: N/A";
    }
    if (mos->vov != -1)
    {

        cout << "\nOverdrive Voltage = " << mos->vov << "V";
    }
    else
    {

        cout << "\nOverdrive Voltage: N/A";
    }

    if (mos->vg != -1)
    {

        cout << "\t\t\tGate Voltage = " << mos->vg << "V";
    }
    else
    {

        cout << "\t\t\tGate Voltage: N/A";
    }
    if (mos->vs != -1)
    {

        cout << "\nSource Voltage = " << mos->vs << "V";
    }
    else
    {

        cout << "\nSource Voltage: N/A";
    }

    if (mos->vd != -1)
    {

        cout << "\t\t\tDrain Voltage = " << mos->vd << "V";
    }
    else
    {

        cout << "\t\t\tDrain Voltage: N/A";
    }
    if (mos->kpprime != -1)
    {

        cout << "\nScaled Transconductance = " << mos->kpprime << "A/V^2";
    }
    else
    {

        cout << "\nScaled Transconductance: N/A";
    }

    if (mos->kp != -1)
    {

        cout << "\tLarge Scale Transconductance = " << mos->kp << "A/V^2";
    }
    else
    {

        cout << "\tLarge Scale Transconductance: N/A";
    }
    if (mos->lambda != -1)
    {

        cout << "\nLambda = " << mos->lambda;
    }
    else
    {

        cout << "\nLambda: N/A";
    }

    cout << "\n//////////////////////////////////////////////////\n\n\n\n\n\n\n\n\n\n";
}