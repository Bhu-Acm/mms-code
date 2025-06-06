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
  ll a[n+10];
  a[1]=1;a[2]=2;
  for(int i=3;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
  }
  ll x[4];
  for(int i=1;i<=m;i++){
    cin>>x[1]>>x[2]>>x[3];
    sort(x+1,x+4);
    if(a[n]+a[n-1]<=x[3]&&a[n]<=x[1]&&a[n]<=x[2]){
        cout<<"1";
    }else{
        cout<<"0";
    }
  }
  cout endl;
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