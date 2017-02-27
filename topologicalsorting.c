
#include <stdio.h>
#include<stdlib.h>
void main ()
{
  int f, i, p, j, v[100], a[100][100], ver[100], n;
  printf ("Enter value of n\n");
  scanf ("%d", &n);
  printf ("Enter matrix\n");
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
        {
          scanf ("%d", &a[i][j]);
        }
    }
  for (i = 1; i <= n; i++)
    v[i] = 0;
  for (p = 1; p <= n; p++)
    {
      for (j = 1; j <= n; j++)
        {
          f = 0;
          if (v[j] == 0)
            {
              for (i = 1; i <= n; i++)
                {
                  if (a[i][j] != 0 && v[i] == 0)
                    {
                      f = 1;
                      break;
                    }
                }
              if (f == 0)
                {
                  v[j] = 1;
                  ver[p] = j;
                  break;
                }
            }
        }
    }
 if (j > n)
    printf ("Not possible\n");
  else
    for (p = 1; p <= n; p++)
      printf ("%d ", ver[p]);

