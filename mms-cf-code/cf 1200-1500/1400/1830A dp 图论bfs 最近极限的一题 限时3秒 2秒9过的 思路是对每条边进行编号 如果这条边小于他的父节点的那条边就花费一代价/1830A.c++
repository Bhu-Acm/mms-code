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
    int w;
    int next;
}tu[500010];
int cnt=0;
int head[500010];
void add(int u,int v,int w){
    tu[++cnt].v=v;
    tu[cnt].w=w;
    tu[cnt].next=head[u];
    head[u]=cnt;
}
void solve() {   
  int n;cin>>n;
  map<ll,ll>mp;int sum=0;
  map<pair<ll,ll> ,ll>w;
  int pos[n+10]={0};int dp[n+10]={0};
  memset(dp,0,sizeof(dp));
  for(int i=1;i<n;i++){
    int u,v1;cin>>u>>v1;
    add(u,v1,1);add(v1,u,1);
    mp[u]++;mp[v1]++;
    w[{u,v1}]=i;
    w[{v1,u}]=i;
  }
  deque<int>q;
  q.push_back(1);int f=1;
  pos[1]=1;int maxx=0;dp[1]=0;map<int,int>flag;
  while(q.size()!=0){
    int a=q.front();
    q.pop_front();
    if(mp[a]==1&&a!=1||a==0)continue;
    for(int i=head[a];i;i=tu[i].next){
        int v1=tu[i].v;
        if(pos[v1]==0){
            flag[v1]=a;
            if(a!=1){
                if(w[{v1,a}]<w[{a,flag[a]}]){
                    dp[v1]=dp[a]+1;
                    maxx=max(maxx,dp[v1]);
                }else{
                    dp[v1]=dp[a];
                    maxx=max(maxx,dp[v1]);
                }
            }
            pos[v1]=1;
            q.push_back(v1);
        }
    }
  }
  cout<<maxx+1 endl;
 memset(tu,0,sizeof(tu));
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
     memset(head,-1,sizeof(head));
    while (T--) {
        solve();
    }
    return 0;
}