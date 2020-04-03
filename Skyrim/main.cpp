#include <iostream>

using namespace std;

class spell{
    private:
        string sName;
        float sDmg;
        int sDrain;

    public:
        void setName(string sNa){
            sName = sNa;
        }
        void setDmg(float sDm){
            sDmg = sDm;
        }
        void setDrai(int sDr){
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

class Player{
    private:
        string name;
        int pHp;
        int pMp;
        int pStamina;
        int pWeight;
        int pLvl;
        int nextLvl;
        int pXp;

};

int main()
{
    cout << "i used to be an adventurer like you until i took an arrow to the knee" << endl;

    return 0;
}
