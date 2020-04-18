#include<stdio.h>
#include<conio.h>
#include<strings.h>
#include<time.h>
#include<stdlib.h>

//Functions I am going to define that I don't know of but there is probably a better way to do this
char firstName();
char bettergets(); //clears input buffer and takes in input, basically, ignores \n from previous gets.

//Actual Functions required in the game
int choose();
void equip();
void map(); void mapft();
void changeto();
void commgen();
void switchToWorld();
void smart();
int combat();

/*MAP LOCATIONS*/
void fazeloc();
void opticsloc();
void fnaticsloc();
void nvsloc();



/*GLOBAL VARIABLES*/
//MAP DISCOVERYS
int faze,optics, fnatics,nvs;  // These variables indicate if the place has been discovered or not
int ftallow;  //Tells if fast travel is allowed or not like during combat
int currentloc; //Gives the current location of the player
int visitFaze, visitOptics, visitFnatics, visitNvs;


//COMMAND LINE
//Bettergets
int btrgts=0;

//USER ABILITIES

int strength, reflex, intelligence, weaponsskills, stamina;
int health=100;



void main()
{
    /*INITIALISING COMBAT RANDOM NUMBER GENERATOR*/
                    srand(time(NULL));  //Just ignore this.
    /* ******************************************/

    //Title screen
    printf("*********************************************************************************************************\n");
    printf("*\t\t\t\t\tTHE DUNGEONS CLI RPG \t\t\t\t\t\t*\n");
    printf("*********************************************************************************************************\n");

    //Character Creation
    printf("Welcome Adventurer,\n Ah, you are awake \n You have travelled far into the Forbidden Jungle of Azekaphar.");
    printf("These are dangerous places, and dangerous times \n");
    printf("Tell me, what is your name traveller? \n YOU:\t");

    int choice;
    int age;
    char namePlayer[30], fname[30];

    scanf("%[^\n]s",namePlayer);
    firstName(namePlayer,fname);
    printf("\n %s, Why have you come to this cursed lands?\n",fname);
    printf("[1. I don't know \t 2. Why do you care old man \t 3. I lost my way over here] \n");
    printf("== \tWhen '[ ]' is displayed, a choice can be made. Simply enter the number corresponding to the choice. \t== \n");

    choose(&choice);
    switch(choice){
        case 1:printf("You must've lost your memories under the Tree of Thousand Blossoms\n");break;
        case 2:printf("How rude of you to say that to the man that just saved your life?\n");break;
        case 3:printf("Child, nobody is lost. There are no mistakes \n.");break;
        default: printf("You picked the wrong house fool \n \n"); break;
    }
    printf("However, I found you lying there under the Tree of Thousand Blossoms. You seem to be quite lost \n");
    printf("Tell me, what's your age? \n YOU:\t");
    scanf("%d",&age);
    printf("(laughing) You surely don't look %d. You seem to have really lost your memories. \n",age);
    printf("But that could only happen to the Chosen One. Could it be? But the legends?! \n ");
    printf("[1. Let's get outta here Mastuhchief \t 2. I am the Chosen One \t 3. What are you talking about]\n");
    choose(&choice);
    switch(choice){
        case 1:printf("Ah.. I see you are a man of culture as well \n");break;
        case 2:printf("But for someone like you to be the One! How can it be? \n");break;
        case 3: printf("The Chosen One, like in all other games and literature, will save us from the Great Villain \n");break;
        default: printf("You picked the wrong house fool \n \n"); break;
    }

    printf("Your journey begins traveller, you've chosen the path. \n Oh how rude of me to not introduce myself. I'm Greg Kelsoe. \n I am the chief of this tribe.");
    printf("I think that's all you need to know now. \n You seem to be healed, head on out Chosen One \n");
    printf("[1. Head Out \t 2. What does it mean to be the Chosen One? \t 3. This is BS, I'm getting outta here!] \n");
    choose(&choice);
     switch(choice){
        case 1:printf("(Heads out) \n");break;
        case 2:printf("Greg:\tOh why, it means everything. \n The ability to change whatever he wanted, to remake the World as you see fit. \n To dodge bullets, oh wait, bullets aren't a thing yet. Oh well.  \n (heads out)\n");break;
        case 3: printf("Greg:\tYou aren't going anywhere. To have crossed the Great Lake once is just sheer luck. Luck won't help you next time \n (heads out)\n");break;
        default: printf("You picked the wrong house fool.\n"); break;
    }
        //MAIN GAME STARTS

        char command[20];
        int i=0;

    printf("********************************\n");
    printf("* DISCOVERED PHAZE CLAN HOLDOUT *\n");
    printf("********************************\n");
    faze=1;
    printf("Mico:\t Greg thinks you're the Chosen One. BS\n");
    printf("[1. What do you want big guy? \t 2. I think the same!");
    choose(&choice);
    switch(choice){
        case 1: printf("Mico:\tDon't act tough, we all know who you are.\n");break;
        case 2: printf("Mico:\tAtleast someone knows his stuff around. \n");break;
        default: printf("Mico:\tYou picked the wrong house fool.\n");break;
    }
    printf("Miko:\t Greg wants me to show you around. \nDanks:\tHere, take this map. It'll help you in your journey. \n");
    printf("*Map Added* \n");
    printf("==\t To equip map, type switch and hit return/enter. Then type map. \t==\n");
    currentloc=1;
    ftallow=0;
    commgen();




}
/*CHOICE CHOOSER*/
int choose(int *a)
{

    printf("\n YOU:\t");
    scanf("%d",&*a);

    return *a;

}



//COMMON COMMAND CENTRE
void commgen()
{
    int i;
    char command[20];
    i=0;
    while(i==0){
    printf("COM:\t \t");
        bettergets(command);
        if(strcasecmp(command,"switch")==0){changeto(); i++;break;}
        if(strcasecmp(command,"ft")==0){mapft(); i++; break; }

        if(i==0){printf("Command not found \n"); continue;}
        }

}

//SWITCHING BETWEEN COMMANDS
void changeto()
{
        int i=0;
     char command[20];
     while(i==0){
     printf("SWITCH TO: \t");
        bettergets(command);

        if(strcasecmp(command,"World")==0) {switchToWorld(); i++;}
        if(strcasecmp(command,"map")==0) { map();i++;}
        if(strcasecmp(command,"weapons")==0) {/*weapons()*/printf("Weapons is loaded\n");; i++;}
        if(strcasecmp(command,"items")==0) { /*items()*/printf("Items is loaded\n");; i++;}
        if(strcasecmp(command, "COM")==0) commgen();
        if(strcasecmp(command,"ft")==0)mapft();
        if(i==0) {printf("Invalid command\n"); continue;}

     }
}


/*MAP*/
void switchToWorld(){
    if(currentloc==1) fazeloc();
    if(currentloc==2) opticsloc();
    if(currentloc==3) fnaticsloc();
    if(currentloc==4) nvsloc();

}


//DISPLAY CURRENT LOCATION AND MAP
void map(){

    printf("\n\n.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:\n");
    printf("||\t\t\tMAP\t\t\t\t||\n");
    printf(".:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:\n\n");
    printf("\n ");

        puts("         --------------------------\n"
"   .----/	|	 	   \\---.\n"
"   |		|			\\\n"
" .-*	PHAZE	|			 *-.----.\n"
" |		!	FANATICS          /	\\.\n"
"  *    _......-**!			 /	  `!\n"
"   *../		  `*-__/\\_     __......./        ../\n"
"    *		      !   \\__/*			\\\n"
"  .*		      !			    ..~-*\n"
"  |		       `\\	eNVieduS    !\n"
"   *	 HOPTICS	/		    |\n"
"     *		       /	    .~``*-.*'\n"
"	*	      /		_.-`\n"
"	  *-__.____.-*\\._.----~  \n");
    printf("\n");


    printf("*Phaze Clan Holdout \t [%c] [%c]\n*Team Hoptics Stronghold [%c] [%c] \n*Fanatics Stronghold \t [%c] [%c] \n*eNVieduS Holds \t [%c] [%c]  \n",(faze==1)?'O':'-',(currentloc==1)?'@':'-',(optics==1)?'O':'X',(currentloc==2)?'@':'-',(fnatics==1)?'O':'X',(currentloc==3)?'@':'-',(nvs==1)?'O':'X',(currentloc==4)?'@':'-');
    printf("== \t[X]: Not Travellable\t [O]: Travellable\t [@]: Current Location\n");
    printf("==\t To exit map, type switch and hit return/enter. then type switchto World \t==\n");
    printf("==\t To fast travel, type ft and hit return/enter. then enter the whole name of the holdout \t==\n");
    commgen();


}

//FAST TRAVEL
void mapft(){
     int i=0,j=0;
     char command[20];
     while(i==0){
     printf("FAST TRAVEL: \t");
        bettergets(command);

        if(strcasecmp(command,"phaze clan holdout")==0 )
           if(faze==1)
                if(ftallow==1)
                    if(currentloc!=1) {fazeloc(); i++;j++;}
                    else {printf("You are currently here. \n"); continue;}
                else {printf("You are not allowed to travel now.\n"); continue;}
            else {printf("This place has not yet been discovered.\n"); continue;}



        if(strcasecmp(command,"team hoptics stronghold")==0)
            if(optics==1)
                if(ftallow==1)
                    if(currentloc!=2) {opticsloc();; i++;j++;}
                    else {printf("You are currently here.\n"); continue;}
                else {printf("You are not allowed to travel now.\n"); continue;}
            else {printf("This place has not yet been discovered.\n"); continue;}


        if(strcasecmp(command,"fanatics stronghold")==0)
            if(fnatics==1)
                if(ftallow==1)
                    if(currentloc!=3) {fnaticsloc();; i++;j++;}
                    else {printf("You are currently here.\n"); continue;}
                else {printf("You are not allowed to travel now.\n"); continue;}
            else {printf("This place has not yet been discovered.\n"); continue;}


        if(strcasecmp(command,"enviedus holds")==0)
            if(nvs==1)
                if(ftallow==1)
                    if(currentloc!=4) {nvsloc();; i++;j++;}
                    else {printf("You are currently here.\n"); continue;}
                else {printf("You are not allowed to travel now.\n"); continue;}
            else {printf("This place has not yet been discovered.\n"); continue;}

        else if(strcasecmp(command,"switch")==0){changeto();i++;}
        else if(strcasecmp(command,"com")==0) {commgen();i++;}
        else {printf("Invalid command\n"); continue;}


     }
}

/*MAP LOCATIONS*/
void fazeloc(){
    int i,res;
    int choice;
    char command[30];
    if(currentloc!=1){
    printf("Travelling to Phaze Clan Holdout \n");}
    if(visitFaze==0)
    {
        smart();
        visitFaze++;
    }
    if(visitFaze==1) //QUEST 1
    {
        i=0;
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
printf("\nA new challenger approaches \n");
printf("Ghost Knight: \t Bring me the chosen One. I will slay him and enchant my sword with his blood.\n");

printf("[1.Use Speech (Intelligence)\t 2. RUN (requires Stamina) 3. FIGHT (COMBINATION OF ABILITIES)\n");
while(i==0)
{
    choose(&choice);
    if(choice==1)
    {
        if(intelligence>5){printf("GHOST KNIGHT: \tYour words cannot keep me off for a long time. But I must go now\n");intelligence++;break;}
                                  else {printf("GHOST KNIGHT: \tYour words don't scare me.\n");intelligence++;continue;}
    }
    else if(choice==2)
    {
        if(stamina>5) {printf("GHOST KNIGHT: \tYou can run, but cannot hide for long. I will be back.\n");stamina++;break;}
                                  else {printf("GHOST KNIGHT: \t(runs) Haha, fool you think you can run away from me?\n");stamina++;continue;}

    }
    else if(choice==3)
    {
        res=combat(20,2,"Shadow");
        if(res==1){printf("YOU HAVE SLAIN AN ENEMY\n");break;}
        else {printf("YOU HAVE BEEN SLAIN. Fight Again\n");continue;}


    }
    else {printf("you picked the wrong house fool."); continue;}
    }
    printf("Mico:\t This... This is impossible. The Ghost Knight never leaves without the head he came for. \n");
    printf("Mico:\t You really must be the Chosen One. \n");
    //If possible add a "hold standing system.
    printf("Mico:\t You should go to Hoptics and announce your arrival to the Island. I'll have a messenger sent ahead of you. \n");
    printf("==\tType ok to continue\t==\n");
    while(i==0){
    printf("YOU: \t");
    gets(command);
    if(strncmp(command,"ok",2)==0){ break;}
    else {printf("Let me know if you change your mind\n"); continue;}
    }
    visitFaze++; //QUEST 1 COMPLETED
    ftallow=1;
    optics=1;
    printf("Switch to your map, and travel to Hoptics\n");
    commgen();
    }
}











void opticsloc(){

    printf("Travelling to Team Hoptivs Stronghold \n");


}

void fnaticsloc(){

    printf("Travelling to Fanatics Stronghold \n");

}

void nvsloc(){

    printf("Travelling to eNVieduS Holds \n");

}

/*MAP LOCATIONS END*/

/*SMART*/

void smart(){ //Abilities of the player
    int i=0,n;
    char command[30],y[2];
    printf("Miko: \tIt's time for testing out your skills. Head over to Dunkley to start.\n[Type OK to go to Dunkley.]\n");
    while(i==0){
    printf("YOU: \t");
    gets(command);
    if(strncmp(command,"ok",2)==0){ printf("(Goes to Dunkley)\n\n"); break;}
    else {printf("Let me know if you change your mind\n"); continue;}
    }
    printf("Dunkley:\t Ahh, the chosen one. You are here to put your abilities to the test. Let's start:\n \n");
    printf("== Allocate points as to skills as required. You have a total of 20 points to spend. ==\n");
    printf("== YOU CANNOT REALLOCATE THESE POINTS FURTHER DOWN THE GAME. ==\n");
    printf("\nAbilities: STRENGTH, REFELEX, INTELLIGENCE, WEAPON SKILLS, STAMINA\n");

    while(i==0){
    n=20;
    printf("Strength:\t [%d]/[20] \t",n); scanf("%d",&strength); n=n-strength;
    printf("Reflex:  \t [%d]/[20] \t",n); scanf("%d",&reflex); n=n-reflex;
    printf("Intelligence:\t [%d]/[20] \t",n); scanf("%d",&intelligence ); n=n-intelligence;
    printf("Weapon Skills:\t [%d]/[20] \t",n); scanf("%d",&weaponsskills); n=n-weaponsskills;
    printf("Stamina:\t [%d]/[20] \t",n); scanf("%d",&stamina); n=n-stamina;

    if(n<0)
        {printf("You have used up more points. Reallocate. \n");continue;}
    else if(n>0){printf("You have points remaining to allocate. Reallocate \n");continue;}
    else if(n==0){
            printf("Allocation complete. Do you want to reallocate? (y/n) \n");
            scanf("%s",y);
            if(strcasecmp(y,"y")==0) continue;
            else {printf("Abilities are increased based on your use. Use an ability more to level it up.\n"); break;}
            }
    }
}

/*COMBAT*/
//Continue here, start working on a player attack system;
int combat(int enemyHealth,int difficulty,char name[30])
{
    int combresult;
    int i=0;
    while(i==0){
    if(health==0) break;
    if(enemyHealth==0) break;
    int r = rand()%5+1;
    switch(r){
    case 1: {printf("%s used Slash damaging %d health \n\n",name,3*difficulty);health=health-(3*difficulty); break;}
    case 2: {printf("%s used Puncture damaging %d health \n\n",name,2*difficulty);health=health-(2*difficulty);break;}
    case 3: {printf("%s used Magic damaging %d health \n\n",name,1*difficulty);health=health-(1*difficulty);break;}
    case 4: {printf("%s used Special Move damaging %d health \n \n",name,6*difficulty);health=health-(6*difficulty);break;}
    case 5: {printf("%s attacked and missed \n \n",name);break;}
    }

    printf("Your Health [%d]\t %s Health [%d] \n",health,name,enemyHealth);
    i=1;
    combresult=1; //debugging
    return combresult;



    }
}





/*FUNCTIONS I WROTE BECAUSE I DONT KNOW ANY PRE-DEFINED FUNCTIONS AND THESE COULD PROBABLY BE DONE IN BETTER WAYS*/
char firstName(char a[30],char b[30]) //for extracting first name from full name entered first
{
    int i;
    char temp;
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            b[i]=a[i];
        }
        else { b[i]='\0'; break;}
    }
}


char bettergets(char a[30]) //A better gets function that flushes input buffer
{
    if(btrgts!=0)
        gets(a);
    else{
    char b;
    b=getchar();
    gets(a);
    }
    btrgts++;


}