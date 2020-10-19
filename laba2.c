#include<stdio.h> 

int main(){
    char a[100];
    char s[100];
    char c, v;
    int z = 0;
    int i = 0;
    int j = 0;
    int r = 0;
    int q = 0;
    printf("input line\n");
    while((c = getchar()) != '\n' && i < 99 )
    {
        a[i] = c;
        i++;
    }
    a[i] = ' ';
    i = i + 1;
    a[i] = '\0';
    for (j; j < i; j++)
    {
        if (!('a' <= a[j] && a[j] <= 'z') || ('A' <= a[j] && a[j] <= 'Z'))
        {
            r = j;
            j = j - 1;
            for (j; j >= q; j--)
            {
                if (('a' <= a[j] && a[j] <= 'z') || ('A' <= a[j] && a[j] <= 'Z') || j !=0 )
                {
                    v = a[j];
                    s[z] = v;
                    z = z + 1;
                }
                if (j == q)
                {
                    s[z] = ' ';
                    z = z + 1;
                }
            }
            j = r;
            q = r + 1;
        }
    }
    z = z - 2;
    for(z; z >= 0; z--)
    {
        putchar(s[z]);  
    }
}