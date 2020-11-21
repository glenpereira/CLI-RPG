#include<stdio.h>
#include<conio.h>
#include<strings.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//Functions I am going to define that I don't know of but there is probably a better way to do this
char firstName();
char bettergets(); //clears input buffer and takes in input, basically, ignores \n from previous gets.

//Actual Functions required in the game
int choose();
void equip();
void displayMap(); void mapft();
void changeto();
void commgen();
void switchToWorld();
void smart();
int combatsystems();
int combat();
void enemyCombat();
void playerCombat();
int weapondamagecalc();

/*MAP LOCATIONS*/
void fazeloc();
void opticloc();
void fnaticsloc();
void nvsloc();



/*GLOBAL VARIABLES*/
//MAP DISCOVERYS
extern int faze,optic, fnatics,nvs;  // These variables indicate if the place has been discovered or not
extern int ftallow;  //Tells if fast travel is allowed or not like during combat
extern int currentloc; //Gives the current location of the player
extern int visitFaze, visitOptic, visitFnatics, visitNvs;


//COMMAND LINE
//Bettergets
extern int btrgts;

//USER ABILITIES
extern char namePlayer[30], fname[30];
extern int strength, armor, intelligence, weaponsskills, stamina;
extern int health;
extern int weaponequipped; //weaponequipped, swords- 1-5, bows 6-10, great swords 10-12, spears 13-15, staffs 15-20
extern int weapondamage;


//ENEMY ABILITIES
extern char enemyName[30];
extern int enemyHealth;
extern int difficulty;


