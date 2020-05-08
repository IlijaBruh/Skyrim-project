#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include "Item.h"

using namespace std;

class Staff : Item
{
    private:
        string type;
        int charge;

    public:
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Alteration";
                    break;

                case 2:
                    type = "Conjuration";
                    break;

                case 3:
                    type = "Destruction";
                    break;

                case 4:
                    type = "Illusion";
                    break;

                case 5:
                    type = "Restoration";
                    break;

                case 6:
                    type = "Deadric";
                    break;
            }
        }
        void setCharge(){
            int ch = 100;
            charge = ch;
        }

        string getType(){
            return type;
        }
        int getCharge(){
            return charge;
        }

        void useStaff(){
            charge -= 10;
        }
        void fillStaff(){
            charge += 10;
        }
};

#endif // STAFF_H
