#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define MAX 2147483648
#define MIN -2147483647
#define mod 1000000007
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a,b,c) max(c, max(a,b))
#define max4(a,b,c,d) max(d, max(c, max(a,b)))
#define fo(i,s,n) for(ll i=s;i<n;i++)
#define rfo(i, n) for(ll i=n;i>=0;i--)
#define arr(a,n) long long int *a = new long long int[n]
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i<=sqrt(x);i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
ll ca,ra;cin>>ca>>ra;
ll cb,rb;cin>>cb>>rb;
ll co,ro;cin>>co>>ro;
ll ans=abs(ra-rb) + abs(ca-cb);
if(ra==ro && ro==rb && max(ca,cb)>co && min(ca,cb)<co)
ans+=2;
else if(ca==co && co==cb && max(ra,rb)>ro && min(ra,rb)<ro) 
ans+=2;

cout<<ans<<endl;



}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}