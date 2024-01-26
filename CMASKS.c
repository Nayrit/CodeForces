#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        if(N==2)
            printf("3\n");
        else if(N>2)
        {
            int x=0,y=0,z=0,a=0,b=0,c=0,d=0;
            for(int i=0; i<N; i++)
                x = x+i; //x=match number
                printf("%d\n", x);
            y = N-1; //highest
            z = x-y; //match remaining
            a = N-2;
            b = z%a;
            if(b==0)
                d=z/a;
            else
                d=(z+b)/a;
            c = (y*3) - (d*3);
            printf("%d\n", c);
        }
        else
            scanf("%d", &N);
    }
    return 0;
}
