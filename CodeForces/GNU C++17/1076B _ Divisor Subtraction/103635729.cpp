#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000001
vector<ll>primes;
vector<ll>List;
void sieve()
{
    bool isPrime[MAX];
    for (ll i = 0; i < MAX; i++)
    {
        isPrime[i] = false;
    }
    for (ll i = 3; i * i <= MAX; i += 2)
    {
        if (isPrime[i] == false)
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (ll i = 3; i <=MAX; i += 2)
    {
        if (isPrime[i] == false)
        {
            primes.push_back(i);
        }
    }
}
 
void primeFactorize(ll n)
{
    List.clear();
    ll Count = 0;
    for (ll i = 0; primes[i]*primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                List.push_back(primes[i]);
                break;
                Count++;
            }
        }
        if (Count != 0) {break;}
    }
    if (n > 1)
    {
        List.push_back(n);
    }
}
int main() {
 
    sieve();
 
    ll n;
    cin >> n;
    ll x = n, Count = 0;
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            Count += (x / 2);
            x=0;
        }
        else
        {
            primeFactorize( x );
            sort(List.begin(), List.end());
            if (List.size() == 0) {break;}
            else
            {
                x = x - List[0];
                Count++;
                // cout<<List[0]<<endl;
 
            }
        }
 
    }
    cout << Count << endl;
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 