#include "header.h"

/*SMART*/
/*SMART is a player ability control. This is a primitive attempt at recreating SPECIAL from Fallout on a basic level */


void smart(){ //Abilities of the player
    int i=0,n;
    char command[30],y[2];
    printf("\n\n\nMiko: \tIt's time for testing out your skills. Head over to Dunkley to start.\n[Type OK to go to Dunkley.]\n\n");
    while(i==0){
    printf("YOU: \t");
    gets(command);
    if(strncmp(command,"ok",2)==0){ printf("\n\n\n(Goes to Dunkley)\n\n"); break;}
    else {printf("\nLet me know if you change your mind\n"); continue;}
    }
    printf("\n\n\nDunkley:\t Ahh, the chosen one. You are here to put your abilities to the test. Let's start:\n \n\n\n");
    printf("== Allocate points as to skills as required. You have a total of 20 points to spend. ==\n");
    printf("== YOU CANNOT REALLOCATE THESE POINTS FURTHER DOWN THE GAME. ==\n");
    printf("\nAbilities: STRENGTH, REFELEX, INTELLIGENCE, WEAPON SKILLS, STAMINA\n");

    while(i==0){
    n=20;
    printf("\n\n\nStrength:\t [%d]/[20] \t",n); scanf("%d",&strength); n=n-strength;
    printf("Armor:  \t [%d]/[20] \t",n); scanf("%d",&armor); n=n-armor;
    printf("Intelligence:\t [%d]/[20] \t",n); scanf("%d",&intelligence ); n=n-intelligence;
    printf("Weapon Skills:\t [%d]/[20] \t",n); scanf("%d",&weaponsskills); n=n-weaponsskills;
    printf("Stamina:\t [%d]/[20] \t",n); scanf("%d",&stamina); n=n-stamina;

    if(n<0)
        {printf("\nYou have used up more points. Reallocate. \n");continue;}
    else if(n>0){printf("\nYou have points remaining to allocate. Reallocate \n");continue;}
    else if(n==0){
            printf("\nAllocation complete. Do you want to reallocate? (y/n) \n");
            scanf("%s",y);
            if(strcasecmp(y,"y")==0) continue;
            else {printf("\n\n\n*==Abilities are increased based on your use. Use an ability more to level it up==*\n\n\n\n"); break;}
            }
    }
}

