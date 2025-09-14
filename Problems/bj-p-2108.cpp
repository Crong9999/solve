// https://www.acmicpc.net/problem/2108
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
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> w;
    int mean = 0, centre, mode, range;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        mean += v[i];
        w[v[i]]++;
    }
    sort(v.begin(), v.end());

    int sign = mean < 0 ? -1 : 1;
    mean = round(double(abs(mean)) / n) * sign;
    cout << mean << "\n";

    centre = v[n / 2];
    cout << centre << "\n";

    int max_count = -1;
    for (auto& m : w)
    {
        max_count = max(max_count, m.second);
    }

    vector<int> vw;
    for (auto& m : w)
    {
        if (m.second == max_count)
        {
            vw.push_back(m.first);
        }
    }

    mode = vw.size() > 1 ? vw[1] : vw[0];
    cout << mode << "\n";

    range = v[v.size() - 1] - v[0];
    cout << range << "\n";
}

signed main()
{
    fast;
    solve();
    return 0;
}