//fly!
#include<bits/stdc++.h>
using namespace std;
int sumy = 0;int x[10000]={0};
struct Tu{
   int v;//终点
   int nxt;//下一条边
   int w;//权值
}tu[20000];
int head[10000];
void init()
{memset(head,-1,sizeof(head));}//初始化为-1；
int cnt=0;
void add(int u,int v,int w){//添加边 u 起点 v 终点 w 权值
  tu[++cnt].v=v;
  tu[cnt].w=w;
  tu[cnt].nxt=head[u];
  head[u]=cnt;
  
}
int dp[10000][2]={0};
void dfs(int i){
  dp[i][1]=x[i];
  dp[i][0]=0;
  for(int j=head[i];j!=-1;j=tu[j].nxt){
    dfs(tu[j].v);
   // pos[tu[j].v]=0;
    dp[i][0]+=max(dp[tu[j].v][0],dp[tu[j].v][1]);
    dp[i][1]+=dp[tu[j].v][0];
  }
}
void solve() {   
  int n;
  while(cin>>n){
    init();
    memset(tu,0,sizeof(tu));
    memset(dp,0,sizeof(dp));
    memset(x,0,sizeof(x));
    int f=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  int a=1,b=1;
  int flag=0;
 // map<int,int>mp;
  int t=n;
  int pos[n+10]={0};
  while(1){
    cin>>a>>b;
    if(a==0&&b==0)break;
    pos[a]=1;
   // add(a,b,1);
    add(b,a,1);
  }
  for(int i=1;i<=n;i++){
    if(pos[i]==0){
      flag=i;break;
    }
  }
  dfs(flag);
  cout<<max(dp[flag][0],dp[flag][1]) <<"\n";
}
return ;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    init();
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {

        solve();
    }
    return 0;
}