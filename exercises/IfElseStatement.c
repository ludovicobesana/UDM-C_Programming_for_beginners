/*================================
 * Name: IfElseStatement.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: if else statement in c
 *==============================*/

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // %d -> place holder, &age ; &store the memory for this variable

    if(age >= 18) {
        printf("You entered %d\n", age);
        printf("You can Vote!");
    } else {
        printf("Sorry, you can't Vote! :(");
    }

    return 0;
}
