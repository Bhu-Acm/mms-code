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
  int n;cin>>n;
  string s;cin>>s;
  int n1,m;cin>>n1>>m;
  for(int i=1;i<=m;i++){
    int a,b;cin>>a>>b;
  }
  int flag=0;
  while(m!=n1-1){
    m--;
    flag++;
    if(flag>=n)flag=0;

  }
  if(s[flag]=='1'){
    cout<<"2\n";
  }else{
    cout<<"1\n";
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