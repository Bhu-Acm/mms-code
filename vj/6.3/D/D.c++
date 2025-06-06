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
struct S{
    int id;
    ll t;
    ll v;
}a[300010];
bool cmp(S a,S b){
    if(a.t==b.t){
        if(a.v==b.v){
            return a.id<b.id;
        }
        return a.v<b.v;
    }
    return a.t>b.t;
}
void solve() {   
  int n,m,h;cin>>n>>m>>h;
  ll x[n+10][m+10]={0};
  for(int i=1;i<=n;i++){
    vector<ll>v;
    for(int j=1;j<=m;j++){
        cin>>x[i][j];
        v.push_back(x[i][j]);
    }
    sort(all(v));
    for(int j=1;j<=m;j++){
        x[i][j]=v[j-1];
    }
  }
//     for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         cout<<x[i][j] endd;
//     }
//     cout endl;
//   }
  for(int i=1;i<=n;i++){
    ll sum=0;ll t=0;ll sum1=0;
    for(int j=1;j<=m;j++){
        if(sum1+x[i][j]<=h){
            sum1+=x[i][j];
            sum+=sum1;t++;
        }else{
            break;
        }
    }
    a[i].id=i;a[i].t=t;a[i].v=sum;
  }
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;i++){
    if(a[i].id==1){
        cout<<i endl;
    }
    a[i].id=0;a[i].t=0;a[i].v=0;
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