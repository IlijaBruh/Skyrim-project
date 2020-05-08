#ifndef ITEM_H
#define ITEM_H
#include <iostream>

using namespace std;

class Item
{
    private:
        int id;
        int iWeight;
        int price;
        int iDmg;
        int number;

    public:
        void setId(int idd){
            id = idd;
        }
        void setIWeight(int iWe){
            iWeight = iWe;
        }
        void setSdrai(int pr){
            price = pr;
        }
        void setNumber(int nu){
            number = nu;
        }

        int getId(){
            return id;
        }
        int getIWeight(){
            return iWeight;
        }
        int getPrice(){
            return price;
        }
        int getNumber(){
            return number;
        }
};

#endif // ITEM_H
