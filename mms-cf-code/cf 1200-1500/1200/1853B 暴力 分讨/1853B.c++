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
//找到 当k大于30时的情况之后直接暴力
void solve() {   
  ll n,k;cin>>n>>k;
  if(k>=30){
    cout<<0 endl;return ;
  }else{
    ll cnt=0;
    for(int i=n;i>=0;i--){
        int flag=0;
        int n1=n;
        int t=i;int t1=n1-t;
        for(int j=1;j<=k-2;j++){
            t1=n1-t;
            if(t1>t){
                flag=1;break;
            }
            n1=t;t=t1;
        }
        if(flag==0)cnt++;
    }
    cout<<cnt endl;
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