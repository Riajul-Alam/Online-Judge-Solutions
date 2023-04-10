#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,i,n;
    cin>>s;
       for(i=0;i<s.length();i=i+2)
    {
        if(!(s[i]=='h' && s[i+1]=='i'))
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}