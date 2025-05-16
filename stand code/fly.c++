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
  int n;cin>>n;
  ll x[n+10];
  map<ll,ll>mp;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    mp[x[i]]++;
  }ll ans=0;
  for(auto it:mp){
    int i=it.fi;
    if(i>n)break;
    if(i>n||it.se==0)continue;
    ans+=min(mp[i],mp[i+1]);
    if(i>2&&i%2==0&&i!=4){
        ll t=i/2;
        if(mp[t]!=0&&mp[i]!=0){
            ans+=max(mp[t],mp[i]);
        }
    }
    if(i>=2&&i%2==0){
        if(mp[i]!=0&&mp[i+2]!=0)
        ans+=max(mp[i],mp[i+2]);
    }
  }
  cout<<ans endl;
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