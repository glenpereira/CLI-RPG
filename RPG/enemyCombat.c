#include "header.h"

//This controls the enemy attacks and moves

void enemyCombat(int *r)

{
    int imp=rand()%10+2; //imp or impact helps to randomize and fine adjust the damages to a certain level while difficulty is a coarse adjustment to damaage.
    switch(*r){
    case 1: {printf("%s used Slash damaging %d health \n\n",enemyName,imp*difficulty);health=health-(imp*difficulty); break;}
    case 2: {printf("%s used Puncture damaging %d health \n\n",enemyName,imp*difficulty);health=health-(imp*difficulty);break;}
    case 3: {printf("%s used Magic damaging %d health \n\n",enemyName,imp*difficulty);health=health-(imp*difficulty);break;}
    case 4: {printf("%s used Special Move damaging %d health \n \n",enemyName,(imp+2)*difficulty);health=health-((imp+2)*difficulty);break;}
    case 5: {printf("%s attacked and missed \n \n",enemyName);break;}
    }
    printf("Your Health [%d]\t Stamina [%d] \t x \t %s Health [%d] \n \n",health,stamina,enemyName,enemyHealth);
    playerCombat();
}
