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
//数据结构神力！！！！
//注意set end（） 返回的不是最后一个 
//最后一个是 --end（）;
void solve() {   
  int q;cin>>q;
  multiset<ll>l,r;
  while(q--){
    char t;int a,b;cin>>t>>a>>b;
    if(t=='+'){
      l.insert(a);
      r.insert(b);
    }else{
      l.erase(l.find(a));
      r.erase(r.find(b));
    }
    //cout<<*l.end()-1 endd<<*r.begin() endl;
    if(l.size()<=1){
      cout<<"NO\n";continue;
    }
    if(*--l.end() > *r.begin()){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
    //ai给的 
//     if(l.size() <= 1){
//     cout << "NO\n"; 
//     continue;
// }
// if(*prev(l.end()) > *r.begin()){
//     cout << "YES\n";
// }else{
//     cout << "NO\n";
// }

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