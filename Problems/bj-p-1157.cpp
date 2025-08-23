// https://www.acmicpc.net/problem/1157
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
    string s;
    cin >> s;

    vector<int> w(26);

    for (const char c : s)
    {
        int index = toupper(c) - 'A';
        w[index]++;
    }

    int max_count = 0;
    int letter = -1;
    bool same_flag = false;
    for (int i = 0; i < w.size(); i++)
    {
        if (w[i] == max_count)
        {
            same_flag = true;
            continue;
        }

        if (w[i] > max_count)
        {
            max_count = w[i];
            letter = i + 65;
            same_flag = false;
        }
    }

    if (same_flag)
    {
        cout << '?';
    }
    else
    {
        char c = letter;
        cout << c;
    }

}

signed main()
{
    fast;
    solve();
    return 0;
}