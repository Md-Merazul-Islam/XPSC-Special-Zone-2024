
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


ll binary_srch(vi &a, int k) {
    ll l = 0;
    ll r = a.size() - 1;
    ll ans = a.size() + 1;
    
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (a[mid] >= k) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans + 1;
}

int main() {
    fast;

    int n, q;
    cin >> n >> q;
    vi a(n), b(q);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); 
    ll mx= *max_element(a.begin(),a.end());

    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;
        if(mx>=k)
        cout << binary_srch(a, k) << endl;
        else
        cout<<n+1<<endl;
    }

    return 0;
}
