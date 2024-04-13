#include <stdio.h>

int main() {
  int a, b;
  while (scanf("%d %d", &a, &b) != EOF) {
    if (a == 0 && b == 0)
      break;
    int carrys = 0;
    while (a != 0 && b != 0) {
      if (a % 10 + b % 10 > 9) {
        a += 10;
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
