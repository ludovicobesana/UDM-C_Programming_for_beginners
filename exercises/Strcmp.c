/*============================================
 * Name: Strcmp.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Strings strcmp function in  c
 *==========================================*/

#include <stdio.h>
#include <string.h>

int main() {
    char Str1[20] = "Ludovico";
    char Str2[20] = "Besana";
    int Result;
    Result= strcmp(Str1,Str2);
    if((Result)==0) {
        printf("String 1 and String 2 are equal");
    } else {
        printf("String 1 and String 2 are not equal");
    }
    return 0;
}
