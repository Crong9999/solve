// https://www.acmicpc.net/problem/9625
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

void solve(){
    int k;
    cin >> k;

    vector<int> a(45);
    vector<int> b(45);

    a[2] = 1;
    b[1] = 1;
    b[2] = 1;

    if (k == 1)
    {
        cout << "0 1";
        return;
    }

    if (k == 2)
    {
        cout << "1 1";
        return;
    }

    for (int i = 3; i <= k; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    cout << a[k] << ' ' << b[k];
}

signed main()
{
    fast;

    solve();

    return 0;
}