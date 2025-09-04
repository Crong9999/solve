// https://www.acmicpc.net/problem/11005
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

void solve()
{
    int n, b;
    cin >> n >> b;

    stack<int> s;

    while (n >= b)
    {
        int c = n % b;
        s.push(c);

        n /= b;
    }
    s.push(n);

    string str;

    int len = s.size();

    for (int i = 0; i < len; ++i)
    {
        int v = s.top();

        if (v >= 10)
        {
            char c = v + 55;
            str += c;
        }
        else
        {
            str += to_string(v);
        }
        s.pop();
    }
    cout << str;
}

signed main()
{
    fast;
    solve();
    return 0;
}