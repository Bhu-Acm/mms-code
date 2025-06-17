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
  vector<ll>v;ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];v.push_back(x[i]);
  }vector<ll>v1(v);
sort(all(v));
if(v==v1){
    cout<<0 endl;return ;
}   
  if(x[n-1]>x[n]||x[n-1]-x[n]>x[n-1]){
    cout<<-1 endl;return ;
  }
  
    cout<<n-2 endl;
    for(int i=1;i<=n-2;i++){
        cout<<i endd<<n-1 endd<<n endl;
    }
// if(n==3){
//     int flag=0;
//     for(int i=1;i<n;i++){
//         if(x[i]<=x[i+1]){
//             flag=1;break;
//         }
//     }
//     if(flag==0){
//         cout<<-1 endl;return ;
//     }
// }
//   ll a=n-1;ll b=n;
//   if(x[a]<x[b])swap(a,b);
//   cout<<n endl;
//   for(int i=1;i<=n-2;i++){
//     cout<<i endd<<b endd<<a endl;
//   }
//   cout<<n-1 endd<<1 endd<<2 endl;
//   cout<<n endd<<1 endd<<2 endl;
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