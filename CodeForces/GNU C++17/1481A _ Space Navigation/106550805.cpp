 #include <bits/stdc++.h>
 using namespace std;
 
 typedef long long int ll;
 int main()
 {
  int tt;
  cin>>tt;
  while(tt--)
  {
    ll n,m,x,y,c1=0,c2=0;
    cin>>x>>y;
    string st;
    cin>>st;
    ll u=0,d=0,l=0,r=0;
    for(int i=0;i<st.size();i++)
    {
     if(st[i]=='R'){r++;}
     else if(st[i]=='L'){l++;}
     else if(st[i]=='U'){u++;}
     else if(st[i]=='D'){d++;}
    }
    if(x>0)
    {
     if(x<=r){c1++;}
    }
    else 
    {
     if(abs(x)<=l){c1++;}
    }
    if(y>0)
    {
     if(y<=u){c2++;}
    }
    else
    {
     if(abs(y)<=d){c2++;}
    }
     if(c1!=0 && c2!=0)
     {
      cout<<"YES"<<endl;
     }
     else 
     {
      cout<<"NO"<<endl;
     }
  }
  return 0;
 }