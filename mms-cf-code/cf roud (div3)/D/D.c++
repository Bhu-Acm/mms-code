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
//少用memset进行初始化 可能会wa在一些奇奇怪怪的地方
//少用模板！
void solve() {   
  int n,m;cin>>n>>m;
  ll a[n+10]={0};
  ll sum[n+10],sum1[n+10];
  int q=n+1;
  // 
  for(int i=0;i<=n+10;i++){
    sum[i]=n+1;
    sum1[i]=0;
  }
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  for(int i=1;i<=m;i++){
    cin>>a[i];
  }
  itn f=1;
  for(int i=1;i<=n&&f<=m;i++){
    if(x[i]>=a[f]){
        sum[f]=i;f++;
    }
  }
  if(f>m){
    cout<<"0\n";return ;
  }
  itn f1=m;
  for(int i=n;i>=1&&f1>=1;i--){
    if(x[i]>=a[f1]){
        sum1[f1]=i;f1--;
    }
  }
  ll minn=99999999999999999;
  sum[0]=0;
  sum1[m+1]=n+1;
  for(int i=1;i<=m;i++){
    if(sum1[i+1]>sum[i-1]){
        minn=min(minn,a[i]);
    }
  }
  if(minn==99999999999999999){
    cout<<"-1\n";
  }else{
    cout<<minn endl;
  }
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