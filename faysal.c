#include <stdio.h>
int sum(int num)
{
    static int i = 1;
    if (num == i)
        return num;
    else if (num % i != 0)
    {
        i++;
        return sum(num);
    }
    else if (num % i == 0)
    {
        i++;
        return num + sum(num);
    }
}
    int main()
    {
        int result;
        result = sum(10);
        printf("Total Sum = %d", result);
        return 0;
    }