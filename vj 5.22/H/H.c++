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
  ll n,k;cin>>n>>k;
  string s;cin>>s;
  ll maxx=0;ll maxy=0;
  ll x=0,y=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='U')x++;
    else if(s[i]=='D')x--;
    else if(s[i]=='L')y--;
    else y++;
    if(abs(x)+abs(y)>=abs(maxx)+abs(maxy)){
        maxx=x;maxy=y;
    }
  }
  x*=(k-1);y*=(k-1);
  for(int i=0;i<s.size();i++){
    if(s[i]=='U')x++;
    else if(s[i]=='D')x--;
    else if(s[i]=='L')y--;
    else y++;
    if(abs(x)+abs(y)>=abs(maxx)+abs(maxy)){
        maxx=x;maxy=y;
    }
  }
  cout<<abs(maxx)+abs(maxy) endl;
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