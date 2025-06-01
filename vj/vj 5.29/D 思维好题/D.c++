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
//magic 找到垂直线和对角线的交点即是答案
void solve() {   
  int n;cin>>n;
  map<ll,ll>mp,mp1;
  for(int i=1;i<=n;i++){
    ll a,b;cin>>a>>b;
    mp[a]++;mp1[a+b]++;
  }
  for(auto it:mp){
    ll t=it.se;
    if(it.se%2!=0)
    for(auto it1:mp1){
        if(it1.se%2!=0){
            cout<<it.fi endd<<it1.first-it.first endl;return ;
        }
    }
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