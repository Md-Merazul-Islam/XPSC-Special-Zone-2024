
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
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
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define revs(a) reverse(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int i, j, k, n, m, t, a[200500];

void mdmerazulislam()
{
    int res = -1, l, r;
    map<int, int> lst, f;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        k = a[i];
        f[k] = max(f[k] - i + lst[k] + 2, 1);
        lst[k] = i;
        if (f[k] > res)
            res = f[k], r = i;
    }
    int sb = 0;
    for (l = r;; l--)
    {
        (a[l] == a[r]) ? sb++ : sb--;
        if (sb == res)
            break;
    }
    cout<<a[r]<<" "<<l<<" "<< r<<line;
}

int main()
{
    fast;
        int t;
        cin >> t;
        while (t--)mdmerazulislam();

    return 0;
}