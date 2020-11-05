/*============================================
 * Name: Strlen.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Strings strlen function in  c
 *==========================================*/

#include <stdio.h>
#include <string.h> 

 int main()
 { 
   char Str1[20] = "Ludovico";
   char Str2[20] = "Tommaso";
   printf("String length of Str1 is: %lu. \n", strlen(Str1));
   printf("String length of Str1 is: %lu. \n", strlen(Str2));
   return 0;
 }
