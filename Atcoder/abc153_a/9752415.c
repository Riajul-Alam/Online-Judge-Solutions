#include<stdio.h>
int main()
{
    int h,n,count;
    scanf("%d %d",&h,&n);
    count=0;
    while(h>0)
    {
        h=h-n;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
