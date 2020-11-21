#include "header.h"

/*PHAZE CLAN HOLDOUT*/

void fazeloc(){
    int i,res;
    int choice;
    char command[30];
    if(currentloc!=1){
    printf("\n\n\nTravelling to Phaze Clan Holdout \n\n\n\n");}
    if(visitFaze==0)
    {
        smart();
        visitFaze++;
    }
    if(visitFaze==1) //QUEST 1
    {
        i=0;
        printf("\n\n\n =*=*=*QUEST STARTED: THE GHOST KNIGHT *=*=*=\n\n");
         puts("      _,.\n"
"    ,` -.)\n"
"   ( _/-\\\\-._\n"
"  /,|`--._,-^|            ,\n"
"  \\_| |`-._/||          ,'|\n"
"    |  `-, / |         /  /\n"
"    |     || |        /  /\n"
"     `r-._||/   __   /  /\n"
" __,-<_     )`-/  `./  /\n"
"'  \\   `---'   \\   /  /\n"
"    |           |./  /\n"
"    /           //  /\n"
"\\_/' \\         |/  /\n"
" |    |   _,^-'/  /\n"
" |    , ``  (\\/  /_\n"
"  \\,.->._    \\X-=/^\n"
"  (  /   `-._//^`\n"
"   `Y-.____(__}\n"
"    |     {__)\n"
"          ()\n");
printf("\nA new challenger approaches \n\n\n");
printf("Ghost Knight: \t Bring me the chosen One. I will slay him and enchant my sword with his blood.\n\n");

printf("\n[1.Use Speech (Intelligence)\t 2. RUN (requires Stamina) 3. FIGHT (COMBINATION OF ABILITIES)\n\n");
while(i==0)
{
    choose(&choice);
    if(choice==1)
    {
        if(intelligence>5){printf("\n\nGHOST KNIGHT: \tYour words cannot keep me off for a long time. But I must go now\n\n");intelligence++;break;}
                                  else {printf("\n\nGHOST KNIGHT: \tYour words don't scare me.\n\n");intelligence++;continue;}
    }
    else if(choice==2)
    {
        if(stamina>5) {printf("\n\nGHOST KNIGHT: \tYou can run, but cannot hide for long. I will be back.\n\n");stamina++;break;}
                                  else {printf("\n\nGHOST KNIGHT: \t(runs) Haha, fool you think you can run away from me?\n\n");stamina++;continue;}

    }
    else if(choice==3)
    {
        res=combatsystems(20,2,"Ghost Knight");
        if(res==1){printf("\n\nYOU HAVE SLAIN GHOST KNIGHT\n\n");break;}
        else {printf("\n\nYOU HAVE BEEN SLAIN. Fight Again\n\n");continue;}


    }
    else {printf("\n\nyou picked the wrong house fool.\n\n\n"); continue;}
    }
    printf("\n\nMiko:\t This... This is impossible. The Ghost Knight never leaves without the head he came for. \n");
    printf("\n\nMiko:\t You really must be the Chosen One. \n\n\n");
    printf("\n\n\n=+=+=+=THE GHOST KNIGHT COMPLETED =+=+=+\n\n\n");
    //If possible add a "hold standing system.
    printf("\n\n\nMiko:\t You should go to HopTic and announce your arrival to the Island. I'll have a messenger sent ahead of you. \n\n");
    printf("==\tType ok to continue\t==\n");
    while(i==0){
    printf("YOU: \t");
    gets(command);
    if(strncmp(command,"ok",2)==0){ break;}
    else {printf("\nLet me know if you change your mind\n"); continue;}
    }
    visitFaze++; //QUEST 1 COMPLETED
    ftallow=1;
    optic=1;
    printf("\n\n\nSwitch to your map, and travel to HopTic\n");
    commgen();
    visitOptic==1;
    }
}


