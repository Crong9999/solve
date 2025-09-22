// https://www.acmicpc.net/problem/1889
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

void solve()
{
int N;
    cin >> N;

    vector<pair<int, int>> gifts_to(N + 1);
    vector<int> in_degree(N + 1, 0);
    
    for (int i = 1; i <= N; ++i) {
        int x, y;
        cin >> x >> y;
        gifts_to[i] = {x, y};
        in_degree[x]++;
        in_degree[y]++;
    }

    queue<int> q;
    vector<bool> removed(N + 1, false);

    for (int i = 1; i <= N; i++) {
        if (in_degree[i] < 2) {
            q.push(i);
            removed[i] = true;
        }
    }

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        int recipient1 = gifts_to[current].first;
        int recipient2 = gifts_to[current].second;

        in_degree[recipient1]--;
        in_degree[recipient2]--;

        if (in_degree[recipient1] < 2 && !removed[recipient1]) {
            q.push(recipient1);
            removed[recipient1] = true;
        }
        
        if (in_degree[recipient2] < 2 && !removed[recipient2]) {
            q.push(recipient2);
            removed[recipient2] = true;
        }
    }

    vector<int> result;
    for (int i = 1; i <= N; i++) {
        if (!removed[i]) {
            result.push_back(i);
        }
    }

    cout << result.size() << "\n";
    if (!result.empty()) {
        for (int student : result) {
            cout << student << " ";
        }
        cout << "\n";
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}