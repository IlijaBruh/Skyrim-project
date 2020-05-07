#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Spell{
    private:
        string sName;
        int sDrain;

    public:
        void setSname(string sNa){
            sName = sNa;
        }
        void setSdrai(int sDr){
            sDrain = sDr;
        }

        string getSname(){
            return sName;
        }
        int getSdrain(){
            return sDrain;
        }

};

class Item{
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

class Wolf : monster{
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

class Guard : monster{
    private:
        string town;
        int pBounty;
        int hostile;
    public:
        void setTown(int to){
            if(to == 1){
                town = "Imperial";
            }
            else{
                if(to == 2){
                    town = "Stormcloak";
                }
                else{
                    if(to == 3){
                        town = "Winterhold";
                    }
                    else{
                        if(to == 4){
                            town = "Windhelm";
                        }
                        else{
                            if(to == 5){
                                town = "Whiterun";
                            }
                            else{
                                if(to == 6){
                                    town = "Solitude";
                                }
                                else{
                                    if(to == 7){
                                        town = "Riften";
                                    }
                                    else{
                                        if(to == 8){
                                            town = "Dawnstar";
                                        }
                                        else{
                                            if(to == 9){
                                                town = "Markarth";
                                            }
                                            else{
                                                if(to == 10){
                                                    town = "Morthal";
                                                }
                                                else{
                                                    if(to == 11){
                                                        town = "Falkreath";
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        void setPBouty(int bo){
            pBounty = bo;
            if(bo > 0){
                hostile = 1;
            }
        }

        string getTown(){
            return town;
        }
        int getPBounty(){
            return pBounty;
        }
        int getHostile(){
            return hostile;
        }
};

class Spider : monster{
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
        }
};

class Falmer : monster{
    private:
        string type;
    public:
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Archer";
                    break;

                case 2:
                    type = "Shaman";
                    break;

                case 3:
                    type = "Skulker";
                    break;

                case 4:
                    type = "Shadowmaster";
                    break;

                case 5:
                    type = "Nightprowler";
                    break;

                case 6:
                    type = "Gloomlurker";
                    break;
            }
        }

        string getType(){
            return type;
        }
};

class Merchant : monster{
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

class Fish : monster{
    private:
        string type;

    public:

        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Salamon";
                    break;

                case 2:
                    type = "Longfish";
                    break;

                case 3:
                    type = "River Betty";
                    break;

                case 4:
                    type = "Histcarp";
                    break;

                case 5:
                    type = "Silverside Perch";
                    break;

                case 6:
                    type = "Cyrodilic Spadetai";
                    break;
            }
        }

        string getType(){
            return type;
        }
};

class Armor : Item{
    private:
        int armor;
        string type;

    public:

        void setArmor(int ar){
            armor = ar;
        }
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Light";
                    break;

                case 2:
                    type = "Normal";
                    break;

                case 3:
                    type = "Heavy";
                    break;
            }
        }

        int getArmor(){
            return armor;
        }
        string getType(){
            return type;
        }
};

class Staff : Item{
    private:
        string type;
        int charge;

    public:
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Alteration";
                    break;

                case 2:
                    type = "Conjuration";
                    break;

                case 3:
                    type = "Destruction";
                    break;

                case 4:
                    type = "Illusion";
                    break;

                case 5:
                    type = "Restoration";
                    break;

                case 6:
                    type = "Deadric";
                    break;
            }
        }
        void setCharge(){
            int ch = 100;
            charge = ch;
        }

        string getType(){
            return type;
        }
        int getCharge(){
            return charge;
        }

        void useStaff(){
            charge -= 10;
        }
        void fillStaff(){
            charge += 10;
        }
};

class Sword : Item{
    private:
        string type;
        int range;
        int attackSpeed;

    public:
        void setType(int ty){
            switch(ty){
                case 1:
                    type = "Dagger";
                    range = 100;
                    attackSpeed = 25;
                    break;

                case 2:
                    type = "Short Sword";
                    range = 150;
                    attackSpeed = 30;
                    break;

                case 3:
                    type = "Sword";
                    range = 200;
                    attackSpeed = 50;
                    break;

                case 4:
                    type = "Long Sword";
                    range = 250;
                    attackSpeed = 75;
                    break;

                case 5:
                    type = "Great Sword";
                    range = 225;
                    attackSpeed = 90;
                    break;
            }
        }

        string getType(){
            return type;
        }
        int getRange(){
            return range;
        }
        int getAttackSpeed(){
            return attackSpeed;
        }
};

class Weapons : Item{
    private:
        int attackSpeed;
        int range;

    public:
        void setAttackSpeed(int as){
            attackSpeed = as;
        }
        void setRange(int ra){
            range = ra;
        }

        int getAttackSpeed(){
            return attackSpeed;
        }
        int getRange(){
            return range;
        }
};

class Jewelry : Item{
    private:
        string enchantement;
        string type;

    public:
        void setType(int ty){
            switch(ty){

                case 1:
                    type = "Ring";
                    break;

                case 2:
                    type = "Necklaces";
                    break;

                case 3:
                    type = "Tiara";
                    break;
            }
        }
        void setEnchantement(int en){
            switch(en){

                case 1:
                    enchantement = "Magicka Regen";
                    break;

                case 2:
                    enchantement = "Stamina Regen";
                    break;

                case 3:
                    enchantement = "Magicka Regen";
                    break;

                case 4:
                    enchantement = "Health Regen";
                    break;

                case 5:
                    enchantement = "Health";
                    break;

                case 6:
                    enchantement = "Stamina";
                    break;

                case 7:
                    enchantement = "Magicka";
                    break;

                case 8:
                    enchantement = "Resist Disease";
                    break;

                case 9:
                    enchantement = "Resist Fire";
                    break;

                case 10:
                    enchantement = "Resist Frost";
                    break;

                case 11:
                    enchantement = "Resist Magic";
                    break;

                case 12:
                    enchantement = "Resist Poison";
                    break;

                case 13:
                    enchantement = "Resist Shock";
                    break;

                case 14:
                    enchantement = "Water Breathing";
                    break;
            }
        }

        string getType(){
            return type;
        }
        string getEnchatment(){
            return enchantement;
        }
};

class Restoraton : Spell{
    private:
        int healing;

    public:
        void setHealing(int he){
            healing = he;
        }

        int getHealing(){
            return healing;
        }
};

class Destruction : Spell{
    private:
        int dmg;
        int targets;

    public:
        void setDmg(int dm){
            dmg = dm;
        }
        void setTargets(int tg){
            targets = tg;
        }

        int getDmg(){
            return dmg;
        }
        int getTargets(){
            return targets;
        }
};

class Conjuration : Spell{
    private:
        string summon;

    public:
        void setSummon(int su){
            switch(su){

                case 1:
                    summon = "Summon Ash Guardian";
                    break;

                case 2:
                    summon = "Summon Daedra";
                    break;

                case 3:
                    summon = "Summon Dermora Lord";
                    break;

                case 4:
                    summon = "Summon Wrathman";
                    break;

                case 5:
                    summon = "Summon Storm Atronach";
                    break;

                case 6:
                    summon = "Summon Flame Atronach";
                    break;

                case 7:
                    summon = "Summon Frost Atronach";
                    break;

                case 8:
                    summon = "Summon Storm Atronach";
                    break;

                case 9:
                    summon = "Summon Undead";
                    break;

                case 10:
                    summon = "Summon Dagger";
                    break;

                case 11:
                    summon = "Summon Sword";
                    break;

                case 12:
                    summon = "Summon Zombie";
                    break;

                case 13:
                    summon = "Summon Familiar";
                    break;

                case 14:
                    summon = "Summon Bow";
                    break;

                case 15:
                    summon = "Summon Battleaxe";
                    break;

            }
        }

        string getSummon(){
            return summon;
        }
};

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
