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
  ll x[n+10];
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }int cnt=0;
  if(n==1){
    cout<<0 endl;return ;
  }
  vector<ll>v,v1;
  for(int i=1;i<=n/2;i++){
    v.push_back(x[i]);
  }
  for(int i=n/2+1;i<=n;i++){
    v1.push_back(x[i]);
  }
  sort(all(v));sort(all(v1));
  for(int i=0;i<v.size()-1;i++){
    if(v[i]+1!=v[i+1]||v1[i]+1!=v1[i+1]){
        cout<<-1 endl;return ;
    }
  }
  for(int i=1;i<=n;i+=2){
    if(x[i]+1==x[i+1]||x[i]==x[i+1]+1){
        if(x[i]>x[i+1]){
            cnt++;
            swap(x[i],x[i+1]);
        }
    }else{
        cout<<-1 endl;return ;
    }
  }
  for(int i=1;i<=n;i++){
    if(x[i]>x[i+1])cnt++;
  }
  cout<<cnt endl;
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