// https://school.programmers.co.kr/learn/courses/30/lessons/176963
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


vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for (auto arr : photo)
    {
        int sum = 0;
        for (auto s : arr)
        {
            for (int i = 0; i < name.size(); i++)
            {
                if (s == name[i])
                {
                    sum += yearning[i];
                }
            }
        }

        answer.push_back(sum);
    }
    
    
    return answer;
}


void solve()
{
    
}

signed main()
{
    fast;
    solve();
    return 0;
}