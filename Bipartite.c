#include <stdio.h>

int p,q,c[10][10];

int findmax()
{
    int i,j,sum,max,index=0;
    int temp[p];
    for(i=0;i<p;i++)
      {
        sum=0;
        for(j=0;j<q;j++)
            {
              sum+=c[i][j];
             }
            temp[i]=sum;
        }
        max=temp[0];
        for(i=1;i<p;i++)
        {
                if(temp[i]>max)
                {
                        max=temp[i];
                        index=i;
                }
        }
        if(max==0)
        {
                return -1;
        }
        else
        {
                return index;
        }
}
int main()
{
        int i,j,op[p],func,index=0;
        printf("ENTER THE NUMBER OF VERTICES IN P AND Q:\n");
        scanf("%d %d",&p,&q);
        printf("ENTER THE MATRIX:\n");
        for(i=0;i<p;i++)
        {
                for(j=0;j<q;j++)
                {
                        scanf("%d",&c[i][j]);
                }
        }
        func=findmax();
        while(func!=-1)
       {
                op[index++]=func+1;
                for(j=0;j<q;j++)
                {
                        if(c[func][j]==1)
                        {
                                for(i=0;i<p;i++)
                                {
                                        c[i][j]=0;
                                }
                        }
                }
                func=findmax();
        }
        printf("THE MINIMUM VERTICES THAT ARE REQUIRES ARE:");
        for(i=0;i<index;i++)
        {
                printf("%d\t",op[i]);
        }
}
