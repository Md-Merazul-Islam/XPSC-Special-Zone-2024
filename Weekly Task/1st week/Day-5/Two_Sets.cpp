
/**************************************************************
**               BISMILLAH HIR RAHMAN NIR RAHIM              **
**                  Author: Md Merazul Islam                 **
**                         CST, MPI                          **
**                  Sreepur, Gazipur, Dhaka                  **
**************************************************************/
#include <bits/stdc++.h>
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
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}

int main() {
    fast;

    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    
    if (total % 2 != 0) {
        no;
    } else {
        yes;
        vi a, b;
        ll half = total / 2;
        ll cur = 0;
        
        for (int i = n; i > 0; i--) {
            if (cur + i <= half) {
                a.push_back(i);
                cur += i;
            } else {
                b.push_back(i);
            }
        }
        
        cout << a.size() << endl;
        for (int val : a) {
            cout << val << ' ';
        }
        cout << endl;

        cout << b.size() << endl;
        for (int val : b) {
            cout << val << ' ';
        }
        cout << endl;
    }

    return 0;
}