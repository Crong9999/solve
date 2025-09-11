// https://www.acmicpc.net/problem/11866
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
    int n, k;
    cin >> n >> k;

    queue<int> q;

    for (int i = 0; i < n; ++i)
    {
        q.push(i+1);
    }

    vector<int> r;

    while (!q.empty())
    {
        for (int i = 0; i < k - 1; ++i)
        {
            int f = q.front();
            q.pop();
            q.push(f);
        }

        r.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for (size_t i = 0; i < r.size(); ++i)
    {
        cout << r[i];
        if (i < r.size() - 1) {
            cout << ", ";
        }
    }
    cout << ">";
}

signed main()
{
    fast;
    solve();
    return 0;
}