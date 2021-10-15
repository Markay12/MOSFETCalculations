#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cctype>
#include "main.h"

using namespace std;


void printMenu()
{

    cout << "Menu of operations:" << endl;
    cout << "1.) Calculate Gate Oxide Capacitence" << endl;
    cout << "2.) Calculate Charge in Induced Channel" << endl;
    cout << "3.) Determine MOSFET Mode of Operation" << endl;
    cout << "4.) Determine Large Signal Transconductance" << endl;
    cout << "5.) Determine Scaled Conductance" << endl;
    cout << "6.) Determine Channel Resistance" << endl;
    cout << "7.) Determine Channel Conductance" << endl;
    cout << "8.) Solve for Drain Current" << endl;
    cout << "0.) Print All Determined Parameters" << endl;
    cout << endl;


}


int main()
{

    int c;
    double ox_cap, width, length, vov, vg, vs, vd, oxide_thick, kn, knprime, drain_current, vgs, vds, vtn, vtp, lambda, va, vaprime, drain_sat_current, vsg;
    long double e_perm = 3.45 * pow(10, -13);


    while (1)
    {

        printMenu();

        //take in char input
        cin >> c;

        switch (c)
        {


            

            case 0:

                printf("\n----------------------------------------------------------\n");
                cout << "No parameters defined" << endl;
                printf("----------------------------------------------------------\n\n");
                break;

            case 10:
                return 0;

            default: 
                cout << "Invalid Arguments" << endl;
                break;
        

        }


    }

    return 0;
    


}