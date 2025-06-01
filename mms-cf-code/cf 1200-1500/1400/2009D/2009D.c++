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
void solve() {   
  int n;cin>>n;
  map<int,int>mp,mp1;
  ll sum=0;
  ll sumy=0;
  int a[n+10][3]={0};
  memset(a,0,sizeof(a));
  for(int i=1;i<=n;i++){
    int x,y;cin>>x>>y;
    a[x][y]=1;
    mp[x]++;mp1[y]++;
  }vector<int>v;
  for(auto it:mp){
    if(it.se>=2){
        sum+=n-2;
    }
    v.push_back(it.fi);
  }
  for(int i=1;i<v.size()-1;i++){
    if(v[i]+1==v[i+1]&&v[i-1]+1==v[i]){
        if((a[v[i-1]][0]>0&&a[v[i+1]][0]>0&&a[v[i]][1]>0))
        sum++;
        if((a[v[i-1]][1]>0&&a[v[i+1]][1]>0&&a[v[i]][0]>0))
        sum++;
    }
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