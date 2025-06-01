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
//不是很难 一开始想偏了 贪心就行
struct S{
    ll id;
    ll v;
}x[1000000];
bool cmp(S a,S b){
    if(a.v==b.v){
        return a.id>b.id;
    }
    return a.v<b.v;
}
bool cmp1(S a,S b){
    return a.id<b.id;
}
void solve() {   
  ll n,m ,k;cin>>n>>m>>k;
  for(int i=1;i<=n;i++){
    cin>>x[i].v;x[i].id=i;
  }
  sort(x+1,x+n+1,cmp);
  vector<S>v;ll sum=0;
  sort(all(v),cmp1);
  for(int i=1;i<=n;i++){
    v.push_back(x[i]);
    sum+=m;
    if(sum>=k)break;
  }
  ll ans=0;ll t=0;
  for(int i=0;i<v.size()-1;i++){
    ans+=(v[i].v+t)*m;t+=m;
  }
  if(sum==k){
    ans+=(v[v.size()-1].v+t)*m;t+=m;
  }else{
    ans+=(v[v.size()-1].v+t)*(k-t);t+=m;
  }
  cout<<ans endl;
//   if(n==1){
//     cout<<x[1].v  endl;return ;
//   }ll sum=0;ll t=0;
//   if(t+m>=k){
//     t+=k;
//     sum=sum+x[1].v*k;
//     cout<<sum endl;return ;
//   }else{
//     t+=m;
//     sum=sum+x[1].v*m;
//   }
//   for(int i=2;i<=n;i++){
//     if(t+m>=k){
//         if(x[i].id>x[i-1].id){
//            // sum+=t*m;
//             sum+=(x[i].v+k-t)*(k-t);
//         }else{
//             sum+=x[i].v*(k-t);
//             sum+=(k-t)*m;
//         }
//         cout<<sum endl;return ;
//     }else{
//         if(x[i].id>x[i-1].id){
//             sum+=(x[i].v+t)*m;
//         }else{ t+=m;
//             sum+=t*m;
//             sum+=x[i].v*m;
//         }
       
//     }
//   }
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