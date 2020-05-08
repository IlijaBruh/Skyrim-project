#ifndef FISH_H
#define FISH_H

#include <iostream>
#include "Monster.h"

using namespace std;

class Fish
{
    private:
        string type;

    public:

        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Salamon";
                    break;

                case 2:
                    type = "Longfish";
                    break;

                case 3:
                    type = "River Betty";
                    break;

                case 4:
                    type = "Histcarp";
                    break;

                case 5:
                    type = "Silverside Perch";
                    break;

                case 6:
                    type = "Cyrodilic Spadetai";
                    break;
            }
        }

        string getType(){
            return type;
        }
};

#endif // FISH_H
