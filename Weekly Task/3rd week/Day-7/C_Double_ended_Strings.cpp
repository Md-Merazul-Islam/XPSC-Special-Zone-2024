
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

ll lcsubstr(string str1,string str2)
{
      int ans = 0;

	for (int i = 0; i < str1.length(); i++) 
	{
         for (int j = 0; j < str2.length(); j++) {
		int k = 0;
		while ((i + k) < str1.length() && (j + k) < str2.length() 
				&& str1[i + k] == str2[j + k]) 
		{
			k = k + 1;
		}

		ans = max(ans, k);
	   }
	}
      return ans;
}

void hello_wrold_solve_here()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    ll lcs_sz = lcsubstr(a, b);
    ll x = n-lcs_sz, y= m-lcs_sz;
    cout<<x+y<<endl;
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