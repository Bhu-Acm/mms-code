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
ll sumy = 0;//ll x[1000010]={0};
int Rank[1000010]={0};int pre[1000010]={0};
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb学长
inline ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
inline int jihefind(int root){if(pre[root]==root){return root;}pre[root]=jihefind(pre[root]);return pre[root];}
inline int jihejoin(int x,int y){ x=jihefind(x); y=jihefind(y);if(x==y){return 0;}if(Rank[x]>Rank[y]){pre[y]=x;}else{if(Rank[x]==Rank[y]){Rank[y]++;}pre[x]=y;}return 1;}
inline bool issame(itn x,int y){return jihefind(x)==jihefind(y);}
// priority_queue<int> q;//优先队列 大
//priority_queue<int,vector<int>,greater<int> > q;//优先队列 小
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};//上下左右，左上右上左下右上
//建图
struct Tu{
   ll v;//终点
   ll nxt;//下一条边
   ll w;//权值
}tu[1000000];
ll head[1000000];ll rd[1000000];ll chud[1000000];
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
}
void solve() {   
  itn n,q;
  cin>>n>>q;
  string s,s1;
  cin>>s>>s1;
  s=" "+s;s1=" "+s1;
  ll sum[27][n+10][2];
  for(int i=1;i<=n;i++){
    for(int j=0;j<26;j++){
        sum[j][i][0]=sum[j][i-1][0];
        sum[j][i][1]=sum[j][i-1][1];
    }
    sum[s[i]-'a'][i][0]++;
    sum[s1[i]-'a'][i][1]++;
  }
  while(q--){
    int a,b;
    cin>>a>>b;
    sumy=0;
    for(int i=0;i<26;i++){
        ll a1=sum[i][b][0]-sum[i][a-1][0];
        ll b1=sum[i][b][1]-sum[i][a-1][1];
        sumy+=abs(a1-b1);
    }
     cout<<sumy/2 endl;
  }
}
int main() {
    std::ios::sync_with_stdio(false);
    int T = 1;
    init();
    // scanf("%d", &T);
      cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}