#include <stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  int *p = NULL;

  if(n == 0){
    printf("[vazio]\n");
    return 0;
  }

  p = (int*)malloc(sizeof(int)*n);

  for(int i  = 0; i < n; i++)
  {
    scanf("%d", &p[i]);
  }

    printf("[");

    for(int i = 0; i < n; i++)
  {
    if(i != n-1)
    {
      printf("%d, ",p[i]);
    }
    else
    {
      printf("%d]\n", p[i]);
    }
  }

  free(p);

  return 0;
}