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
  ll n,x,y;cin>>n>>x>>y;
  string s,s1;cin>>s>>s1;
  if(s==s1){
    cout<<0 endl;return ;
  }
  map<char,ll>mp,mp1;
  vector<ll>v;
  for(int i=0;i<s.size();i++){
    if(s[i]!=s1[i]){
        v.push_back(i+1);
    }
    mp[s[i]]++;
    mp1[s1[i]]++;
  }
  if(mp['1']%2!=mp1['1']%2){
    cout<<-1 endl;return ;
  }
  ll sum=0;
  //考虑通过第二种操作将相邻改变的同时改变另外两个数
  if(v.size()==2){
    if(v[0]+1==v[1]){
        cout<<min(x,2*y) endl;;
    }else{
        cout<<y endl;
    }
    return ;
  }
  //错误思路
//   for(int i=0;i<v.size()-1;i+=2){
//     if(v[i]+1==v[i+1]){
//         sum+=min(x,2*y);
//     }else{
//         sum+=min(y,(v[i+1]-v[i])*x);
//     }
//   }
   sum=v.size()*y/2 ;//正确思路 通过排除了只有两个不同的位置 两个以上
   //总能通过 不同位置除以2次y操作 进行修正
  cout <<sum endl;
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