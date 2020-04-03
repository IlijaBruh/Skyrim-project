#include <iostream>

using namespace std;

class spell{
    private:
        string sname;
        float sdmg;
        int sdrain;

    public:
        void setName(string sna){
            sname = sna;
        }
        void setDmg(float sdm){
            sdmg = sdm;
        }
        void setDrai(int sdr){
            sdrain = sdr;
        }

        string getSname(){
            return sname;
        }
        float getSdmg(){
            return sdmg;
        }
        int getSdrain(){
            return sdrain;
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
