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
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//ll x[500010] = { 0 };
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  ll sum[n+10]={0};
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }sum[1]=x[1];
  ll s=0;ll maxx=0;
  for(int i=1;i<n;i++){
    if(x[i]>x[i+1]){
      s+=x[i]-x[i+1];
      maxx=max(x[i]-x[i+1],maxx);
      x[i+1]=x[i];
    }
  }
  cout<<s+maxx endl;
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