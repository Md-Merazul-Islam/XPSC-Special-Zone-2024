
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define N 1000100
// int t,n,val[N],l[N],r[N];
// char s[N];
// int dfs(int u)
// {
//     if(u == 0)return 1e9;
//     if(l[u] == 0 && r[u] == 0)return 0;
//     return min(dfs(l[u])+(s[u]!='L'),dfs(r[u])+(s[u]!='R'));

// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         cin>>s + 1;
//         for(int i=1;i<=n;i++)cin>>l[i]>>r[i];
//         cout<<dfs(1)<<endl;
//     }
// }





/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**             https://github.com/Md-Merazul-Islam           **
**************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define pii pair<ll, ll>
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define rsrt(a) sort(a.rbegin(), a.rend())
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)

const int N = 1000100;
ll n, val[N], l[N], r[N];
char s[N];

ll dfs(ll u)
{
    if (u == 0 )
        return N; 
    if (l[u] == 0 && r[u] == 0)
        return 0;
    return min(dfs(l[u]) + (s[u] != 'L'), dfs(r[u]) + (s[u] != 'R'));
}

void hello_world_solve_here()
{
    cin >> n;
    cin >> s+1;
    for (int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];
    cout << dfs(1) << endl;
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        hello_world_solve_here();
    return 0;
}
