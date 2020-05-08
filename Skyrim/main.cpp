#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

class Attack{
    public:
        virtual void attack()=0;
};

class Player : public Attack{
    private:
        string pName;
        int pHp;
        int pMp;
        int pStamina;
        int pWeight;
        int pLvl;
        int nextLvl;
        int pXp;
        int money;

    public:

        void attack(){
            cout << "Player attacked";
        }

        void fish(){
            srand (time(NULL));
            int f;
            f = rand() % 100 + 1;

            if(f <= 15){
                cout << "Salamon";
            }
            if(f > 15 && f <= 30){
                cout << "Longfish";
            }
            if(f > 30 && f <= 45){
                cout << "River Betty";
            }
            if(f > 45 && f <= 60){
                cout << "Histcarp";
            }
            if(f > 60 && f <= 75){
                cout << "Silverside Perch";
            }
            if(f > 75 && f <= 90){
                cout << "Cyrodilic Spadetail";
            }
            if(f > 90){
                cout << "Vise srece drugi pu";
            }
        }

        void mine(){
            srand (time(NULL));
            int i;
            i = rand() % 100 + 1;

            if(i <= 20){
                cout << "Iron";
            }
            if(i > 20 && i <= 30){
                cout << "Stalhtim";
            }
            if(i > 30 && i <= 40){
                cout << "Corundum";
            }
            if(i > 40 && i <= 50){
                cout << "Moonstone";
            }
            if(i > 50 && i <= 65){
                cout << "Silver";
            }
            if(i > 75 && i <= 80){
                cout << "Gold!";
            }
            if(i > 80 && i <= 90){
                cout << "Rbony";
            }
            if(i > 90){
                cout << "Vise srece drugi put";
            }
        }

        void setPname(string pNa){
            pName = pNa;
        }
        void setPHp(int pH){
            pHp = pH;
        }
        void setPStamina(int pSt){
            pStamina = pSt;
        }
        int setPWeight(int pWe){
            pWeight = pWe;
        }
        int setPLvl(int pLv){
            pLvl = pLv;
        }
        int setNextLvl(int ne){
            nextLvl = ne;
        }
        int setPXp(int pX){
            pXp = pX;
        }
        int setMoney(int mo){
            money = mo;
        }

        string getPname(){
            return pName;
        }
        int getPHp(){
            return pHp;
        }
        int getPStamina(){
            return pStamina;
        }
        int getPWeight(){
            return pWeight;
        }
        int getPLvl(){
            return pLvl;
        }
        int getNextLvl(){
            return nextLvl;
        }
        int getPXp(){
            return pXp;
        }
        int getMoney(){
            return money;
        }

};


int main()
{
    cout << "I used to be an adventurer like you until i took an arrow to the knee" << endl;

    return 0;
}
