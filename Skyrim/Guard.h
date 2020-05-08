#ifndef GUARD_H
#define GUARD_H
#include <iostream>
#include "Monster.h"

using namespace std;

class Guard : Monster
{
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

#endif // GUARD_H
