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
//好题 贪心维护
void solve() {   
  int n,m;cin>>n>>m;
  ll x[n+10]={0};ll ans=n;
  map<ll,ll>mp;
  for(int i=1;i<=m;i++){
    int a,b;cin>>a>>b;
    if(a<b){
        if(x[a]==0)ans--;
        x[a]++;
    }else{
        if(x[b]==0)ans--;
        x[b]++;
    }
  }
  int q;cin>>q;
  while(q--){
    int t;cin>>t;
    if(t==1){
        int a,b;cin>>a>>b;
        if(a<b){
            if(x[a]==0)ans--;
            x[a]++;
        }else{
            if(x[b]==0)ans--;
            x[b]++;
        }
    }else if(t==2){
        int a,b;cin>>a>>b;
        if(a<b){
            x[a]--;
            if(x[a]==0)ans++;
        }else{
            x[b]--;
            if(x[b]==0)ans++;
        }
    }else{
        cout<<ans endl;
    }

  }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}