/*========================================
 * Name: AssignmentOperators.c
 * Author: Ludovico Besana
 * Version: 1.0
 * Description: Assignment Operators in c
 =	    a = b	      a = b
 +=	    a += b	    a = a+b
 -=	    a -= b	    a = a-b
 *=	    a *= b	    a = a*b
 /=	    a /= b	    a = a/b
 %=	    a %= b	    a = a%b
 *======================================*/
 
 #include <stdio.h>
 
 int main() {
   int b = 2, a; 
   a = b;      // a = 2
   printf("a = %d\n", a); // a = 2
   a += b;     // a = a+b -> a=a(2)+b(2) so a = 4
   printf("a = %d\n", a);// a = 4
   a -= b;     // a = a-b -> a=a(4)-b(2) so a = 2
   printf("a = %d\n", a); //so a = 2
   a *= b;     // a = a*b -> a=a(2)*b(2) so a = 4
   printf("a = %d\n", a); // a = 4
   a /= b;     // a = a/b  -> a=a(4)/b(2) so a = 2
   printf("a = %d\n", a); // a = 2
   a %= b;     //a = a(2)%b(2) so a = 0
   printf("a = %d\n", a); // a = 0
   return 0;   
 }
 
 
