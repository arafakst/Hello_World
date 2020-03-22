#include<stdio.h>
int main()
{
    int a=50.45,b=60,sum;//because of int value .45 can't show
    sum=a+b;             //type cast
    printf("%d+%d=%d",a,b,sum);
    return 0;
}
