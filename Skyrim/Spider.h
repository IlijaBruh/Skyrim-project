#ifndef SPIDER_H
#define SPIDER_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Spider
{
    private:
        string type;
    public:
        void setType(int ty){
            if(ty == 1){
                type = "Normal";
            }
            else{
                type = "Giant";
            }
        }

        string getType(){
            return type;

};

#endif // SPIDER_H
