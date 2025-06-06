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
  ll x[n+10];
  ll sum[n+10]={0};
  for(int i=1;i<=n;i++){
    cin>>x[i];
    sum[i]=sum[i-1]+x[i];
  }
  int q;cin>>q;
  while(q--){
    ll l,u;cin>>l>>u;
    if(n==1){
      cout<<1 endl;continue;
    }
    ll maxx=INT_MIN;ll flag=0;
    ll t=lower_bound(sum+l,sum+n+1,u+sum[l-1])-sum;
    ll t1=sum[t]-sum[l-1];
    ll a=t1*u-(t1-1)*t1/2;
    t1=sum[t+1]-sum[l-1];
    ll b=t1*u-(t1-1)*t1/2;
    t1=sum[t-1]-sum[l-1];
    ll c=t1*u-(t1-1)*t1/2;
    if(t+1<=n){
      if(b>=maxx){
        maxx=b;flag=t+1;
      }
    }
    if(t>=l&&t<=n){
      if(a>=maxx){
        maxx=a;flag=t;
      }
    }
    if(t-1>=l){
      if(c>=maxx){
        maxx=c;flag=t-1;
      }
    }
    // if(max(max(b,c),a)==c&&t-1>=l){
    //   cout<<t-1 endd;
    // }else if(max(max(b,c),a)==a&&t>=l&&t<=n){
    //   cout<<t endd;
    // }else if(t+1<=n){
    //   cout<<t+1 endd;
    // }
    cout<<flag endd;
  }cout endl;
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