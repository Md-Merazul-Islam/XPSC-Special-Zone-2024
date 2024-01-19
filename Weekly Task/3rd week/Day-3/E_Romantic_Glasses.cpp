
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**            https://github.com/Md-Merazul-Islam            **
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
// #define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define vi vector<ll>
#define vpi vector<pair<ll, int>>
#define srt(a) sort(a.begin(), a.end())
#define rsrt(a) sort(a.rbegin(), a.rend())
#define revs(a) reverse(a.begin(), a.end())
#define all(a)  a.begin(), a.end()
#define line "\n"
#define nl cout << "\n"
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define rloop(i, a, b) for (int i = (a); i <= (b); ++i)
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void mdmerazulislam()
{ 
     int m;
        cin >> m;

        ll num1[200010] = {0};
        ll sum1 = 0;
        map<ll, ll> num2;
        num2[0] = 1;
        int yes = 0;

        for (int j = 0; j < m; j++) {
            cin >> num1[j];
        }

        for (int j = 0; j < m; j++) {
            num1[j] *= ((j % 2) ? -1 : 1);
            sum1 += num1[j];

            if (num2[sum1]) {
                cout << "YES" << endl;
                yes = 1;
                break;
            }

            num2[sum1] += 1;
        }

        if (yes == 0) {
            cout << "NO" << endl;
        }

}

int main()
{
    fast;
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}


