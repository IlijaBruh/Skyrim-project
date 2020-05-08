#ifndef FALMER_H
#define FALMER_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Falmer : Monster
{
    private:
        string type;
    public:
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Archer";
                    break;

                case 2:
                    type = "Shaman";
                    break;

                case 3:
                    type = "Skulker";
                    break;

                case 4:
                    type = "Shadowmaster";
                    break;

                case 5:
                    type = "Nightprowler";
                    break;

                case 6:
                    type = "Gloomlurker";
                    break;
            }
        }

        string getType(){
            return type;
        }
};

#endif // FALMER_H
