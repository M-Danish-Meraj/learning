#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, original_n, k;
    scanf("%d", &n);
    original_n = n;
    printf("----------------------------------\n");
    // 4444444
    
        int a;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        a=n;
        printf("%d", a);
    }

    printf("\n");

    n = original_n;

    // 4333334
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i == 1 || i == 2 * n - 1)
        {
            // Print 'n' at the first and last positions
            int a=n;
            printf("%d", a);
        }
        else
        {
            // Print 'n-1' for all other positions
            int b= n-1;
            printf("%d", b);                                                //  a=n  b=n-1  c=n-2  d=n-3
        }
    }
    printf("\n");
    n = original_n;
    // 4322234
for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i == 1 || i == 2 * n - 1)
        {
            // Print 'n' at the first and last positions
            int a=n;
            printf("%d", a);
        } 
        else if (i == 2 || i == 2 * n - 2)
        {
            int b=n-1;
            printf("%d",b);
        }
        else
        {
            // Print 'n-1' for all other positions
            int c=n-2;
            printf("%d", c);                                
        }
    }
     printf("\n");
//?
for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i == 1 || i == 2 * n - 1)
        {
            // Print 'n' at the first and last positions
            int a=n;
            printf("%d", a);
        } 
        else if (i == 2 || i == 2 * n - 2)
        {
            int b=n-1;
            printf("%d",b);
        }
        else if (i == 3 || i == 2 * n - 3)
        {
            int c=n-2;
            printf("%d",c);
        }
        else
        {
            // Print 'n-1' for all other positions
            int d=n-3;
            printf("%d", d);
        }
    }
            printf("\n");
            // 4321234
            {
                for (int i = n; i >= 1; i--)
                {
                    int a=n;
                    printf("%d", a);
                    n = n - 1;
                }
                n = original_n;
                // printf("\n");
                n = original_n;
                for (int k = 2; k <= n; k++)
                {
                    printf("%d", k);
                    // n = n + 1;
                }
            }
    
            return 0;
        }