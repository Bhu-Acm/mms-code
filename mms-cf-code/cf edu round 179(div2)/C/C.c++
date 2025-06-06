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
  int n;
  cin>>n;
  ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  ll minn=LLONG_MAX;
  int a=1,b=1;
  while(a<=b&&a<=n){
    while(x[b+1]==x[a]&&b+1<=n)b++;
    minn=min((a-1)*x[a]+(n-b)*x[a],minn);
    b++;a=b;
  }
  cout<<minn endl;
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