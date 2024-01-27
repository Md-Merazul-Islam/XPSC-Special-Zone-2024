
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
#define scan(a) loop(i,0, a.size()) cin >> a[i]
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
const int intf = 0x3f3f3f3f;
ll a[200005];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
 
        ll sum = 0;
        ll ma;
        memset(a, 0, sizeof a);
        cin >> a[0];
        ma = a[0];
        for (ll i = 1; i < n; i++)
        {
            int z; cin >> z;
             a[i]=z;
            if (a[i] * a[i - 1] > 0)
            {
                ma = max(ma, a[i]);
            }
            else
            {
                sum += ma;
                ma = a[i];
            }
        }
        sum += ma;
        cout << sum << endl;
    }
    return 0;
}