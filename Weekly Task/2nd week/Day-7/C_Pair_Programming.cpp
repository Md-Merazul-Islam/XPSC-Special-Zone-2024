
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

void mdmerazulislam()
{
    int k,n,m;cin>>k>>n>>m;
    deque<ll> a(n),b(m);
   for (int i=0; i<n; i++)cin>>a[i];
   for (int i=0; i<m; i++)cin>>b[i];

   vi ans;
   for(int i=0; i<n+m ;i++){
    if(!a.empty() && a[0]<=k){
        ans.push_back(a[0]);
        if(a[0]==0)k++;
        a.pop_front();
    }
    else if (!b.empty() && b[0]<=k){
        ans.push_back(b[0]);
        if(b[0]==0)k++;
        b.pop_front();
    }
    else {
        cout<<-1<<endl;break;
    }
   }
   if(ans.size()==n+m){
    for(auto val :ans)cout<<val<<' ';
    nl;
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