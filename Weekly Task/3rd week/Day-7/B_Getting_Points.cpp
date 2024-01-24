
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
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;
void hello_wrold_solve_here()
{
    ll n, p, les, lab;
    cin >> n >> p >> les>>lab;
    ll total_lab = (n + 6) / 7;
    ll l = 01, r = n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll tmp = mid * les + lab * min(2 * mid, total_lab);
        if(p <= tmp)
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << n - ans << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        hello_wrold_solve_here();
    return 0;
}