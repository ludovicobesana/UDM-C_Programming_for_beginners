/*================================
 * Name: WriteFiles.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Write files in c
 *==============================*/

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
     char ch[100];
     FILE *fpw;
     fpw = fopen("file.txt","w"); //Opening the file in write mode

     if(fpw==NULL) {
         printf("Can't open the file!\n");
         exit(1);
     }
     
     printf("Enter the sentence to save in the file:\n");
     gets(ch); //gets function is used to read the string from keyboard input
     fprintf(fpw,"%s",ch);
     fclose(fpw);
     return 0;
 }
