#include <stdio.h>

int main()
{

  int t_len, first, second, cross, max, d, num_len;
  char* space = " ";
  d = scanf("%d", &t_len); 
  max = t_len * t_len;
  while (num_len <= max) { num_len = num_len * 10; }
  num_len = 1;
  for (first = 1; first <= t_len; first++ ){
  for (second = 1; second <= t_len; second++ )
  {
    cross = first * second;
    printf("%d",cross);
    while (cross < num_len)
    {
      printf("%s", space);
      cross = cross * 10;
    }
  }
  printf("\n");
  }
  return 0;
}

