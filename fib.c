#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int fib_iterative(int n) {
   unsigned long long int next;
   unsigned long long int num1 = 0;
   unsigned long long int num2 = 1;
   if (n <= 1) {
      return 0;
   }
   for (int i = 2; i < n; i++) {
      next = num1 + num2;
      num1 = num2;
      num2 = next;
   }
   return num2;
}

unsigned long long int fib_recursive(int n) {
   if (n == 0 || n == 1) {
      return 0;
   }
   return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main(int argc, char* argv[]) {

      int nth = atoi(argv[1]);

      if (strcmp(argv[2], "-i") || strcmp(argv[2], "i")) {
         printf("%llu", fib_iterative(nth));
      }
      else if (strcmp(argv[2], "-r") || strcmp(argv[2], "r")) {
         printf("%llu", fib_recursive(nth));
      }
      else {
         printf("Invalid argument.");
      }

	return 0;
}

