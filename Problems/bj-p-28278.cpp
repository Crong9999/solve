// https://www.acmicpc.net/problem/28278
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

    stack<int> s;

    // N개의 명령어를 하나씩 입력받아 바로 처리
    for (int i = 0; i < n; ++i)
    {
        int command;
        cin >> command;

        if (command == 1)
        {
            // 명령어 1일 때만 추가로 숫자를 입력받음
            int x;
            cin >> x;
            s.push(x);
        }
        else if (command == 2)
        {
            if (s.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                // 중요: 먼저 top()으로 값을 출력하고, 그 다음에 pop()으로 제거
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if (command == 3)
        {
            cout << s.size() << '\n';
        }
        else if (command == 4)
        {
            // s.empty()는 비어있으면 true(1), 아니면 false(0)을 반환
            cout << s.empty() << '\n';
        }
        else if (command == 5)
        {
            if (s.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << s.top() << '\n';
            }
        }
    }
}

signed main()
{
    fast;
    solve();
    return 0;
}