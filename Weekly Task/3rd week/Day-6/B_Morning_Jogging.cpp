
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
void print (vector<ll>&a) {loop(i,0,a.size())cout<<a[i]<<' ';}
template <typename T> using my_ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 +5;
void hello_wrold_solve_here()
{
    
    int n,m,x;
        cin>>n>>m;
        vector<int>v[n+4];
        vector<int>ans[n+3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                v[i].push_back(x);
            }
        }
        for(int i=0;i<n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for(int i=0;i<m;i++)
        {
            int mn=INT_MAX;
            int ind=-1;
            for(int j=0;j<n;j++)
            {
                if(v[j][0]<mn)
                {
                    mn=v[j][0];
                    ind=j;
                }
            }
            for(int j=0;j<n;j++)
            {
                if(j==ind)
                {
                    ans[j].push_back(v[j][0]);
                    v[j].erase(v[j].begin());
                }
                else
                {
                    ans[j].push_back(v[j][v[j].size()-1]);
                    v[j].pop_back();
                }
            }
        }
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
            nl;
        }
}
           

int32_t main()
{
    fast;
    int t=1;
        cin>>t;
    while(t--)hello_wrold_solve_here();
    return 0;
}