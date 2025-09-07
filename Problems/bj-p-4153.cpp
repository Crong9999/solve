// https://www.acmicpc.net/problem/4153
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
    while(1)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;

        bool answer = false;
        if (a > b && a > c)
        {
            if (a * a == b*b + c*c) answer = true;
        }
        else if (b > a && b > c)
        {
            if (b * b == a*a + c*c) answer = true;
        }
        else if (c > a && c > b)
        {
            if (c * c == a * a + b * b) answer = true;
        }
        else
        {
            answer = false;
        }
        
        if (answer)
            cout << "right\n";
        else
            cout << "wrong\n";
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}