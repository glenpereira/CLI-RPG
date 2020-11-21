#include "header.h"
void op_quest1();
void opticloc(){
     if(currentloc!=2){
    printf("\n\n\nTravelling to Team Hoptics Stronghold  \n\n\n\n");}

    if(visitOptic==1)
    {
        op_quest1();
    }


}

void op_quest1(){

    printf("\n\n\n\n********************************\n");
    printf("* DISCOVERED TEAM HOPTIC STRONGHOLD *\n");
    printf("********************************\n\n\n\n\n");

    puts(
"    _/`;_\n"
"   /  _	 ~_\n"
"  / _	_  \\			========\n"
" / _	 _  \\	      **	[]      \\\n"
"/ _	  _  |_     *****	[]        \\\  			     *\n"
"_-		  ***  *** *	[]          ==		  //~===    ***\n"
"{            }  ****  ***** *	[]		\\\	 //	|| * ** *\n"
"|	     | 	=_**** *** **   []		  ==\\\=//	||***  ***\n "
"-------------- _`** ***  **** **--------------------------=------********-------\n");
}

