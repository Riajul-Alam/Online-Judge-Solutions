#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void file();
int main()
{
    file();
    int a[25][25],row,col,diff,diff2;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
         cin>>a[i][j];
         if(a[i][j]==1){
             row=i,col=j;
         }
        }
    }
 
    diff=abs(row-3);
    diff2=abs(col-3);
    int ans=diff+diff2;
    cout<<ans<<endl;
}
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //fast;
}