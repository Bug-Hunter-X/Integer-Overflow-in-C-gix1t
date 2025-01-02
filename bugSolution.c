#include <stdio.h>
#include <limits.h>
int main() {
  long long x = 5;
  long long *ptr = &x;
  *ptr = LLONG_MAX; // Use a larger integer type to avoid overflow
  printf("%lld", x); 
  return 0;
}

/* Alternatively, check for potential overflow:

#include <stdio.h>
#include <limits.h>
int main() {
  int x = 5;
  int *ptr = &x;
  if (*ptr + 10 > INT_MAX) {
      fprintf(stderr, "Integer overflow detected!");
      return 1;
  } else {
      *ptr +=10; // Avoid overflow by adding instead of assigning
      printf("%d", x);
      return 0;
  }
}
*/