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
//贪心 正着走一遍 反着走一遍就好了 别看标签写题
void solve() {   
  int n,m;cin>>n>>m;
  ll minn=INT_MAX;
  if(n>=m){
    cout<<n-m endl;
  }else{
    int t=n;int f=0;
    while(t<m){
        t*=2;f++;
    }
    minn=min(minn,(ll)f+t-m);
    t=m;f=0;
    while(t>n){
        if(t%2!=0){
            t++;f++;continue;
        }
        t/=2;f++;
    }
    minn=min(minn,(ll)f+n-t);
    cout<<minn endl;
  }
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