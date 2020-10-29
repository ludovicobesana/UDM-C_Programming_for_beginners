/*===============================================
 * Name: DataTypes.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Simple example of data types in c
 *=============================================*/

#include <stdio.h>
int main () {
  int integer = 1;
  char character[10] = "Ludovico";
  float floatNumber = 0.123456;
  double doubleNumber = 0.123456123456;
  
  printf("Integer number: %d\n", integer);
  printf("Character: %s\n", character);
  printf("Float number: %.16f\n", floatNumber);
  printf("Double number: %.18lf\n", doubleNumber);
  return 0;  
}
