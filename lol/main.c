#include <stdio.h>




int fib(int n)
{
    if (n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return fib(n - 1)+ fib(n - 2);
}
int main()
{
    int count = 0;
    int a = 0;
    scanf("%d",&a);
    int i = 0;
    for(i = 0;i < 32;i++)
    {
        if(a & 1 == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    printf("count = %d",count);
    //计算整数二进制位有多少个1
    //青蛙跳台阶
    int n = 0;
     scanf("%d",&n);
     fib(n);



    char ch = 0;
    while (scanf(" %c",&ch)==1)
    {
        if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
            printf("y\n");
        else
            printf("n\n");
    }
    return 0;
}
