/*===========================================
 * Name: Strcpy.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: String strcpy function in  c
 *=========================================*/

#include <stdio.h>
#include <string.h>

int main() {
    char Str1[20] = "Tommaso";
    char Str2[20] = "Ludovico";
    strcpy(Str1,Str2); //Copies the source string (Str2) to the destination string (Str1)
    printf("Your name is: %s.", Str1);
    return 0;
}
