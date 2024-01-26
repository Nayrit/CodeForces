#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {

        char s2[40];
        scanf("%s", &s2[40]);
        int flag=0, c=0, p;
        p = strlen(s2);
        if(s2[0]=='A' && s2[p-1]=='B' && p!=1)
        {
            for(int i=0; i<p; i++)
            {
                if(s2[i]=='A')
                    c++;
                else
                    c--;

                if(c<0)
                {
                    flag=1;
                    break;
                }
                if(flag==1)
                    printf("No\n");
                else
                    printf("Yes\n");
            }
        }
        else
            printf("No\n");
    }
    return 0;
}
