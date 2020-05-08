#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>

using namespace std;

class Monster
{
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

#endif // MONSTER_H
