
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

signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        cin >> s;
        int n = s.size();
        int cnta = 0, cntb = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                cnta++;
            }
            if (s[i] == 'B')
            {
                cntb++;
            }
        }
        if (cnta > a + c + d || cntb > b + c + d)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> ab, ba;
        int cntab = 0, cntba = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j + 1 < n && s[j] != s[j + 1])
            {
                j++;
            }
            if ((j - i + 1) % 2 != 0)
            {
                if (s[i] == 'A')
                {
                    a--;
                }
                else
                {
                    b--;
                }
            }
            else if ((j - i + 1) % 2 == 0)
            {
                if (s[i] == 'A')
                {
                    ab.push_back((j - i + 1) / 2);
                    cntab += (j - i + 1) / 2;
                }
                else
                {
                    ba.push_back((j - i + 1) / 2);
                    cntba += (j - i + 1) / 2;
                }
            }
            i = j;
        }
        if (a < 0 || b < 0)
        {
            cout << "NO" << endl;continue;
        }
        {
            int tep = min(a, b);
            sort(ab.begin(), ab.end());
            while (!ab.empty() && tep)
            {
                tep--;
                cntab -= ab.back();
                ab.pop_back();
            }
            if (cntab > c)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        {
            int tep = min(a, b);
            sort(ba.begin(), ba.end());
            while (!ba.empty() && tep)
            {
                tep--;
                cntba -= ba.back();
                ba.pop_back();
            }
            if (cntba > d)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        yes;
    }
    return 0;
}