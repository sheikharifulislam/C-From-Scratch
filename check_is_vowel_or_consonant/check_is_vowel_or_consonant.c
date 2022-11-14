#include <stdio.h>

int main() {

   char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
   int vowelsLength = sizeof(vowels) / sizeof(vowels[0]);
   char ch;
   printf("Enter Your Character: ");

   // Input a single character from the terminal
   ch = getchar();

   for (int i = 0; i < vowelsLength; i++) {

      // check is character a vowel
      if (vowels[i] == ch || vowels[i] == ch + 32) {
         printf("%c is vowel\n", ch);
         break;
      } else {
         printf("%c is consonant\n", ch);
         break;
      }
   }

   return 0;
}