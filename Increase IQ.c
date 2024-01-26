#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
    int X;
    scanf("%d", &X);
    if(X >= 100 && X <= 169)
    {
        if(X + 7 > 170)
            printf("Yes");
        else
            printf("No");
    }
    else
    {
     scanf("%d", &X);
    }
    return 0;
}
