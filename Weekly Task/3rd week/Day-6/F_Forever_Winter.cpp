
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
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
#define vpi vector<pair<ll, ll>>
#define pii pair<ll,ll> 
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
void hello_wrold_solve_here()
{
    
    int n, m;
    cin >> n >> m;

    vector<int> adj[n];
    vector<int> ind(n, 0);

    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[v - 1].push_back(u - 1);
        adj[u - 1].push_back(v - 1);
    }

    int x = 0, y = 0, node1 = 0, node2 = 0;

    for (int i = 0; i < n; i++) {
        if (adj[i].size() == 1) {
            node2 = adj[i][0];
            y = adj[adj[i][0]].size() - 1;

            int mx = -1;
            for (auto it : adj[adj[i][0]]) {
                if (adj[it].size() > 1) {
                    mx = adj[it].size();
                    node1 = it;
                }
            }

            x = adj[node1].size();
        }
    }

    cout << x << " " << y << endl;
}


signed main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_wrold_solve_here();
    return 0;
}