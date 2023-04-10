//Bismillahir Rahmanir Raheem
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
    ll h,w,x,y,Count=0;
    cin>>h>>w>>x>>y; 
    char a[101][101];
    for(int i=0;i<h;i++){
    	for(int j=0;j<w;j++){
    		cin>>a[i][j];
    	}
    }
    // for(int i=x-1;i<h;i++){
    // 	if(a[i][y-1]=='.'){Count++;}
    // 	else{break;}
    // }
    // for(int i=x-2;i>=0;i--){
    // 	if(a[i][y-1]=='.'){Count++;}
    // 	else{break;}
    // }
    // for(int i=y;i<w;i++){
    // 	if(a[x-1][i]=='.'){Count++;}
    // 	else{break;}
    // }
    // for(int i=y-2;i>=0;i--){
    // 	if(a[x-1][i]=='.'){Count++;}
    // 	else{break;}
    // }
    // cout<<Count<<endl;
     
     ll dx[4]={-1,0,1,0};
     ll dy[4]={0,1,0,-1}; 
     for(int i=0;i<4;i++)
     {
     	ll sx=x-1,sy=y-1;
     	while(sx>=0 && sx<h && sy>=0 && sy<w && a[sx][sy]!='#'){
     		Count++;
     		sx+=dx[i];
     		sy+=dy[i];
     	}
     }
     if(Count){
     	 cout<<Count-3<<endl;
     	}else{cout<<0<<endl;}
    
}