// https://www.acmicpc.net/problem/28702
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

bool fizzbuzz(string& s)
{
    return (s.find("Fizz") != string::npos || s.find("Buzz") != string::npos);
}

void solve()
{
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;

    int w = 0;
    
    if (!fizzbuzz(s1))
    {
        w = stoi(s1);
        w += 3;
    }

    if (!fizzbuzz(s2))
    {
        w = stoi(s2);
        w += 2;
    }

    if (!fizzbuzz(s3))
    {
        w = stoi(s3);
        w += 1;
    }

    if (w % 3 == 0 && w % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (w % 3 == 0 && w % 5 != 0)
    {
        cout << "Fizz";
    }
    else if (w % 3 != 0 && w % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << w;
    }


}

signed main()
{
    fast;
    solve();
    return 0;
}