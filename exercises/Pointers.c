/*======================================
 * Name: Pointers.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Pointers in c
 *====================================*/

 #include <stdio.h>

 int main() {
     int num = 10;
     int *p;
     p = &num;
     printf("Address of variable num is: %p\n", p);
     printf("Address of variable num is: %p\n", &num);
     return 0;
 }
