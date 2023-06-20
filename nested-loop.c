#include <stdio.h>

int main() {
  
  //int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 5; i++) {
    printf("OUTER LOOP!\n");
    for (j = 0; j < 5; j++) {
      printf("INNER LOOP!\n");
      printf("%d-%d\n", i, j);
    }
  }
  
  return 0;
}
