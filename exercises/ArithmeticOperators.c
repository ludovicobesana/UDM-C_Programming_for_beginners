/*========================================
 * Name: ArithmeticOperators.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: ArithmeticOperators in c
 *======================================*/
 
 #include <stdio.h>

int main() {
  int a=15;
  int b=2;
  int arithmeticOutput;
  arithmeticOutput = a+b;
  printf("Arithmetic + output is: %d\n", arithmeticOutput);
  arithmeticOutput = a-b;
  printf("Arithmetic - output is: %d\n", arithmeticOutput);
  arithmeticOutput = a*b;
  printf("Arithmetic * output is: %d\n", arithmeticOutput);
  arithmeticOutput = a/b;
  printf("Arithmetic / output is: %d\n", arithmeticOutput);
  arithmeticOutput = a%b; /* % Remainder after division */ 
  printf("Arithmetic remainder output is: %d\n", arithmeticOutput);
  return 0;
}
