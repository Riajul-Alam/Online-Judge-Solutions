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
 fast;
 int t;
 cin >> t;
 while (t--)
 {
  ll n, m, x, y, z, k, s1 = 0, s2 = 0, sum = 0, c1 = 0, c2 = 0, ans = 0;
  string s;
  cin >> s;
  n = s.size();
  ll a[n+5],start=0;
  for(int i=0;i<n;i++)
  {
   a[i]=s[i]-'0';
  }
  set<ll>st;
  vector<ll>v;
  for (int i = 0; i < n; i++)
  {
   st.insert(a[i]);
  }
  if (st.size() < 3) {cout << 0 << endl;continue;}
  map<ll, ll>mp;
  for (int i = 0; i < n; i++)
  {
     mp[a[i]]++;
     if (mp.size() == 3) {start = i; break;}
 
  }
  //cout<<mp.size()<<endl;
  ll it=0;
  for (int k = start; k < n; k++)
  {
            if(k!=start)
            {
    mp[a[k]]++;
            }
   while (mp[1]>0 && mp[2]>0 && mp[3]>0)
   {
    mp[a[it]]--;
    if (mp[1]>0 && mp[2]>0 && mp[3]>0) {it++;}
    else
    {
     mp[a[it]]++; break;
    }
   }
   ll temp = k-it+1;
   //cout << "temp " << temp << endl;
   v.push_back(temp);
 
  }
  sort(v.begin(), v.end());
  cout << v[0] << endl;
 }
 return 0;
}