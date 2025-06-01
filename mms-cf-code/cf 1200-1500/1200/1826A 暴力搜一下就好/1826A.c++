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
  }int ans=0;
    if(mp[0]==n){
    cout<<0 endl;return ;
  }
  for(int i=1;i<=n;i++){
    ll t=i;int cnt=0;
    for(int j=1;j<=n;j++){
        if(i<x[j])cnt++;
    }
    if(cnt==t){
        cout<<t endl;return ;
    }
  }
  cout<<-1 endl;

//   for(auto it:mp){
//     ll t=it.fi;int cnt=0;
//     for(int i=1;i<=n;i++){
//         if(x[i]>t)cnt++;
//     }
//     if(cnt>=t)
//     ans=cnt;
//   }
//   if(ans==n){
//     cout<<-1 endl;
//   }else{
//     cout<<ans endl;
//   }
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