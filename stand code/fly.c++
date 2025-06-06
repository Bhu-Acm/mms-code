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
  vector<ll>v;ll sum=0;
  ll a=0,b=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='(')sum++,a++;
    else sum--,b++;
    if(a==b&&s[i]==')'){
        a=0;b=0;
    }
    if(sum==0){
        v.push_back(i);
    }
  }
  if(a==0&&b==0){
    cout<<1 endl;
    for(int i=1;i<=n;i++){
        cout<<1 endd;
    }
    cout endl;
    return ;
  }
  if(sum!=0){
    cout<<-1 endl;
  }else{
    ll t=1;
    cout<<v.size() endl;int j=0;
    for(int i=0;i<s.size();i++){
        cout<<t endd;
        if(i==v[j]){
            j++;
            t++;
        }
        
    }cout endl;
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