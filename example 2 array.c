#include <stdio.h>
#include <stdlib.h>
int main() {
  int size, i;
  float num[100], sum = 0.0, avg;

  printf("Enter the size of the array: ");
  scanf("%d", &size);


  for (i = 0; i < size; ++i) {
    printf("Enter number %d: ", i + 1);
    scanf("%f", &num[i]);
    sum += num[i];
  }
  avg = sum / size;
  printf("Average of array elements: %.2f", avg);
  return 0;
}
