#include<stdio.h>

void main()
  {
   int j,c[10][10],n,r,i;
   printf("enter n and r values");
   scanf("%d%d",&n,&r);
   for(i=0;i<=n;i++)
    c[i][0]=1;
   for(i=0;i<=r;i++)
    c[i][i]=1;
   for(i=2;i<=n;i++)
    for(j=1;j<=i-1;j++)
      c[i][j]=c[i-1][j]+c[i-1][j-1];

   printf("%d",c[n][r]);
}

