#include "header.h"


/*COMBAT*/
//This function basically allocates opponent abilities to appropriate variables.
int combatsystems(int opponentHealth,int currentdifficulty,char currentenemyname[30]) //changes enemy abilities
{
    int res;
    weapondamage=weapondamagecalc(weaponequipped);  //Allocates weapon damage to player weapons
    enemyHealth=opponentHealth;
    difficulty=currentdifficulty;
    strcpy(enemyName, currentenemyname);
    if(enemyHealth!=0 || health!=0)
        res=combat();
    return res;

}
