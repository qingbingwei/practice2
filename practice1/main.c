#include <stdio.h>
#include <math.h>
int main()
{
    //变种水仙花问题，例.1461 = 1*461+14*61+146*1
    //求五位数中所有Lily Number
    int i = 0;
    for (i = 10000;i <= 99999;i++)
    {
        int j = 0;
        int sum = 0;
        for(j = 1;j <= 4;j++)
        {
           int n = (int)pow(10,j);//pow返回类型为double
            sum += (i%n)*(i/n);
        }
        if(sum == i)
            printf("%d\n",i);
    }

    return 0;
}
