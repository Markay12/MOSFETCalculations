#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cctype>
#include "main.h"
#include "mosfet.h"

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

void MOSorBJTMenu()
{

    printf("\n----------------------------------------------------------\nPlease select which device you are using:\n1.) MOSFET\n2.) BJT (Bipolar Junction Transistor\n3.) EXIT PROGRAM\n----------------------------------------------------------\n");
}

int main()
{

    int c;
    double kp, kpprime, ox_cap, width, length, vov, vg, vs, vd, oxide_thick, kn, knprime, drain_current, vgs, vds, vtn, vtp, lambda, va, vaprime, drain_sat_current, vsg;
    long double e_perm = 3.45 * pow(10, -13);

    char getValue;
    MOSFET *mos = new MOSFET();
    string know = "Do you know ";

    while (1)
    {

        MOSorBJTMenu();

        cin >> c;

        switch (c)
        {
        case 1:
            cout << "You have chosen the MOSFET Device" << endl;

            //switch statement to use the MOSFET device
            //create MOSFET object
            mos = new MOSFET();

            char pn;

            pn = toupper(pn);

            printf("\nIs this an NMOS or PMOS MOSFET? (N or P)\n\n");
            cin >> pn;

            while (1)
            {
                switch (pn)
                {

                case 'P':
                    cout << "-------------------------------------\nYou have selected a PMOS type MOSFET\n-------------------------------------\n"
                         << endl;

                    printf("\nWhat are your initial/given values? (Y or N)\n");

                    cout << "\n"
                         << know << "the oxide capacitence?: ";
                    //yes or no
                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\nDo you know the oxide capacitence?: ";
                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (F/m^2): ";
                        cin >> ox_cap;
                    }
                    else
                    {

                        ox_cap = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the oxide thickness?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the oxide thickness?: ";

                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (nm): ";
                        cin >> oxide_thick;
                    }
                    else
                    {

                        oxide_thick = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the PMOS width?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the PMOS width?: ";

                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (µm): ";
                        cin >> width;
                    }
                    else
                    {

                        width = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the PMOS length?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the PMOS length?: ";

                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (µm): ";
                        cin >> length;
                    }
                    else
                    {

                        length = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the overdrive voltage?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the overdrive voltage?: ";

                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (Volts): ";
                        cin >> vov;
                    }
                    else
                    {

                        vov = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the gate voltage?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the gate voltage?: ";

                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (Volts): ";
                        cin >> vg;
                    }
                    else
                    {

                        vg = -1; //set to -1 not there
                    }
                    cout << "\n"
                         << know << "the source voltage?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the source voltage?: ";
                        ;
                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (Volts): ";
                        cin >> vs;
                    }
                    else
                    {

                        vs = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the drain voltage?: ";

                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the drain voltage?: ";
                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (Volts): ";
                        cin >> vd;
                    }
                    else
                    {

                        vd = -1; //set to -1 not there
                    }

                    cout << "\n"
                         << know << "the scaled transconductance (kp')?: ";
                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the scaled transconductance?: ";
                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (A/V^2): ";
                        cin >> kpprime;
                    }
                    else
                    {

                        kpprime = -1; //set to -1 not there
                    }

                    //if we know these three then we already know kpprime
                    if (width == -1 || length == -1 || kpprime == -1)
                    {
                        cout << "\n"
                             << know << "the large signal transconductance (kp)?: ";
                        cin >> getValue;
                        getValue = toupper(getValue);

                        while (getValue != 'Y' && getValue != 'N')
                        {

                            cout << "Not valid Response. Try again (Y or N)\n"
                                 << know << "the large signal transconductance?: ";
                            cin >> getValue;
                        }

                        if (getValue == 'Y')
                        {

                            cout << "Value (A/V^2): ";
                            cin >> kp;
                        }
                        else
                        {

                            kp = -1; //set to -1 not there
                        }
                    }
                    else
                    {

                        kp = -1;
                    }

                    cout << "\n"
                         << know << "lambda?: ";
                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the lambda?: ";
                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value: ";
                        cin >> lambda;
                    }
                    else
                    {

                        lambda = -1; //set to -1 not there
                    }
                    cout << "\n"
                         << know << "the early voltage (Va): ";
                    cin >> getValue;
                    getValue = toupper(getValue);

                    while (getValue != 'Y' && getValue != 'N')
                    {

                        cout << "Not valid Response. Try again (Y or N)\n"
                             << know << "the early voltage?: ";
                        cin >> getValue;
                    }

                    if (getValue == 'Y')
                    {

                        cout << "Value (Volts): ";
                        cin >> va;
                    }
                    else
                    {

                        va = -1; //set to -1 not there
                    }

                    cout << "-------------------------------------\nAll Main Values Collected\n-------------------------------------\n";

                    while (1)
                    {

                        int pmosCalcs;

                        //instantiate with the known values
                        mos->setPMOSVals(mos, ox_cap, oxide_thick, width, length, vov, vg, vs, vd, kpprime, kp, lambda);

                        printMenu();
                        cin >> pmosCalcs;

                        switch (pmosCalcs)
                        {

                        case 0:
                            mos->printPMOS(mos);
                            break;

                        default:
                            break;
                        }
                    }

                    break;

                case 'N':
                    cout << "-------------------------------------\nYou have selected a NMOS type MOSFET\n-------------------------------------\n"
                         << endl;
                    break;

                default:
                    cout << "Invalid Input\nPlease use input 'P' or 'N'\n"
                         << endl;
                    break;
                }
            }

            break;

        case 3:
            cout << "Exiting Program" << endl;
            return 0;

        default:
            break;
        }
    }
}