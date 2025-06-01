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
  int n,m;cin>>n>>m;
  int a[200]={0};
  int b[200]={0};
  memset(a,0,sizeof(a));
  memset(b,0,sizeof(b));
  int a1;cin>>a1;
  for(int i=0;i<a1;i++){
    int a2;cin>>a2;a[a2]=1;
  }
  int b1;cin>>b1;
  for(int i=0;i<b1;i++){
    int b2;cin>>b2;b[b2]=1;
  }
  for(int i=0;i<1000000;i++){
    int i1=i%n;int i2=i%m;
    if(a[i1]==1||b[i2]==1){
        a[i1]=1;b[i2]=1;
    }
  }
  for(int i=0;i<n;i++){
    if(a[i]==0){
        cout<<"No";return ;
    }
  }
  for(int i=0;i<m;i++){
    if(b[i]==0){
        cout<<"No";return ;
    }
  }
  cout<<"Yes\n";
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