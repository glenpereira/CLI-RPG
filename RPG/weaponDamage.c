#include "header.h"
//Calculates raw damage done by weapons
int weapondamagecalc(int equippedweapon)
{

    int damage;
    if(equippedweapon==0)   //No weapon
        damage=0;
    else if(equippedweapon<=5) //Swords
    {
        damage=equippedweapon*4;
    }
    else if(equippedweapon<=9) //Bows
    {
        damage=pow(1.3,equippedweapon);
    }
    else if(equippedweapon<=12) //Great Swords
    {
        damage=5+pow(1.4,equippedweapon);

    }
    else if(equippedweapon<=15) //Spears
    {
        damage=2+pow(1.2,equippedweapon);
    }
       else if(equippedweapon<=20)  //Staffs
    {
        damage=10+pow(1.1,equippedweapon);
    }


}
