/*================================
 * Name: Strings.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Strings in  c
 *==============================*/

#include <stdio.h>

int main() {
  char C[] = "Ludovico";
  char C_Def[9] = "Ludovico";
  char D[] = {'L','u','d','o','v','i','c','o','\0'};
  char D_Def[9] = {'L','u','d','o','v','i','c','o','\0'};
  printf("1.String with un-defined size declaration: %s\n", C);
  printf("2.String with defined size declaration: %s\n", C_Def);
  printf("3.String with un-defined size declaration: %s\n", D);
  printf("4.String with defined size declatarion: %s\n", D_Def);
  return 0;
}
