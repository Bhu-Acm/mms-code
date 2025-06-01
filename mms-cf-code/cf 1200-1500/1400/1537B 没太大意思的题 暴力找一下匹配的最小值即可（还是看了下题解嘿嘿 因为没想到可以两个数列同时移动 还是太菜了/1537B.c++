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
    int v;
    int id;
}a[1000010],b[1000010];
bool cmp(S a, S b){
    return a.v<b.v;
}
void solve() {   
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i].v;a[i].id=i;
  }
  for(int i=1;i<=n;i++){
    cin>>b[i].v;b[i].id=i;
  }
  if(a[1].v<b[1].v){
    cout<< 0 endl;
  }else{
   sort(a+1,a+n+1,cmp);
   sort(b+1,b+n+1,cmp);
   int minn=INT_MAX;
   int m=INT_MAX;
   for(int i=1;i<=n;i++){
    m=min(m,a[i].id-1);
    minn=min(minn,m+b[i].id-1);
   }
   cout<<minn endl;
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