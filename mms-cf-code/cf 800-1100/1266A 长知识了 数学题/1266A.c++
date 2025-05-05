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
  ll sum=0;
  map<char,int>mp;int f=0;
  for(auto it:s){
    sum+=it-'0';
    mp[it]++;
    if((it-'0')%2==0)f++;
  }f--;
  if(sum%3==0&&mp['0']>=1&&f>=1){
    cout<<"red\n";
  }else{
    cout<<"cyan\n";
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