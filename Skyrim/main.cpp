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

class monster{
    private:
        string mName;
        int mLvl;
        int mHp;
        int mXp;

    public:
        void setMName(string mNa){
            mName = mNa;
        }
        void setMLvl(int mLv){
            mLvl = mLv;
        }
        void setMHp(int mH){
            mHp = mH;
        }
        void setMXp(int mX){
            mXp = mX;
        }

        string getMName(){
            return mName;
        }
        int getMLvl(){
            return mLvl;
        }
        int getMHp(){
            return mHp;
        }
        int getMXp(){
            return mXp;
        }

};

class Dragon : monster{
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

class Troll : monster{
    private:
        string type;
    public:
        void getType(int ty){
            if(ty == 1){
                type = "Normal";
            }
            else{
                type = "Ice";
            }
        }
};

class wolf : monster{
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

class Bear : monster{
    private:
        string type;
    public:
        void setType(int ty){
            if(ty == 1){
                type = "Nprmal";
            }
            else{
                type = "Ice";
            }
        }

        string getType(){
            return type;
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
    cout << "i used to be an adventurer like you until i took an arrow to the knee" << endl;

    return 0;
}
