/*=============================
 * Name: Array.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Arrays in c
 *===========================*/

#include <stdio.h>

int main() {
  int a[5] = {10,20,30,40,50};
  printf("Displaying array values: \n");
  for(int i=0; i < 5; ++i) {
    printf("Array Element [%d]=%d \n", i, a[i]);
  }
  return 0;
}
