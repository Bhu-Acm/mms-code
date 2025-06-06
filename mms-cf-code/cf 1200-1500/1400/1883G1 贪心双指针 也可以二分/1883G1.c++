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
//看的题解 有点没懂
void solve() {   
  int n,m;cin>>n>>m;
  ll a[n+10],b[n+10];
  for(int i=2;i<=n;i++){
    cin>>a[i];
  }
  a[1]=m;
  for(int i=1;i<=n;i++){
    cin>>b[i];
  }
  sort(a+1,a+n+1);sort(b+1,b+n+1);
  int l=1;int r=1;int f=0;
  while(l<=n){
   // while(a[l]<b[l]&&l<=n)l++;
    while(a[l]>=b[r]&&r<=n)r++;
    if(r<=n){f++;r++;}
    l++;
  }
 // cout<<l endd<<r endl;
 cout<<n-f endl;
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