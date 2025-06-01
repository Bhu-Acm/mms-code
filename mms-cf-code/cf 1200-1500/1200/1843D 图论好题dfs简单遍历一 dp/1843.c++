//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
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
//ll x[500010] = { 0 };
ll sumy = 0;ll x[1000010]={0};
int pre[200210]={0};
// priority_queue<int> q;//优先队列 大
//priority_queue<int,vector<int>,greater<int> > q;//优先队列 小
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};//上下左右，左上右上左下右上
//建图
struct Tu{
   ll v;//终点
   ll nxt;//下一条边
   ll w;//权值
}tu[400210];
ll head[200210];ll rd[200210];ll chud[200210];
void init()
{memset(head,-1,sizeof(head));}//初始化为-1；
ll cnt=0;
void add(ll u,ll v,ll w){//添加边 u 起点 v 终点 w 权值
  tu[++cnt].v=v;
  tu[cnt].w=w;
  tu[cnt].nxt=head[u];
  head[u]=cnt;
  rd[v]++;
  chud[u]++;
}int n;ll dp[200210]={0};
void dfs(int a){
    if(chud[a]==rd[a]&&a!=1&&rd[a]==1){
        dp[a]=1;return ;
    }
    for(int i=head[a];i;i=tu[i].nxt){
        if(pre[tu[i].v]!=0 ) continue;
        pre[a]=1;
        dfs(tu[i].v);
       // pre[i]=0;
        dp[a]+=dp[tu[i].v];
    }
    return ;
}
void solve() {   
  cin>>n;
  map<ll,ll>mp;
  for(itn i=1;i<n;i++){
    int a,b;cin>>a>>b;
    add(a,b,1);add(b,a,1);
    mp[a]++;mp[b]++;
  }int q;cin>>q;
  dfs(1);
  while(q--){
    int a,b;cin>>a>>b;
    cout<<dp[a]*dp[b] endl;
  }
  for(auto it:mp){
    rd[it.fi]=0;
    chud[it.fi]=0;
    tu[it.fi].v=0;
    tu[it.fi].nxt=0;
    head[it.fi]=0;
    dp[it.fi]=0;
    pre[it.fi]=0;
  }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    init();
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        cnt=0;
        solve();
    }
    return 0;
}