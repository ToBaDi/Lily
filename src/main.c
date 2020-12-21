#include <stdio.h>
#include "game/game.h"

int main(){
	printf("%s", getFile());
    //printf("Hello World!\n");
    return 0;
}

char* getFile(){
	FILE *fp;
   int c;

   fp = fopen("file.txt","r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break;
      }
      return c; 
   }
   fclose(fp);
   return(0);
}