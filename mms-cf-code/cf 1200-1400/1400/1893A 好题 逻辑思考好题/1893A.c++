//fly!
#include<bits/stdc++.h>
#define ll long  long
#define ull unsigned long long
#define fi first
#define all(x) x.begin(),x.end()
#define se second
#define be begin()
#define en end()
#define endl <<"\n"
#define double long double
#define endd <<" "
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
void solve() {   
  ll n,k;cin>>n>>k;
  ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  ll a=1;ll b=n;
  map<pair<ll,ll>,ll>mp;
  mp[{a,b}]++;
  for(int i=1;i<=min(k,n);i++){
    ll t=n-x[b];ll t2=x[b]-1;
    if(x[b]>n){
      cout<<"No\n";return ;
    }
    if(t<0)t=-t;if(t2<0)t2=-t2;
    a+=t;if(a>n)a%=n;
    b+=t;if(b>n)b%=n;
    ll t1;
    if(a+t2>n)t1=(a+t2)%n;
    else t1=a+t2;
    if(x[t1]!=t2+1){
      cout<<"No\n";return ;
    }
    // if(mp[{a,b}]!=0){
    //     cout<<"Yes\n";return ;
    // }
    mp[{a,b}]++;
  }
  cout<<"Yes\n";
}
int main() { 
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}