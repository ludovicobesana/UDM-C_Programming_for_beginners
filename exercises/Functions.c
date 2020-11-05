/*================================
 * Name: Functions.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Functions in  c
 *==============================*/

#include <stdio.h>

int Addition(int a, int b);

int Subtraction(int a, int b);


int main() {
    int n1,n2,sum,sub;
    printf("Enter the first number: \n");
    scanf("%d", &n1);
    printf("Enter the second number: \n");
    scanf("%d", &n2);
    sum = Addition(n1,n2);
    printf("Addition function result: %d\n",sum);
    sub = Subtraction(n1,n2);
    printf("Subtraction function result: %d\n",sub);
    return 0;
}


int Addition(int a, int b) {
    int result;
    printf("I'm inside the Addition function\n");
    result = a+b;

    return result;
}

int Subtraction(int a, int b) {
    int result_sub;
    printf("I'm inside the Subtraction function\n");
    result_sub = a-b;

    return result_sub;
}
