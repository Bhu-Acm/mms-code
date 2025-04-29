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
int Rank[1000010]={0};int pre[1000010]={0};
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
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
ll treesum[1000000]={0};
int lowbit(int x){return x&(-x);}
void treeadd(int x,int v,int n){
  for(int i=x;i<=n;i+=lowbit(i)){
    treesum[i]+=v;
  }
}
ll treehe(int a,int b){
  ll ans=0;
  for(int i=a-1;i;i-=lowbit(i)){
    ans-=treesum[i];
  }
  for(int i=b;i;i-=lowbit(i)){
    ans+=treesum[i];
  }
  return ans;
}
//大致的思路是分为两种情况 当x>=y以及 x<y的情况
//当x大于等于y 我们让x先到距离能被y整除的最大值
//然后按题目操作来 反复这个过程直到x小于y
//这个时候就会进入x加到y 然后变成一然后再加到y的循环
//按数学式子进行计算即可
//OS：并不怎么会数学公式【😓】
void solve() {   
  ll x,y,k;cin>>x>>y>>k;
  while(x>=y){
    ll t=(x/y+1)*y;
    if(k<t-x){
      cout<<x+k endl;return ;
    }else if(t-x==k){
      x=t;
      while(x%y==0){
        x/=y;
      }
      cout<<x endl;return ;
    }
    else{
      k-=(t-x);x=t;
      while(x%y==0){
        x/=y;
      }
    }
  }
  ll t=y-x;
  if(k<t){
    cout<<x+k endl;return ;
  }else if(k==t){
    cout<<1 endl;return ;
  }else{
    k-=t;x=1;
  }
  if(k<y-1){
    cout<<x+k endl;return ;
  }
  if((k)%(y-1)==0){
    cout<<1 endl;return ;
  }
  cout<<1+(k)%(y-1) endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    init();
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}