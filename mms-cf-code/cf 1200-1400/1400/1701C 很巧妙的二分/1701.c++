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
  ll n,m;cin>>n>>m;
  ll x[m+10];
  map<ll,ll>mp;
  for(int i=1;i<=m;i++){
    cin>>x[i];
    mp[x[i]]++;
  }
  ll a=1,b=2*m;ll ans;
  while(a<=b){
    ll w=(a+b)>>1;
    ll sum=0;
    for(int i=1;i<=n;i++){
        if(w<=mp[i]){
            sum+=w;
        }else{
            sum+=mp[i]+(w-mp[i])/2;
        }
    }
    if(sum>=m){
        b=w-1;ans=w;
    }else{
        a=w+1;
    }
  }
  cout<<a endl;
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