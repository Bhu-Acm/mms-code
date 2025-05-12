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
  ll cnt=0;
  ll a=INT_MAX;
  ll b=a;
  for(int i=1;i<=n;i++){//这样好理解一些
    cin>>x[i];
    if(x[i]<=a&&x[i]<=b){
        if(a<b){
            a=x[i];
        }else{
            b=x[i];
        }
    }else if(x[i]<=a){
        a=x[i];
    }else if(x[i]<=b){
        b=x[i];
    }else{
        cnt++;
        if(a<b){
            a=x[i];
        }else{
            b=x[i];
        }
    }
  }
//   for(int i=1;i<=n;i++){
//     cin>>x[i];
//     if(x[i]<=a){
//         a=x[i];
//     }else if(x[i]<=b){
//         b=x[i];
//     }else{
//         cnt++;
//         a=x[i];
//         swap(a,b);///????/不是很懂
//     }
//   }
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