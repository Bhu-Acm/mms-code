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
  int n,d,k;cin>>n>>d>>k;
  ll sum[n+10]={0};
  memset(sum,0,sizeof(sum));
  for(int i=1;i<=k;i++){
    int a,b;cin>>a>>b;
    sum[a]++;sum[b+1]--;
  }
  for(int i=1;i<=n;i++){
    sum[i]+=sum[i-1];
  }ll maxx=INT_MIN,minn=INT_MAX;int a,b;
  for(int i=1;i<=n-d+1;i++){
    ll max1=0;
   // for(int j=i;j<=i+d-1;j++){
        if(sum[i]>maxx){
            maxx=sum[i];
            a=i;
        }
        if(sum[i]<minn){
            minn=sum[i];
            b=i;
        }
 //   }
    // if(max1<minn){
    //   //  minn=max1;b=i;
    // }
  }
  cout<<a endd<<b endl;
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