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
//三分
void solve() {   
  int a=1,b=1000;
  int a1=0,b1=0;
  while(a<b){
    int a1=a+(b-a)/3;int b1=b-(b-a)/3;
    int t;
    cout<<"? "<<a1 endd<<b1 endl;
    cout.flush();
    cin>>t;
    if(t==a1*b1){
        a=b1+1;
    }else if(t==a1*(b1+1)){
        b=b1;a=a1+1;
    }else{
        b=a1;
    }
  }
  cout<<"! "<<a endl;
  cout.flush();
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