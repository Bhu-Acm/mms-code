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
int n;
ll ans=0;
map<ll,ll>pos;
map<ll,vector<ll> >mp;
void dfs(ll i){
    ans=max(ans,i);pos[i]=1;
    for(auto it:mp[i-n]){
        if(pos[i+it-1]==0){
            dfs(i+it-1);
        }
    }

}
void solve() {   
  cin>>n;
  for(int i=1;i<=n;i++){
    ll a1;
    cin>>a1;
    if(i!=1){
        //好妙的做法 相当于剪枝？ 减少了复杂度from kdb magic
        mp[a1-n+i-1].push_back(i);
    }
  }
  dfs(n);
  cout<<ans endl;
  mp.clear();pos.clear();
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
       // flag=1;
       ans=0;
        solve();
    }
    return 0;
}