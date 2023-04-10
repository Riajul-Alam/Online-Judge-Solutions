#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define mod 1000000007

const int MAXN = 200005;

vector<int> g[MAXN];
int d[MAXN], cnt[MAXN];
bool used[MAXN];

void bfs(int s) {
    fill(d, d + MAXN, -1);
    fill(cnt, cnt + MAXN, 0);
    fill(used, used + MAXN, false);

    queue<int> q;
    q.push(s);
    d[s] = 0;
    cnt[s] = 1;
    used[s] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (auto u : g[v]) {
            if (d[u] == -1) {
                d[u] = d[v] + 1;
                cnt[u] = cnt[v]%mod;
                used[u] = true;
                q.push(u);
            } else if (d[u] == d[v] + 1) {
                cnt[u]=((cnt[u]%mod)+(cnt[v]%mod))%mod;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(1);
    cout << cnt[n]%mod<< endl;

    return 0;
}
