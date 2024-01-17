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
#define revs(a) reverse(a.rbegin(), a.rend())
#define all(a) (a).begin(), (a).end() // Fix here
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = accumulate(all(a), 0);
        if (sum < s)
        {
            cout << -1 << line;
            continue;
        }
        vi ans(n, n);
        int last = n;
       for (int i = n - 1; i >= 0; --i) 
        {
            ans[i] = last;
            if (a[i] == 1)
                last = i;
        }
        ll mn = INT_MAX, cur = 0, l = 0;
        queue<int> q;
        loop(i, 0, n)
        {
            q.push(a[i]);
            cur += a[i];
            while (!q.empty() && cur > s)
            {
                cur -= q.front();
                q.pop();
                l++;
            }
            if (cur == s)
                mn = min(mn, l + (n - ans[i]));
        }
        cout << mn << line;
    }

    return 0;
}
