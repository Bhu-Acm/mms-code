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
}tu[50100];
int cnt=0;int head[5100];
int rd[5100];
int chud[5100];
void add(int u,int v){
    tu[++cnt].v=v;
    tu[cnt].next=head[u];
    head[u]=cnt;
    rd[v]++;
    chud[u]++;
}
void solve() {   
    int n,m;cin>>n>>m;
    map<ll,ll>mp;
    for(int i=1;i<=m;i++){
        int a,b;cin>>a>>b;
        add(a,b);add(b,a);
        mp[a]++;mp[b]++;
    }
    int f;int sum=0;int s=0;
    for(int i=1;i<=n;i++){
        if(mp[i]==1){
            sum++;
        }
    }
    map<ll,ll>mp1;int flag=0;
    for(int i=1;i<=n;i++){
        if(rd[i]==chud[i]&&mp[i]!=1){
            mp1[chud[i]]++;flag=chud[i];
        }
    }
    if(mp1.size()==1){
        cout<<flag endd<<flag-1 endl;
    }else{
        vector<ll>v;
        for(auto it:mp1){
            v.push_back(it.fi);
        }
        if(mp1[v[0]]>mp1[v[1]]){
            cout<<v[1] endd<<v[0]-1 endl;
        }else{
            cout<<v[0] endd<<v[1]-1 endl;
        }
    }
   for(int i=0;i<=n*n;i++){
    rd[i]=0;chud[i]=0;tu[i].next=0;head[i]=-1;tu[i].v=0;
   }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
     cin >> T;
    while (T--) {
        cnt=0;
        solve();
    }
    return 0;
}