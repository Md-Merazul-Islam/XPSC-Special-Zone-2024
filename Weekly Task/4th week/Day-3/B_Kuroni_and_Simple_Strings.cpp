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
#define scan(a) loop(i, 0, a.size()) cin >> a[i]
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 5;

void hello_world_solve_here()
{
    string s;
    cin >> s;
    ll l = 0, r = s.size() - 1;  
    vi left, right;
    while (l < r)
    {
        while (l < s.size() && s[l] == ')')
            l++;
        while (r >= 0 && s[r] == '(')
            r--;
        if (l < s.size() && r >= 0 && l < r)
        {
            left.pb(l + 1);
            right.pb(r + 1);
            l++;
            r--;
        }
    }

    if (left.empty())
    {
        cout << "0\n";
        return;
    }
    cout << "1\n";
    cout << 2 * left.size() << line;
    for (auto i : left)
        cout << i << " ";
    reverse(all(right));
    for (auto i : right)
        cout << i << " ";
    cout << "\n";
}

signed main()
{
    fast;
    int t = 1;
    while (t--)
        hello_world_solve_here();
    return 0;
}
