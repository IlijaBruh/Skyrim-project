#ifndef TROLL_H
#define TROLL_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Troll : Monster
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

#endif // TROLL_H
