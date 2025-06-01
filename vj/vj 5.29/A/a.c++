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
  ll n,k;cin>>n>>k;
  ll x[n+10];
  map<ll,ll>mp;
  int _0=0,_1=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];mp[x[i]]++;
    if(x[i]%2==0){
      _0++;
    }else{
      _1++;
    }
  }
  k+=1;
  ll t=k+k*(k-1)/2;k-=1;
  sort(x+1,x+n+1);
  for(int i=1;i<=n;i++){
    t-=(x[i]/2+1);
    t-=(k-x[i]);
    if(x[i]%2==0){
      _0--;t+=_0;
    }else{
      _1--;t+=_1;
    }
    // if(mp[x[i]+2]!=0){
    //   t+=x[i]/2+1;
    //  // mp[x[i]+2]=0;
    // }
  }//t+=n;
  cout<<t endl;
  //cout endl;
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