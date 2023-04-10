#include<stdio.h>
int main()
{
    int n,m,count=0,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++){
      count++;
    }
    if(count>=n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
