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


void solve(){
string s;cin>>s;
ll n = s.size();
arr(a,n);
fo(i,0,n){
    a[i]=s[i]-'0';
}
sort(a,a+n);
fo(i,0,n){
    if(a[i]==-5)
    continue;
    if(i==n-1)
    cout<<a[i];
    else
    cout<<a[i]<<'+';
}

}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}