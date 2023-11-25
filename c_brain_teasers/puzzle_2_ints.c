#include <stdio.h>

int main(void) {
  for (int a = 1; a < 10; a++) {
    for (int b = 1; b < 10; b++) {
      printf("%d / %d = %f\n", a, b, a/b);
    }
  }
  return 0;
}
