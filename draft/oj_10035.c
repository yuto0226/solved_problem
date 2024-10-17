#include <stdio.h>

int main() {
  unsigned int a, b;
  while (scanf("%d %d", &a, &b) != EOF) {
    if (a == 0 && b == 0)
      break;
    int carrys = 0;
    int c = 0;
    while (a != 0 || b != 0) {
      // printf("%d + %d + %d = %d\n", a % 10, b % 10, c, a % 10 + b % 10);
      int sum = a % 10 + b % 10 + c;
      c = 0;
      if (sum > 9) {
        c += 1;
        carrys++;
      }
      a /= 10;
      b /= 10;
    }
    if (carrys)
      printf("%d carry operation%s.\n", carrys, carrys <= 1 ? "" : "s");
    else
      printf("No carry operation.\n");
  }
  return 0;
}
