#ifndef MOSFET_H
#define MOSFET_H

using namespace std;

class MOSFET
{

public:
    MOSFET();  //constructor
    ~MOSFET(); //destructor

    double ox_cap, kp, kpprime, width, length, vov, vg, vs, vd, oxide_thick, kn, knprime, drain_current, vgs, vds, vtn, vtp, lambda, va, vaprime, drain_sat_current, vsg;

    double aspect_ratio; //  W/L

    void setPMOSVals(MOSFET *mos, double ocap, double othick, double w, double l, double vover, double vgate, double vsource, double vdrain, double strans, double trans, double lamb);
    void printPMOS(MOSFET *mos);

    void setNMOSVal();
};

#endif