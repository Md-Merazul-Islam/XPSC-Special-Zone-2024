
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
#define nn "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print(vector<ll> &a) { loop(i, 0, a.size()) cout << a[i] << ' '; }
template <typename T>
using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void mdmerazulislam()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    int cnt = 1, small = 1, large = n * n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (cnt % 2 == 1)
                {
                    a[i][j] = small;
                    small++;
                }
                else
                {
                    a[i][j] = large;
                    large--;
                }
                cnt++;
            }
        }
        else
        {
            // cnt=1;
            for (int j = n; j >= 1; j--)
            {

                if (cnt % 2 == 1)
                {
                    a[i][j] = small;
                    small++;
                }
                else
                {
                    a[i][j] = large;
                    large--;
                }
            cnt++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        mdmerazulislam();

    return 0;
}