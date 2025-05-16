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
struct S{
    int v;
    int u;
    int next;
}tu[5000];
int cnt=0;
int head[5000];
void add(int u,int v){
    tu[++cnt].v=v;
    tu[cnt].next=head[u];
    head[u]=cnt;
}
ll t[5000];
ll dp[5000];
int pos[5000];
int dfs(int a){
    int w=t[a];
    for(int i=head[a];i;i=tu[i].next){
        //if(i==-1)return w;
        int v=tu[i].v;
        if(pos[v]==0){
             pos[v]=1;
            w+=dfs(v);
         //  pos[v]=0;
        }
    }
    dp[a]=w;
    return w;
}
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  for(int i=2;i<=n;i++){
    cin>>x[i];
    if(x[i]==i)continue;
    add(x[i],i);//add(i,x[i]);
  }

  string s;cin>>s; 
   if(n==2){
    if(s=="WB"||s=="BW"){
        cout<<1 endl;return ;
    }else{
        cout<<0 endl;return ;
    }
  }
  for(int i=0;i<s.size();i++){
    if(s[i]=='W'){
        t[i+1]=1;
    }else{
        t[i+1]=-1;
    }
  }dfs(1);
  int cnt1=0;
  for(int i=1;i<=n;i++){
    if(dp[i]==0){
        cnt1++;
    }
}
  cout<<cnt1 endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        memset(head,-1,sizeof(head));
        memset(dp,-1,sizeof(dp));
        memset(tu,0,sizeof(tu));
        memset(pos,0,sizeof(pos));
        cnt=0;
        solve();
    }
    return 0;
}