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
//子序列 可以不连续 预处理每个点右侧不同的点的个数
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  map<ll,ll>mp;ll sum[n+10]={0};
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  for(int i=n;i>=1;i--){
    if(mp[x[i]]==0){
        sum[i]=sum[i+1]+1;
        mp[x[i]]++;
    }else{
        sum[i]=sum[i+1];
    }
  }
  map<ll,ll>mp1;ll ans=0;
  for(int i=1;i<=n;i++){
    if(mp1[x[i]]==0){
        ans+=sum[i] ;
        mp1[x[i]]=1;
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