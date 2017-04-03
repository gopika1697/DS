#include<stdio.h>
#include<math.h>
void queens(int,int);
int place(int,int);
void print(int);
int x[20];
main()
{
int n,k=1;
printf("enter the number of queens\n");
scanf("%d",&n);
queens(k,n);
}

void queens(int k,int n)
{
  int j,count=1;
for(j=1;j<=n;j++)
{
 if(place(k,j))
  {
  x[k]=j;
  if(k==n)
  {
   count++;
   printf("the number of solutions is %d\n",count);
   print(n);
  }
   else
    queens(k+1,n);
  }
}
}

int place(int k,int  j)
{
 int i;
 for( i=1;i<k;i++)
 {
  if(x[i]==j || abs(x[i]-j)== abs(i-k))
   return 0;
 }
    return 1;
}
void print(int n)
{
 int i;
 for(i=1;i<=n;i++)
 printf("%d row <-->  %d column \n",i,x[i]);
}

