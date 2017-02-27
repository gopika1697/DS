#include<stdio.h>

void
msort (int[], int, int);
     void merge (int[],int, int, int);
int c[25];
     void main ()
{

  int n, a[25], i, high, low = 0;
  printf ("enter array size");
  scanf ("%d", &n);
  high = n - 1;
  printf ("Enter array elements");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  msort (a, low,high);
printf("After sorting....\n");
for(i=0;i<n;i++)
printf(" %d ",a[i]);

}

void
msort (int a[], int low, int high)
{
  int mid,i;
  if (low < high)
    {
      mid = (low + high) / 2;
      msort (a, 0, mid);
      msort (a, mid + 1, high);
      merge (a, low, mid, high);
    }
}
}
void
merge (int a[], int low, int mid, int high)
{
  int i= low;
int k=low;
  int j = mid + 1;
  while (i <= mid && j <= high)
    {
      if (a[i] <= a[j])
        c[k++] = a[i++];
        else
        c[k++] = a[j++];
   }
  while (i <= mid)
    c[k++] = a[i++];

  while (j <= high)
    c[k++] = a[j++];
for(i=low;i<=high;i++)
a[i]=c[i];
}

