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
  ll maxx=-1;ll minn=INT_MAX;
  map<ll,ll>mp;ll sum=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    mp[x[i]]++;sum+=x[i];
    maxx=max(maxx,x[i]);
    minn=min(minn,x[i]);
  }
  ll t=maxx-minn;
  if(t>k+1){
    cout<<"Jerry\n";return ;
  }
  if(t==k+1&&mp[maxx]>=2){
    cout<<"Jerry\n";return ;
  }
  //
  if(sum%2==0){
    cout<<"Jerry\n";
  }else{
    cout<<"Tom\n";
  }
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