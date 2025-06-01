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
struct Tu{
    int v;
    int next;
    int w;
}tu[1000010];
int cnt=0;
int head[1000010];
int dp[1000010];string s;
int a[1000010];
int b[1000000];
void add(int u,int v,int w){
    tu[++cnt].v=v;
    tu[cnt].w=w;
    tu[cnt].next=head[u];
    head[u]=cnt;
}
void dfs(int i){
    if(i==0)return ;
    if(s[i]=='L'){
        dp[a[i]]=dp[i];
    }else{
        dp[a[i]]=dp[i]+1;
    }
    if(s[i]=='R'){
        dp[b[i]]=dp[i];
    }else{
        dp[b[i]]=dp[i]+1;
    }
    dfs(a[i]);dfs(b[i]);
}
void solve() {   
  int n;cin>>n;
  cin>>s;
  s=" "+s;
  map<ll,ll>mp;
  for(int i=1;i<=n;i++){
    cin>>a[i]>>b[i];
    dp[i]=0;
    if(a[i]==b[i]&&a[i]==0){
        mp[i]++;
    }
   // add(i,b[i],1);add(i,a[i],1);
  }
  dfs(1);int minn=INT_MAX;
  for(int i=1;i<=n;i++){
    if(mp[i]!=0)
    minn=min(minn,dp[i]);
  }
  cout<<minn endl;
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