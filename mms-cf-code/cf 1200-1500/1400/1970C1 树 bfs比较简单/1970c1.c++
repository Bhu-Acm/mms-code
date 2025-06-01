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
ll head[1000010];
void add(int u,int v,int w){
    tu[++cnt].v=v;
    tu[cnt].w=w;
    tu[cnt].next=head[u];
    head[u]=cnt;
}
void solve() {   
  int n,t;cin>>n>>t;
  map<ll,ll>mp;
  int ans[n+10]={0};
  for(int i=1;i<n;i++){
    int a,b;cin>>a>>b;
    add(a,b,1);add(b,a,1);
    mp[a]++;mp[b]++;
  }
  vector<int>v;
  int f;cin>>f;
  deque<int >q;
  q.push_back(f);
  ans[f]=0;int pos[n+10]={0};
  pos[f]=1;
  while(q.size()!=0){
    int a=q.front();
    q.pop_front();
    if(mp[a]==1){
      v.push_back(ans[a]);
    }
    for(int i=head[a];i;i=tu[i].next){
      int v1=tu[i].v;
      if(pos[v1]==0){
        pos[v1]=1;
        q.push_back(v1);
        ans[v1]=ans[a]+1;
      }
    }
  }
  for(int i=0;i<v.size();i++){
    if(v[i]%2!=0){
      cout<<"Ron\n";return ;
    }
  }
  cout<<"Hermione\n";
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
     memset(head,-1,sizeof(head));
    while (T--) {
        solve();
    }
    return 0;
}