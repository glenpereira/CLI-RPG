/*MAP*/
#include "header.h"

void switchToWorld(){
    if(currentloc==1) fazeloc();
    if(currentloc==2) opticloc();
    if(currentloc==3) fnaticsloc();
    if(currentloc==4) nvsloc();

}


//DISPLAY CURRENT LOCATION AND MAP
void displayMap(){

    printf("\n\n\n.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:\n");
    printf("||\t\t\tMAP\t\t\t\t||\n");
    printf(".:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:\n\n");
    printf("\n\n\n ");

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
"   *	 HOPTIC 	/		    |\n"
"     *		       /	    .~``*-.*'\n"
"	*	      /		_.-`\n"
"	  *-__.____.-*\\._.----~  \n");
    printf("\n\n\n");


    printf("*Phaze Clan Holdout \t [%c] [%c]\n*HopTic Stronghold \t [%c] [%c] \n*Fanatics Stronghold \t [%c] [%c] \n*eNVieduS Holds \t [%c] [%c] \n\n \n",(faze==1)?'O':'-',(currentloc==1)?'@':'-',(optic==1)?'O':'X',(currentloc==2)?'@':'-',(fnatics==1)?'O':'X',(currentloc==3)?'@':'-',(nvs==1)?'O':'X',(currentloc==4)?'@':'-');
    printf("== \t[X]: Not Travellable\t [O]: Travellable\t [@]: Current Location\n\n\n");
    printf("==\t To exit map, type switch and hit return/enter. then type World \t==\n\n\n");
    printf("==\t To fast travel, type ft and hit return/enter. then enter the whole name of the holdout \t==\n\n\n");
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
                if(currentloc!=1)
                    if(ftallow==1){fazeloc(); i++;j++;}
                    else {printf("You are currently here. \n\n"); continue;}
                else {printf("You are not allowed to travel now.\n\n"); continue;}
            else {printf("This place has not yet been discovered.\n\n"); continue;}



        if(strcasecmp(command,"HopTic stronghold")==0)
            if(optic==1)
                if(ftallow==1)
                    if(currentloc!=2) {opticloc(); i++;j++;}
                    else {printf("You are currently here.\n\n"); continue;}
                else {printf("You are not allowed to travel now.\n\n"); continue;}
            else {printf("This place has not yet been discovered.\n\n"); continue;}


        if(strcasecmp(command,"fanatics stronghold")==0)
            if(fnatics==1)
                if(ftallow==1)
                    if(currentloc!=3) {fnaticsloc(); i++;j++;}
                    else {printf("You are currently here.\n\n"); continue;}
                else {printf("You are not allowed to travel now.\n\n"); continue;}
            else {printf("This place has not yet been discovered.\n\n"); continue;}


        if(strcasecmp(command,"enviedus holds")==0)
            if(nvs==1)
                if(ftallow==1)
                    if(currentloc!=4) {nvsloc(); i++;j++;}
                    else {printf("You are currently here.\n\n"); continue;}
                else {printf("You are not allowed to travel now.\n\n"); continue;}
            else {printf("This place has not yet been discovered.\n\n"); continue;}

        else if(strcasecmp(command,"switch")==0){changeto();i++;}
        else if(strcasecmp(command,"com")==0) {commgen();i++;}
        else {printf("Invalid command\n"); continue;}


     }
}

