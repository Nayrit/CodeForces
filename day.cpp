#include <stdio.h>  
int main()  
{  
    int y, ry = 1900, difference, ly=0;
    printf("Enter a year: \n");  
    scanf("%d", &y);  
    difference = y - ry;
    while(ry < y)  
    {  
        if(ry % 100 == 0)  {
            if(ry % 400 == 0){  
                ly++;  }}
        else  {
            if(ry % 4 == 0) { 
                ly++;  }}
        ry++;  
    }  
    int td=0;
    td = (difference - ly) * 365 + ly * 366;
    int day =0;
    day = td % 7;
    switch(day)  
    {  
        case 0: printf("Monday.\n");  
                break;  
        case 1: printf("Tuesday.\n");  
                break;  
        case 2: printf("Wednesday.\n");  
                break;  
        case 3: printf("Thursday.\n");  
                break;  
        case 4: printf("Friday.\n");  
                break;  
        case 5: printf("Saturday.\n");  
                break;  
        case 6: printf("Sunday.\n");  
                break;  
    }  
  
    return 0;  
}