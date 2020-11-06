/*===================================
 * Name: Array.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Array functions in c
 *=================================*/

#include <stdio.h>
void display(int Age1, int Age2);

int main() {
  int a[] = {1,2,3,4,5};
  display(a[2],a[4]);
  return 0;
}

void display(int Age1, int Age2) {
  printf("%d\n", Age1);
  printf("%d\n", Age2);
}
