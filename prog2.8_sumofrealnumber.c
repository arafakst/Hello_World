#include<stdio.h>
int main()
{
    double a,b,sum;

    a=9.5;
    b=6.875;
    sum=a+b;
    printf("Sum is :%lf\n",sum);
    printf("Sum is :%0.2lf\n",sum);//%0.2lf for two box
    return 0;                     //%0.3lf for three box ,doesn't want to print point then %0.01lf

}
