#ifndef DRAGON_H
#define DRAGON_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Dragon : Monster
{
    private:
        string elderD;
        string type;

    public:
        void setElderD(int el){
            if(el == 1){
                elderD = "yes";
            }
            else{
                elderD = "no";
            }
        }
        void setType(int ty){
            if(ty == 1){
                type = "Fire";
            }
            else{
                type = "Ice";
            }
        }

        string getElderD(){
            return elderD;
        }
        string getType(){
            return type;
        }
};

#endif // DRAGON_H
