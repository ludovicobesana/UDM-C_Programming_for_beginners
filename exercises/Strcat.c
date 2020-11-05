/*============================================
 * Name: Strcat.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Strings strcat function in  c
 *==========================================*/

#include <stdio.h>
#include <string.h> 

 int main()
 { 
   char Str1[20] = "Ludovico";
   char Str2[20] = "Besana";
   strcat(Str1,Str2); //Append one string at the end of another 
   printf("String length of Str1 is: %s. \n", Str1);
   return 0;
 }
 
 
