#include <stdio.h>

int main()
{
    int c, i, min, max,indmax , indmin;
    int a[100];
    i = 0;
    printf("enter the size of the array\n");
    scanf("%d", &c);
   for(i; i < c; i++)
   {
       printf("a[%d] = ",i);
       scanf("%d", &a[i]);
   }
    i = i + 1;
    a[i] = '\0';
    max = a[0];
    min = a[0];
    for(i; i >= 0; i--)
    {
        if(a[i] > max)
        {
            max = a [i];
            indmax = i;
        }
        if(a[i] < min)
        {
            min = a [i];
            indmin = i;
        }
    }
    printf("index max = %d, index min = %d\n", indmax, indmin);
    printf("Difference between max and min: %d\n",indmax - indmin);

    return 0;
}