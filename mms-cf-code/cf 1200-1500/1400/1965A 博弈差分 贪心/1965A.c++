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
//差分 理解在博弈中有绝对优势 在这题中 当差值大于1的时候就拥有绝对优势
//然后还要特判一下

void solve() {   
  int n;cin>>n;
  ll x[n+10];
  ll sum[n+10];
  map<ll,ll>mp;
  for(int i=1;i<=n;i++){
    cin>>x[i];
    mp[x[i]]++;
  }
  vector<ll>v;v.push_back(0);
  for(auto it:mp){
    v.push_back(it.fi);
  }n=mp.size();
  if(v[1]!=1&&n!=1){
    cout<<"Alice\n";return ;
  }
  sum[0]=0;int cnt=0;
  for(int i=1;i<v.size();i++){
    sum[i]=v[i]-v[i-1];
    cnt++;
    if(sum[i]>1&&i!=1){
        if(cnt%2==0){
            cout<<"Bob\n";return ;
        }else{
            cout<<"Alice\n";return ;
        }
    }
    
  }
  if(n%2==0){
            cout<<"Bob\n";return ;
        }else{
            cout<<"Alice\n";return ;
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