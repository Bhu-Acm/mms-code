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
//https://codeforces.com/problemset/problem/1974/C
void solve() {   
  int n;cin>>n;
  ll x[n+10];
 // map<ll,ll>mp1,mp2,mp3;
 map<pair<ll,ll>,ll>mp1,mp2,mp3;
  map<pair<ll,pair<ll,ll>>,ll >mp;
  ll cnt1=0,cnt2=0,cnt3=0;
  ll cnt=0;ll ans=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  for(int i=1;i<=n-2;i++){
    int a=x[i];int b=x[i+1];int c=x[i+2];
    ans+=mp1[{a,b}];
    ans+=mp2[{a,c}];
    ans+=mp3[{b,c}];
  //  if(mp1[a]!=0&&mp2[b]!=0){
        //ans+=min(mp1[a],mp2[b]);
 //   }
 //   if(mp1[a]!=0&&mp3[c]!=0){
       // ans+=min(mp1[a],mp3[c]);
 //   }
 //   if(mp2[b]!=0&&mp3[c]!=0){
       // ans+=min(mp2[b],mp3[c]);
 //   }
    ans-=3*mp[{a,{b,c}}];
 //   mp1[a]++;mp2[b]++;mp3[c]++;
 mp1[{a,b}]++;mp2[{a,c}]++;mp3[{b,c}]++;
    mp[{a,{b,c}}]++;
    cnt++;
  }
  cout<<ans endl;
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