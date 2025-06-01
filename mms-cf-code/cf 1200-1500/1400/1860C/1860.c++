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
//如果用dp的话需要优化 用树状数组？
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  ll sum[n+10];
  int cnt=0;ll minn1=INT_MAX;ll minn2=INT_MAX;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  for(int i=1;i<=n;i++){
    if(minn1<x[i]&&x[i]<minn2){
        minn2=x[i];
        cnt++;
    }
    minn1=min(minn1,x[i]);
  }
  cout<<cnt endl;
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