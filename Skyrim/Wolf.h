#ifndef WOLF_H
#define WOLF_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Wolf : Monster
{
    private:
        string type;
    public:
        void setType(int ty){
            if(ty == 1){
                type = "Normal";
            }
            else{
                type = "Ice";
            }
        }

        string getType(){
            return type;
        }
};

#endif // WOLF_H
