#include "header.h"

//This checks for combat results and prints health and stamina of both enemy and the player

int combat()
{
    int combresult;
    int i=0;
    while(i==0){
    printf("\nYour Health [%d]\t Stamina [%d] \t x \t %s Health [%d] \n \n",health,stamina,enemyName,enemyHealth);
    if(health<=0) {combresult=0; break;}
    else if(enemyHealth<=0) {combresult=1; break;}
    else {int r = rand()%5+1;
    enemyCombat(&r);}

    }

    return combresult;

}

