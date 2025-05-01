//fly!
#include<bits/stdc++.h>
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
//分类讨论做这题？
//还是不懂
void solve() {   
  ll n,b,c;cin>>n>>b>>c;
  if(b==0){
    if(c>=n){
        cout<<n endl;return ;
    }else if(c==n-1||c==n-2){
        cout<<n-1 endl;
    }else{
        cout<<-1 endl;
    }
  }else{
    if(c>=n){
        cout<<n endl;return ;
    }else{
        cout<<n-max((ll)0,1+(n-c-1)/b) endl;
    }
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