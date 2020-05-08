#ifndef BEAR_H
#define BEAR_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Bear
{
    private:
        string type;

    public:
        void setType(int ty){
            if(ty == 1){
                type = "Ice";
            }
            else{
                type = "Normal";
            }
        }

        string getType(){
            return type;
        }
};

#endif // BEAR_H
