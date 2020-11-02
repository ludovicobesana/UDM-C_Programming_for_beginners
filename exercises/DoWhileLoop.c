/*================================
 * Name: DoWhileLoop.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: do while loop in c
 *==============================*/

#include <stdio.h>

int main() {
  
  int i = 0;
  do {
    printf("Dennis Ritchie, %d\n", i);
    i++;
  } while (i <= 3);
  
  return 0;
}
