#include "header.h"

//This controls the player abilities and movements



void playerCombat(){
if(stamina!=0){
    int r, enemyPossibility, choice; //r is enemy's choice. enemypossibility is possibility of next to be missed  by the enemy
    int playerPossibility=rand()%10; //possibility of player missing next attack, a factor of 10 provides a fair possibility with range.

int imp = rand() % 5 + 1; //imp or impact helps to randomize and fine adjust the damages to a certain level while skills do the coarse adjustment
printf("[1. Slash \t 2. Punch \t 3. Kick \t 4. Special Move \t 5. Defend (Conserves Stamina)]\n");

choose(&choice,5);
if(playerPossibility>3) //so player can miss only few times
{
switch (choice) {
case 1:
  {
    if(weaponequipped!=0){
    printf("You used Slash damaging %d %s 's health \n\n", (strength*(stamina / imp) + (weaponsskills * weapondamage ) * (imp / difficulty)), enemyName); enemyHealth = enemyHealth - (strength*(stamina / imp) + (weaponsskills * weapondamage ) * (imp / difficulty));
      stamina--;
      break;
    }
    else printf("You do not have a weapon equipped, Try another attack \n");
    playerCombat();
    break;
  }
    case 2: {
      printf("You used Punch damaging %d %s 's health \n\n", ((strength + stamina) * (imp / difficulty)), enemyName);enemyHealth = enemyHealth - ((strength + stamina) * (imp / difficulty));
      stamina--;
      break;
    }
    case 3: {
      printf("You used Kick damaging %d %s 's health \n\n", (((1+imp) * strength * stamina / imp ) * ((imp+2) / difficulty)), enemyName); enemyHealth = enemyHealth - ((1+imp) * strength * stamina / imp ) * ((imp+2) / difficulty);
      stamina--;
      break;
    }
    case 4: {
      printf("You used Special Move damaging %d %s 's health \n\n", (((3*imp) * strength * stamina / (imp)) * ((imp+1)+(weaponsskills*2 * weapondamage*3 ) / difficulty)), enemyName); enemyHealth = enemyHealth - (((3*imp) * strength * stamina / (imp)) * ((imp+1)+(weaponsskills*2 * weapondamage*3 ) / difficulty));
      stamina--;
      break;
    }
    case 5: {
      printf("You are defending \n");
      enemyPossibility = rand() % 5+((armor%4)/difficulty); //+(armor%4)/difficulty gives more probability of the enemy missing when armor is sufficiently high.
      if (enemyPossibility >=2) { //so enemy can miss more times while defending
        r = 5;
        enemyCombat( & r);
      } else combat();
    }
    default: {
      printf("Invalid Attack.\n");playerCombat();
    }
  } //End of switch stmnt
  combat();
}   //Possibility if end
else { printf("You missed. \n \n");combat();} //Possibility if else

}   //Stamina if end
else{   //Stamina if else
        printf("You are out of stamina, you'll have to sit out this move \n");
        stamina++;
        combat();

    }
}

