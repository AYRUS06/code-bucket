#include<bits/stdc++.h>
#define ll long long int
#define Faster  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ffor(i,a,n) for(int i=a;i<n;i++)
#define T int t; cin>>t; while(t--)
#define all(v) v.begin(), v.end()
#define setpre(f, n) fixed << setprecision(n) << f
#define MOD 1000000007
using namespace std;
map<ll,ll> m;
ll dollars(ll n)
{
    if (n<=11)
    return n;

    if (m[n]!=0)
    return m[n];

    ll s;
    s=max(n,dollars(n/2)+dollars(n/3)+dollars(n/4));
    m[n]=s;
    return s;
    
}
int main()
{

    ll n;
    while(scanf("%d",&n)!=EOF)
    {
        cout<<dollars(n)<<endl;
    }
    
    return 0;
}