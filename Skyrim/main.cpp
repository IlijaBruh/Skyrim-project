#include <iostream>

using namespace std;

class spell{
    private:
        string sName;
        float sDmg;
        int sDrain;

    public:
        void setSname(string sNa){
            sName = sNa;
        }
        void setSdmg(float sDm){
            sDmg = sDm;
        }
        void setSdrai(int sDr){
            sDrain = sDr;
        }

        string getSname(){
            return sName;
        }
        float getSdmg(){
            return sDmg;
        }
        int getSdrain(){
            return sDrain;
        }

};

class item{
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

class Player{
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
        void setPname(string pNa){
            pName = pNa;
        }

};


int main()
{
    cout << "i used to be an adventurer like you until i took an arrow to the knee" << endl;

    return 0;
}
