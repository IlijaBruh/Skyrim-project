#ifndef MERCHANT_H
#define MERCHANT_H

#include <iostream>
#include "Monster.h"

using namespace std;


class Merchant : Monster
{
    private:
        string race;
        string type;
        int balance;

    public:

        void setRace(int ra){

            switch(ra){

                case 1:
                    race = "Nord";
                    break;

                case 2:
                    race = "Orc";
                    break;

                case 3:
                    race = "High Elf";
                    break;

                case 4:
                    race = "Wood Elf";
                    break;

                case 5:
                    race = "Argonian";
                    break;

                case 6:
                    race = "Breton";
                    break;

                case 7:
                    race = "Imperial";
                    break;

                case 8:
                    race = "Khajiit";
                    break;

                case 9:
                    race = "Redguard";
                    break;
            }
        }

        void setType(int ty){
            switch(ty){
                case 1:
                    type = "Alchemist";
                    break;

                case 2:
                    type = "Blacksmith";
                    break;

                case 3:
                    type = "Fence";
                    break;

                case 4:
                    type = "Food Merchant";
                    break;

                case 5:
                    type = "General Goods Merchant";
                    break;

                case 6:
                    type = "Jewelery";
                    break;

                case 7:
                    type ="Spell Merchant";
                    break;

                case 8:
                    type = "Tavern";
                    break;

                case 9:
                    type = "Traveling Merchant";
                    break;
            }
        }

        void setBalance(int bl){
            balance = bl;
        }

        string getRace(){
            return race;
        }
        string getType(){
            return type;
        }
        int getBalance(){
            return balance;
        }
};

#endif // MERCHANT_H
