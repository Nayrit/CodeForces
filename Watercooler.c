#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int X,Y,M,N=0;
        scanf("%d %d %d", &X, &Y, &M);
        N = X*M;
        if(N < Y)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
