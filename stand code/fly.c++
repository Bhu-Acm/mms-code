//fly!
#include<bits/stdc++.h>
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
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};//上下左右，左上右上左下右上
int n,m,k;
char x[200][200];
int pos[200][200];
int t[200][200];
int t1[200][200];int minn=INT_MAX;
void bfs(int a,int b){
  deque<pair<int,int> >q;
  q.push_back({a,b});
  pos[a][b]=1;t[a][b]=0;
  while(q.size()!=0){
    a=q.front().fi;b=q.front().se;
    q.pop_front();
    for(int k=0;k<4;k++){
      int a1=a+dx[k];int b1=b+dy[k];
      if(a1>=1&&a1<=n&&b1>=1&&b1<=m&&pos[a1][b1]==0&&x[a1][b1]!='#'){
        pos[a1][b1]=1;
        q.push_back({a1,b1});
        t[a1][b1]=t[a][b]+1;
      }
    }
  }
}
void solve() {   
  cin>>n>>m;
  int a,b;
 // memset(t,0,sizeof(t));
  memset(pos,0,sizeof(pos));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>>x[i][j];
      if(x[i][j]=='H'){
        a=i;b=j;
      }
    }
  }
  int k;cin>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      t[i][j]=INT_MAX;
    }
  }bfs(a,b);
  for(int i=1;i<=k;i++){
    int a3,b3;cin>>a3>>b3;
    //t1[a3][b3]=i-1;
    if(t[a3][b3]<=i-1&&x[a3][b3]!='#'){
     // int t=max(t[a3][b3],i-1);
      minn=min(minn,i-1);
    }
  }
  if(minn==INT_MAX){
    cout<<"NO\n";
  }else{
    cout<<"YES "<<minn endl;
  }
}
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
      minn=INT_MAX;
        solve();
    }
    return 0;
}