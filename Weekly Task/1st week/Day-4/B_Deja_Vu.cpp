#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
 
    while (t--) {
        ll n, q;
        cin >> n >> q;
 
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<ll> vis(31, 0);
 
        for (int i = 0; i < q; i++) {
            ll x;
            cin >> x;
            if (!vis[x]) {
                vis[x] = 1;
                ll p = pow(2, x);
                for (int j = 0; j < n; j++) {
                    if (a[j] % p == 0) {
                        a[j] += p / 2;
                    }
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}