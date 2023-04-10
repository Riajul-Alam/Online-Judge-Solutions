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
 string st;
 getline(cin,st);
 set<char>stt;
 for(int i=0;i<st.size();i++)
 {
  if(st[i]>='a' && st[i]<='z')
  {
   stt.insert(st[i]);
  }
 }
 cout<<stt.size()<<endl;
}