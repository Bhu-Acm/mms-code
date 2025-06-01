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
ll sumy = 0;
struct S{
  ll h;
  ll p;
}a[10000010];
bool cmp(S a,S b){
  if(a.p==b.p){
    return a.h<b.h;
  }
  return a.p<b.p;
}
void solve() {   
  int n,k;cin>>n>>k;
  map<ll,ll>mp,mp1;
  for(itn i=1;i<=n;i++){
    cin>>a[i].h;
  }ll minn=INT_MAX;
  int f1=0;
  if(mp.size()==0) f1=1;
  for(int i=1;i<=n;i++){
    cin>>a[i].p;
  }
  sort(a+1,a+n+1,cmp);
  int pos=1;ll k1=k;
  //大佬的思路 通过不断累加攻击值来判断
  //也可以用set 去模拟做
    for(itn i=1;i<=n;i++){
      while(k1<a[i].h){
        k-=a[i].p;
        if(k<=0){
          cout<<"NO\n";return ;
        }
        k1+=k;
    }
    }
    
  //}
  cout<<"YES\n";
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