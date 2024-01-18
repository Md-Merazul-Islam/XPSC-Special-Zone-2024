
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
**************************************************************/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define PI 3.14159265359
#define dmin 1e-9
#define dd double
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define revs(a) reverse(a.begin(), a.end())
#define all(a)  a.begin(), a.end()
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 10;
int t, n, p[N], sz[N];
vector<int> G[N];

void dfs(int u)
{
    sz[u] = 1;
    for (int v : G[u])
    {
        dfs(v);
        sz[u] += sz[v];
    }
    return;
}

int solve(int u)
{
    int mx = 0, pos = 0, sum = 0;
    for (int v : G[u])
    {
        sum += sz[v];
        if (mx < sz[v])
            mx = sz[v], pos = v;
    }
    if (mx <= sum - mx)
        return (sum & 1) + 1;
    else
        return max(solve(pos) - (sum - mx), (sum & 1)) + 1;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            G[i].clear();
        for (int i = 2; i <= n; i++)
        {
            cin >> p[i];
            G[p[i]].push_back(i);
        }
        dfs(1);
        cout << (n - (solve(1))) / 2 << endl;
    }
    return 0;
}