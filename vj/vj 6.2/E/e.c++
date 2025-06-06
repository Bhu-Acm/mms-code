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
//ll x[500010] = { 0 };
ll treesum[1000000]={0};
int lowbit(int x){return x&(-x);}
void treeadd(int x,int v,int n){
  for(int i=x;i<=n;i+=lowbit(i)){
    treesum[i]+=v;
  }
}
ll treehe(int b){
  ll ans=0;
  for(int i=b;i;i-=lowbit(i)){
    ans+=treesum[i];
  }
  return ans;
}ll x[1000000];
void solve() {   
  int n,m;cin>>n>>m;
  for(itn i=1;i<=n;i++){
    cin>>x[i];
    treeadd(i,x[i]-x[i-1],n);
  }
//    for(int i=1;i<=n;i+=lowbit(i)){
//     cout<<treesum[i] endd;
//   }return ;
  while(m--){
    int t;cin>>t;
    //int a,b;cin>>a>>b;
    if(t==1){
        int a,b,k;cin>>a>>b>>k;
        treeadd(a,k,n);
        treeadd(b+1,-k,n);
    }else{
        int a;cin>>a;
        cout<<treehe(a)  endl;
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