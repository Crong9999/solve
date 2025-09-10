// https://www.acmicpc.net/problem/11651
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


bool comp(pair<int, int>& arg1, pair<int, int>& arg2)
{
    if (arg1.second > arg2.second)
    {
        return false;
    }
    else if (arg1.second == arg2.second)
    {
        if (arg1.first > arg2.first)
        {
            return false;
        }
    }

    return true;
}


void solve()
{
    int t;
    cin >> t;

    vector<pair<int, int>> p;

    while (t > 0)
    {
        int x, y;
        cin >> x >> y;

        p.PB(MP(x,y));
    
        t--;
    }

    sort(p.begin(), p.end(), comp);

    for (auto& a : p)
    {
        cout << a.first << " " << a.second << "\n";
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}