#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("Input 3 numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    int x,y;
    if(abs(a)>abs(b))x=a;
    else x=b;
    if(abs(x)>abs(c))y=x;
    else y=c;

    printf("Output:");
    printf("\nThe number with maximum absolute value is %d.",y);
    return 0;

}
