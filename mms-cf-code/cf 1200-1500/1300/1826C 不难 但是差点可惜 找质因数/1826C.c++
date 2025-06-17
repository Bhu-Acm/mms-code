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
inline ll gcd(ll a, ll b) { return b > 0 ? gcd(b, a % b) : a; }// from kdb
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
//对🐟每个来说 emmm 
//如果能找到n的某个质因数小于m 那么就能一直选择这个几个投票同时保证一直循环
void solve() {   
  int n,m;cin>>n>>m;
  if(n==1||m==1){
    cout<<"YES\n";return ;
  }
  if(n<=m){
    cout<<"NO\n";
  }else{
    int flag=0;
    for(int i=2;i*i<=n;i++){
      if(n%i==0&&m>=i){
        cout<<"NO\n";return ;
      }
    }
    cout<<"YES\n";return ;
  }
  // //if(m==1)
  // if(n%m==0){
  //   cout<<"NO\n";
  // }else{
  //   int n1=n;int m1=m;
  //   if(n<=m){
  //     cout<<"NO\n";return ;
  //   }
  //   while(1){
  //     ll t=n1%m;
  //     m=t;
  //      if(m==1){
  //       cout<<"YES\n";return ;
  //     }
  //     if(n1%m==0){
  //       cout<<"NO\n";return ;
  //     }
     
  //   }
  // }
  //cout<<32%7 endl;
  //cout<<gcd(32,13);
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