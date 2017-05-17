#include<stdio.h>
int w[10], x[10], c, n;
void sort()
{
  int temp, i, j;
  for(i = 0; i < n; i++)
   for(j = i + 1; j < n; j++)
    {
      if( w[i] > w[j] )
       {
          temp = w[i];
          w[i] = w[j];
          w[j] = temp;
       }
    }
}
void main()
{
  int i,j;
  printf("Enter the capacity: ");
  scanf("%d", &c);
  printf("\nEnter the no. of containers given: ");
  scanf("%d", &n);
  printf("Enter the weights of the containers: ");
  for(i = 0; i < n; i++)
  scanf("%d", &w[i]);
  sort();
  for(i=0; i<n;i++)
   printf("  %d ", w[i]);
  i = 0;
  while(c > 0)
  {
    x[i] = 1;
    c = c - w[i];
    i++;
  }
  if(c < 0)
    i--;
  printf("\nThe maximum no. of containers that can be loaded is %d\n", i);
  printf("The weights of the containers loaded \n");
 for( j = 0; j < i; j++)
   {
     printf("\n%d\n", w[j]);
   }
}


      
