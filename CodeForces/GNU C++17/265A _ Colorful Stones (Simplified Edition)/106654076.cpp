#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
     ll Count=0;
     for(int i=0;i<s2.size();i++)
     {
       if(s2[i]==s1[Count])
       {
        Count++;
       }
     }
     cout<<Count+1<<endl;
}