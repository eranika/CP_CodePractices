#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf(" %d %d",&a,&b);
    while (a<b||a==b)
    {
        a*=3;
        b*=2;
        c++;
    } printf("%d",c);


    return 0;
}
