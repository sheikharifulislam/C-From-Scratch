#include <stdio.h>

int main() {

   // Using sum
   for (int i = 1; i <= 20; i++) {
      printf("Namora Of %d\n", i);
      int result = 0;
      for (int j = 1; j <= 10; j++) {
         result += i;
         printf("%d * %d = %d\n", i, j, result);
      }

      printf("\n");
   }

   // Unsing Multiplication
   for (int i = 1; i <= 20; i++) {
      printf("Namora Of %d\n", i);
      for (int j = 1; j <= 10; j++) {
         printf("%d * %d = %d\n", i, j, i * j);
      }

      printf("\n");
   }

   return 0;
}