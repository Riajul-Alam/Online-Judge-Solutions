#include<stdio.h>
int main()
{

    long long int h,n,i,sum,a[100001];
    scanf("%lld %lld",&h,&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    if(sum>=h)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
