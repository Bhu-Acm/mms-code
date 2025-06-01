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
ll sumy = 0;ll x[1000010]={0};
ll treesum[1000000]={0};
int lowbit(int x){return x&(-x);}
void treeadd(int x,int v,int n){
  for(int i=x;i<=n;i+=lowbit(i)){
    treesum[i]+=v;
  }
}
ll treehe(int a){
  ll ans=0;
  for(int i=a;i;i-=lowbit(i)){
    ans+=treesum[i];
  }
  return ans;
}
void solve() {   
  int n,q;cin>>n>>q;
  ll s[n+10];
  ll sum1[n+10]={0}; ll sum2[n+10]={0};
  ll sum3[n+10]={0};
  for(int i=1;i<=n;i++){
    cin>>s[i];
    ll t1=s[i];
    while(t1!=0){
      sum1[i]+=t1%10;
      t1/=10;
    }
    ll t=sum1[i];
    while(t!=0){
      sum2[i]+=t%10;
      t/=10;
    }
    ll t3=sum2[i];
    while(t3!=0){
      sum3[i]+=t3%10;
      t3/=10;
    }
  }
  while(q--){
    int t;cin>>t;
    if(t==1){
      int a,b;cin>>a>>b;
      treeadd(a,1,n);
      treeadd(b+1,-1,n);
    }else{
      int a;cin>>a;
      ll b=treehe(a);
      if(b<=0){
        cout<<s[a] endl;
      }else if(b==1){
        cout<<sum1[a] endl;
      }else if(b==2){
        cout<<sum2[a] endl;
      }else{
        cout<<sum3[a] endl;
      }
    }
  }
  for(int i=0;i<=n+10;i++){
    treesum[i]=0;
  }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
   // init();
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
     // treesum[1000000]={0};
    // memset(treesum,0,sizeof(treesum));
        solve();
    }
    return 0;
}