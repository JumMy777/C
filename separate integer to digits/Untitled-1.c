#include <stdio.h>

int main() {
  int num, temp, factor = 1;

  printf("Enter a 5 digit number: ");
  scanf("%d", &num);

  temp = num;
  while (temp) {
      temp = temp/10;
      factor = factor*10;
  }

  while (factor>1) {
      factor = factor/10;
      printf("%d   ", num/factor);
      num = num % factor;
  }

  return 0;
}