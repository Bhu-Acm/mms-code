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
//分讨暴力
  ll n,k;cin>>n>>k;
  ll x[n+10];
  ll minn=LLONG_MAX;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  if(k>=3){
    cout<<0 endl;
  }else{
    sort(x+1,x+n+1);
    for(int i=1;i<=n;i++){
      minn=min(minn,x[i]);
        for(int j=1;j<=n;j++){
            if(i==j)continue;
            minn=min(minn,abs(x[i]-x[j]));
        }
    }
    if(k==1)
    cout<<minn endl;
    else{
        minn=LLONG_MAX;
        for(int i=1;i<=n;i++){
          minn=min(minn,x[i]);
          for(int j=1;j<=n;j++){
            if(i==j)continue;
            ll t=abs(x[i]-x[j]);
            minn=min(minn,t);
            int a=1,b=n;
            while(a<=b){
              int w=(a+b)>>1;
              minn=min(minn,abs(t-x[w]));
              if(x[w]>=t){
                b=w-1;
              }else{
                a=w+1;
              }
            }
            minn=min(minn,abs(t));
          }
        }
        cout<<minn endl;
    }
  }
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