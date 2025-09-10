// https://www.acmicpc.net/problem/1920
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

vector<int> v;

int binary(int arg)
{
    int left = 0;
    int right = v.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (v[mid] == arg) {
            return 1;
        }

        if (v[mid] < arg)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return 0;
}

void solve()
{
    
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    cin >> m;
    for (int i =0; i < m; ++i)
    {
        int input;
        cin >> input;

        cout << binary(input) << "\n";
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}