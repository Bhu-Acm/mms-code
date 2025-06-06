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
  ll x[n+10];map<ll,ll>mp,mp1;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    mp[x[i]]++;
  }
  ll sum=0;
  for(auto it:mp){
    if(it.fi>1&&sum<it.fi){
        cout<<"NO\n";return ;
    }
    sum+=it.fi*it.se;
  }
  cout<<"YES\n";
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