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
  int n,k;cin>>n>>k;
  ll x[n+10];ll dp[n+10];
  memset(dp,0,sizeof(dp));
  for(int i=1;i<=n;i++){
    cin>>x[i];dp[i]=0;
  }
  for(int i=1;i<n;i++){
    if(x[i]>=2*x[i+1]){
        dp[i]=1;
    }
  }int t=0;ll ans=0;//dp[n]=1;
  for(int i=1;i<n;i++){
    if(dp[i]==0)t++;
    else{
        if(t>=k){
            ans+=t-k+1;
        }
        t=0;
    }
  }if(t>=k){
            ans+=t-k+1;
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