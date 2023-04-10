#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int N;
 cin >> N;
 
 string A[N], B, C;
 int count1 = 0, count2 = 0, count3 = 0;
 for(int i=0; i<N; i++)
 {
  cin >> A[i];
 }
 if(N == 1)
    {
        cout << A[0];
    }
    else
    {
        for(int i=0; i<N-1; i++)
        {
            if(A[i] != A[i+1])
            {
                B = A[i];
                C = A[i+1];
                count3 ++;
                break;
            }
        }
        if(count3 == 0)
        {
            B = A[0];
            C = "WHAT";
        }
        for(int i=0; i<N; i++)
        {
            if(A[i] == B)
            {
                count1 ++;
            }
            else if(A[i] == C)
            {
                count2 ++;
            }
        }
 
        if(count1 > count2)
        {
            cout << B << endl;
        }
        else if(count2 > count1)
            cout << C << endl;
 
    }
 
 return 0;
}