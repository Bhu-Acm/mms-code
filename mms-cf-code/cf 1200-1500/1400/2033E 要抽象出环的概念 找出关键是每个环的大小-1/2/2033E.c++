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
int pre[1000010];
int ans[1000010]={0};
int jihefind(int x){
    if(pre[x]==x){
        return x;
}
pre[x]=jihefind(pre[x]);
return pre[x];
}
int jihejoin(int x,int y){
    x=jihefind(x);y=jihefind(y);
    if(x>y){
        pre[x]=y;
        ans[y]+=ans[x];
    }else{
        pre[y]=x;
        ans[x]+=ans[y];
    }
    return 1;
}
int issm(int x,int y){
    if(jihefind(x)==jihefind(y)){
        return 1;
    }
    return 0;
}
int x[1000010];
void solve() {  
     int n;cin>>n;
    for(int i=1;i<=n;i++){
        pre[i]=i;ans[i]=1;
    }
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(issm(i,x[i])==0){
        jihejoin(i,x[i]);
    }
  }
  ll sum=0;
  map<int ,int>mp;
  for(int i=1;i<=n;i++){
    mp[jihefind(i)]++;
  }
  for(auto it:mp){
    sum+=((ans[it.fi]-1)/2);
  }
  cout<<sum endl;
  
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