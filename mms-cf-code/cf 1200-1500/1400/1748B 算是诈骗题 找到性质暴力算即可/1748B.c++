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
  ll sum=0;
    int flag=0;
    for(int i=0;i<s.size();i++){
        string s1;map<char,ll>mp;ll maxx=0;
        for(int j=i;j<min(i+101,n);j++){
            mp[s[j]]++;maxx=max(maxx,mp[s[j]]);
            if(maxx<=mp.size())sum++;
        }
    }
  cout<<sum endl;
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