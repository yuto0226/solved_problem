#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int r;
    scanf("%d", &r);
    int street[r];
    for (int i = 0; i < r; i++)
      scanf("%d", &street[i]);
    qsort(street, r, sizeof(int), cmp);
    int sum = 0;
    for (int i = 0; i < r; i++) {
      sum += abs(street[r/2] - street[i]);
    }
    printf("%d\n", sum);
  }
}

// 0   1   2   3
// |---|---|---|
// 2   4   6   8
// mid = (s[1] + s[2]) / 2 = 5;
// dis(mid, s[1]) + dis(mid, s[2]) = dis(s[1], s[2])
