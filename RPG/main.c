#include "header.h"


/*GLOBAL VARIABLES*/
//MAP DISCOVERYS
int faze,optic, fnatics,nvs;  // These variables indicate if the place has been discovered or not
int ftallow;  //Tells if fast travel is allowed or not like during combat
int currentloc; //Gives the current location of the player
int visitFaze, visitOptic, visitFnatics, visitNvs;


//COMMAND LINE
//Bettergets
int btrgts=0;

//USER ABILITIES
char namePlayer[30], fname[30];
int strength, armor, intelligence, weaponsskills, stamina;
int health=100;
int weaponequipped=0; //weaponequipped, swords- 1-5, bows 6-9, great swords 10-12, spears 13-15, staffs 15-20
int weapondamage;


//ENEMY ABILITIES
char enemyName[30];
int enemyHealth;
int difficulty;



int main()
{
     /*INITIALISING COMBAT RANDOM NUMBER GENERATOR*/
                    srand(time(NULL));  //Just ignore this.
    /* ******************************************/

    //Title screen
    printf("*********************************************************************************************************\n");
    puts("*\t\t\tTHE MLG ISLANDS: 420 360 NOSCOPE HEADSHOT \t\t\t\t\t*\n"
           "*\t\t\t\tA CLI RPG \t\t\t\t\t\t\t\t*");
    printf("*********************************************************************************************************\n");

    //Character Creation
    printf("\n\nWelcome Adventurer,\n Ah, you are awake \n You have travelled far into the Forbidden Jungle of Azekaphar.");
    printf("These are dangerous places, and dangerous times \n");
    printf("Tell me, what is your name traveller? \n\n YOU:\t");

    int choice;
    int age;


    scanf("%[^\n]s",namePlayer);
    firstName(namePlayer,fname);
    printf("\n\nSTRANGER: %s, Why man WHY have you come to this cursed lands?\n\n",fname);
    printf("[1. I don't know \t 2. Why do you care old man \t 3. I lost my way over here] \n\n");
    printf("== \tWhen '[ ]' is displayed, a choice can be made. Simply enter the number corresponding to the choice. \t== \n");

    choose(&choice,3);
    switch(choice){
        case 1:printf("\n\nSTRANGER: You must've lost your memories under the Tree of Thousand Blossoms\n\n");break;
        case 2:printf("\n\nSTRANGER: How rude of you to say that to the man that just saved your life?\n\n");break;
        case 3:printf("\n\nSTRANGER: Child, nobody is lost. There are no mistakes. \n\n");break;
        default: printf("\n\nYou picked the wrong house fool \n \n"); break;
    }
    printf("\n\nSTRANGER: However, I found you lying there under the Tree of Thousand Blossoms. You seem to be quite lost \n\n");
    printf("STRANGER: Tell me, what's your age? \n \nYOU:\t");
    scanf("%d",&age);
    printf("\n\nSTRANGER: (laughing) You surely don't look %d. You seem to have really lost your memories. \n\n",age);
    printf("STRANGER: But that could only happen to the Chosen One. Could it be? But the legends?! \n\n ");
    printf("[1. Let's get outta here Mastuhchief \t 2. I am the Chosen One \t 3. What are you talking about]\n\n");
    choose(&choice,3);
    switch(choice){
        case 1:printf("STRANGER: Ah.. I see you are a man of culture as well \n\n");break;
        case 2:printf("STRANGER: But for someone like you to be the One! How can it be? \n\n");break;
        case 3: printf("STRANGER: The Chosen One, like in all other games and literature, will save us from the Great Villain \n\n");break;
        default: printf("You picked the wrong house fool \n \n"); break;
    }

    printf("\n\nSTRANGER: Your journey begins traveller, you've chosen the path. \n \n\nSTRANGER: Oh how rude of me to not introduce myself. I'm Greg Kelsoe. \n\tI am the chief of this tribe.");
    printf("\n\nGREG: I think that's all you need to know now. \n You seem to be healed, head on out Chosen One \n\n");
    printf("[1. Head Out \t 2. What does it mean to be the Chosen One? \t 3. This is BS, I'm getting outta here!] \n\n");
    choose(&choice,3);
     switch(choice){
        case 1:printf("\n\n*Heads out*\n\n \n");break;
        case 2:printf("\n\nGreg:\tOh why, it means everything. \n The ability to change whatever he wanted, to remake the World as you see fit. \n To dodge bullets, oh wait, bullets aren't a thing yet. Oh well. \n \n (heads out)\n\n");break;
        case 3: printf("\n\nGreg:\tYou aren't going anywhere. To have crossed the Great Lake once is just sheer luck. Luck won't help you next time \n\n (heads out)\n\n");break;
        default: printf("\n\nYou picked the wrong house fool.\n\n"); break;
    }
        //MAIN GAME STARTS

        char command[20];


    printf("\n\n\n\n********************************\n");
    printf("* Huray! DISCOVERED PHAZE CLAN HOLDOUT *\n");
    printf("********************************\n\n\n\n\n");
    faze=1;
    printf("Miko:\t Greg thinks you're the Chosen One. BS\n\n");
    printf("[1. What do you want big guy? \t 2. I think the same!\n");
    choose(&choice,2);
    switch(choice){
        case 1: printf("\n\nMiko:\tDon't act tough, we all know who you are.\n\n");break;
        case 2: printf("\n\nMiko:\tAtleast someone knows his stuff around. \n\n");break;
        default: printf("\n\nMiko:\tYou picked the wrong house fool.\n\n");break;
    }
    printf("Miko:\t Greg wants me to show you around. \n\nMiko:\tHere, take this map. It'll help you in your journey. \n\n");
    printf("*Map Added* \n\n");
    printf("==\t To equip map, type switch and hit return/enter. Then type map. \t==\n\n\n");
    currentloc=1;
    ftallow=0;
    commgen();




}
