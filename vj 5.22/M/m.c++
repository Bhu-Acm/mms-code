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
    map<string,ll>mp;
    map<ll,string>mp1;
    mp["Monday"]=1;
    mp["Tuesday"]=2;
    mp["Wednesday"]=3;
    mp["Thursday"]=4;
    mp["Friday"]=5;
    mp1[1]="Monday";
    mp1[2]="Tuesday";
    mp1[3]="Wednesday";
    mp1[4]="Thursday";
    mp1[0]="Friday";
  ll y,m,r;string s;
  cin>>y>>m>>r>>s;
  ll y1,m1,r1;cin>>y1>>m1>>r1;
  ll t=y*360+m*30+r;
  ll t1=y1*360+m1*30+r1;
  ll sum=((t1-t)%5+5)%5;
  sum=(sum+mp[s])%5;
  cout<<mp1[sum] endl;
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