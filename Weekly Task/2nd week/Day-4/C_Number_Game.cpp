
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
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bool posssible(vi&a , int n, int k){
    multiset<int>s;
    for (auto c : a)
    {
        s.insert(c);
    }
    for (int i=1; i<=k; i++){
        if(s.empty()) return false;
        int rq = k-i+1;
        auto it = s.upper_bound(rq);
        if (it==s.begin())return false;
        it--;
        s.erase(it);
        if(!s.empty()){
            it = s.begin();
            ll v = (*it);
            v+=rq;
            s.erase(it);
            s.insert(v);
        }
    }return true;
}

void mdmerazulislam()
{
    int n;cin>>n;
    vi a(n);
    loop(i,0,n)cin>>a[i];
    ll l=0, r=n;
    ll k;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(posssible(a,n,mid)){
            k=mid;l=mid+1;
        }else r=mid-1;
    }cout<<k<<endl;

}

int main()
{
    fast;
    
        int t;
        cin >> t;
        while (t--)mdmerazulislam();
    
    return 0;
}