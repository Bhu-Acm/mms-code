//fly!
#include<iostream>
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
ll sumy = 1;ll x[1000010]={0};ll x1[1000010]={0};
void solve() {   
  int n;
  cin>>n;
  ll minn=99999999999999;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    //if(i>1)
    minn=min(minn,x[i]);
  }
  if(minn<=x[1]-1){
    cout<<"alice\n";
  }else{
    cout<<"bob\n";
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