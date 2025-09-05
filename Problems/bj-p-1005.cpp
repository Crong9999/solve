// https://www.acmicpc.net/problem/1005
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
    int n, K;
    cin >> n >> K;

    vector<int> build_time(n + 1);
    
    cin.ignore();
    string line;
    getline(cin, line);
    stringstream ss(line);
    for (int i = 1; i <= n; ++i) {
        ss >> build_time[i];
    }

    vector<vector<int>> adj(n + 1);
    vector<int> in_degree(n + 1, 0);
    vector<long long> result_time(n + 1, 0);

    for (int i = 0; i < K; ++i) {
        int X, Y;
        cin >> X >> Y;
        adj[X].push_back(Y);
        in_degree[Y]++;
    }

    int W;
    cin >> W;

    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (in_degree[i] == 0) {
            q.push(i);
            result_time[i] = build_time[i];
        }
    }

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int next : adj[current]) {
            result_time[next] = max(result_time[next], result_time[current] + build_time[next]);
            
            in_degree[next]--;
            if (in_degree[next] == 0) {
                q.push(next);
            }
        }
    }

    cout << result_time[W] << '\n';
}

signed main()
{
    fast;

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}