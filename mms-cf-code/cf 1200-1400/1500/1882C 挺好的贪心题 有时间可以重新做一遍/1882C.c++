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
//贪心 第三位之后的整数都能取到 然后分讨第一和第二两个数的情况
void solve() {   
  int n;cin>>n;
  ll x[n+10];
  //priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
  priority_queue<pair<ll,ll>>q;ll ans=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    if(i>=3&&x[i]>0)ans+=x[i];
  }
  if(n==1){
    cout<<max((ll)0,x[1]) endl;return ;
  }
  if(x[1]>0&&x[2]>0){
    ans+=x[1]+x[2];
  }else if(x[1]>0){
    ans+=x[1];
  }else if(x[1]+x[2]>0){
    ans+=x[1]+x[2];
  }
//   int flag=0;
//   for(int i=1;i<=n;i++){
//     int i1=i-flag;
//     int flag1=flag;
//     if(x[i]>0&&i1%2!=0){
//         ans+=x[i];flag++;
//     }else if(x[i]>0&&i1%2==0&&q.size()!=0){
//         ll t=q.top().first;
//         if(t+x[i]>0){
//             if(q.top().se%2==0)
//             ans=ans+x[i];
//             else
//             ans=ans-abs(t)+x[i];
//             q.pop();
//         }else{
//             q.push({x[i],i1});
//         }
//     }else{
//             q.push({x[i],i1});
//     }
// //i+=flag1;
//   }
  cout<<ans endl;
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