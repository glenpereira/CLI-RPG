//SWITCHING BETWEEN COMMANDS
#include "header.h"

void changeto()
{
        int i=0;
     char command[20];
     while(i==0){
     printf("SWITCH TO: \t");
        bettergets(command);

        if(strcasecmp(command,"World")==0) {switchToWorld(); i++;}
        if(strcasecmp(command,"map")==0) { displayMap();i++;}
        if(strcasecmp(command,"weapons")==0) {/*weapons()*/printf("Weapons is loaded\n");; i++;}
        if(strcasecmp(command,"items")==0) { /*items()*/printf("Items is loaded\n");; i++;}
        if(strcasecmp(command, "COM")==0) commgen();
        if(strcasecmp(command,"ft")==0)mapft();
        if(i==0) {printf("Invalid command\n"); continue;}

     }
}


