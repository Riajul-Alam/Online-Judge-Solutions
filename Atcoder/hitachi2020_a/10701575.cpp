#include<bits/stdc++.h>
using namespace std;
int main()

 {
     int a[35]={1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51},i,n;
     cin>>n;
     for(i=0;i<n;i++)
     {
         if(i==n-1)
         {
             cout<<a[i]<<endl;
         }
     }
     return 0;
 }
