//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
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
ll x[500010] = { 0 };
 ll treesum[1000000]={0};
 ll treesum1[1000000]={0};ll n,m;
ll lowbit(ll x){return x&(-x);}
void treeadd1(ll a,ll v){
    for(int i=a;i<=n;i+=lowbit(i)){
        treesum[i]+=v;
        treesum1[i]+=v*a;
    }
}
void treeadd(ll a,ll b,ll v){
  treeadd1(a,v);treeadd1(b+1,-v);
}
ll treehe1(ll a){
    ll t=0;
    for(ll i=a;i>=1;i-=lowbit(i)){
        t+=(a+1)*treesum[i]-treesum1[i];
    }
    return t;
}
ll treehe(ll a,ll b){
  return treehe1(b)-treehe1(a-1);
}
void solve() {   
  cin>>n>>m;
  for(ll i=1;i<=n;i++){
    cin>>x[i];
    //treeadd(i,x[i]-x[i-1],n);
   treeadd(i,n,x[i]-x[i-1]);
  }
//   for(int i=1;i<=n;i++){
//     cout<<treesum[i] endd;
//   }cout endl;
  while(m--){
    ll t;cin>>t;
    //int a,b;cin>>a>>b;
    if(t==1){
        ll a,b,k;cin>>a>>b>>k;
        //for(int i=a;i<=b;i++)
        treeadd(a,b,k);//treeadd(b+1,-k,n);
         //for(int i=1;i<=n;i++){
   
    }else{
        ll a;int b;cin>>a>>b;
        ll ans=0;
       // ans=treehe(a,b);
       // for(int i=a;i<=b;i++)
       cout<<treehe(a,b) endl;
       // cout<<treehe(a,b)  endl;
    }
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