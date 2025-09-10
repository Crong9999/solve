// https://www.acmicpc.net/problem/2751
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
    vector<int> v;

    int t;
    cin >> t;

    while (t > 0)
    {
        int num;
        cin >> num;

        v.push_back(num);
        t--;
    }

    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << "\n";
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}