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
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};//上下左右，左上右上左下右上
int x[500][500];
int pos[500][500];int t[500][500]={0};
map<pair<int,int>,int >mp;int n;ll minn=INT_MAX;
void bfs(int i,int j){
    deque<pair<int ,int > >q;
    q.push_back({i,j});
    while(q.size()!=0){
        int a=q.front().first;int b=q.front().second;
        q.pop_front();
        int t1=t[a][b]+1;
        if(t[a][b]==x[a][b]){
            continue;
        }
        if(x[a][b]==-1){
            minn=t1-1;return ;
        }
        for(int k=0;k<4;k++){
            int a1=dx[k]+a;int b1=dy[k]+b;
            if(a1>=0&&b1>=0&&pos[a1][b1]==0&&t1<x[a1][b1]||a1>=0&&b1>=0&&pos[a1][b1]==0&&x[a1][b1]==-1){
                pos[a1][b1]=1;
                if(x[a1][b1]==-1){
                    minn=t1;return ;
                }
                t[a1][b1]=t1;
                q.push_back({a1,b1});
            }
        }
    }
    minn=-1;return ;
}
void solve() {   
  cin>>n;
  memset(x,-1,sizeof(x));
  memset(pos,0,sizeof(pos));
  memset(t,0,sizeof(t));
  for(int i=1;i<=n;i++){
    int a,b,c;cin>>a>>b>>c;
    if(x[a][b]==-1)x[a][b]=c;
    else
    x[a][b]=min(x[a][b],c);
        if(x[a+1][b]==-1)x[a+1][b]=c;
        else
        x[a+1][b]=min(x[a+1][b],c);
    if(a-1>=0){
        if(x[a-1][b]==-1)x[a-1][b]=c;
        else
        x[a-1][b]=min(x[a-1][b],c);
    }
        if(x[a][b+1]==-1)x[a][b+1]=c;
        else
        x[a][b+1]=min(x[a][b+1],c);
    if(b-1>=0){
        if(x[a][b-1]==-1)x[a][b-1]=c;
        else
        x[a][b-1]=min(x[a][b-1],c);
    }
  }
  pos[0][0]=1;
  bfs(0,0);
  cout<<minn endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}