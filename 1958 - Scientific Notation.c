#include <stdio.h>
int main()
{
    long double X;
    char s[120];
    scanf("%Lf", &X);
    sprintf(s,"%LE", X);
    if(s[0]!='-')
    {
        printf("+");
    }
    printf("%.4LE\n", X);
}
