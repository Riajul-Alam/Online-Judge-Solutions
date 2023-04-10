#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int ln=s.length();
    int ln1=t.length();
    int cnt=0;
    for(int i=0; i<ln; i++)
    {
        if(s[i]==t[i])
        {
            continue;
        }
        else
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
    {
        if(ln1-1==ln && (t[ln1-1]>='a' && t[ln1-1]<='z'))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
