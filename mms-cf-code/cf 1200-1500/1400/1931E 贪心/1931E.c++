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
bool cmp(ll a,ll b){
    return a>b;
}
void solve() {   
  ll n,m;cin>>n>>m;
  string s[n+10];
  vector<ll>v;ll sumy=0;
  for(int i=1;i<=n;i++){
    cin>>s[i];
    sumy+=s[i].size();
    ll sum=0;
    if(s[i][s[i].size()-1]!='0') continue;
    for(int j=s[i].size()-1;j>=0;j--){
        if(s[i][j]=='0'){
            sum++;
        }else{
            v.push_back(sum);
            break;
        }
    }
  }
  sort(all(v),cmp);
  ll f=0;
  //sumy-=v[0];
  for(int i=0;i<v.size();i+=2){
    sumy-=v[i];
  }
  if(sumy-1>=m){
    cout<<"Sasha\n";
  }else{
    cout<<"Anna\n";
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