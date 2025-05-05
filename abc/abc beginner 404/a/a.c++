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
  string s;cin>>s;
  char c='a';map<char,ll>mp;
  for(char c='a';c!='z';c++){
    mp[c]=1;
  }
  mp['z']=1;
  for(int i=0;i<s.size();i++){
    mp[s[i]]=0;
  }
  for(auto it:mp){
    if(it.se!=0){
        cout<<it.fi endl;return ;
    }
  }
}
int main() {
    std::ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}