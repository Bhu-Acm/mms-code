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
int pre[10000];
int pre1[10000];
int jihefind(int x){
    if(pre[x]==x){
        return x;
    }
    pre[x]=jihefind(pre[x]);
    return pre[x];
}
int issame(int x,int y){
    if(jihefind(x)==jihefind(y)){
        return 1;
    }
    return 0;
}
int jihejoin(int x,int y){
    x=jihefind(x);y=jihefind(y);
    if(x>y)
    pre[x]=y;
    else
    pre[y]=x;
    return 1;
}
int jihefind1(int x){
    if(pre1[x]==x){
        return x;
    }
    pre1[x]=jihefind1(pre1[x]);
    return pre1[x];
}
int issame1(int x,int y){
    if(jihefind1(x)==jihefind1(y)){
        return 1;
    }
    return 0;
}
int jihejoin1(int x,int y){
    x=jihefind1(x);y=jihefind1(y);
    if(x>y)
    pre1[x]=y;
    else
    pre1[y]=x;
    return 1;
}
void solve() {   
  int n,m1,m2;cin>>n>>m1>>m2;
  for(int i=1;i<=n;i++){
    pre[i]=i;
    pre1[i]=i;
  }
  for(int i=1;i<=m1;i++){
    int a,b;cin>>a>>b;
    jihejoin(a,b);
  }
  for(int i=1;i<=m2;i++){
    int a,b;cin>>a>>b;
    jihejoin1(a,b);
  }
  //cout<<issame1(1,4);return ;
  vector<int >v;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==j||issame(i,j)==1||issame1(i,j)==1)continue;
        v.push_back(i);v.push_back(j);
        jihejoin1(i,j);jihejoin(i,j);
    }
  }
  cout<<v.size()/2 endl;
  for(int i=0;i<v.size();i+=2){
    cout<<v[i] endd<<v[i+1] endl;
  }
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