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
int pd(ll t){
    ll t1=t;
    while(t1%2==0){
        t1/=2;
    }
    if(t1==1){
        return 1;
    }
    if(t==2)return 1;
    for(int i=2;i*i<=t;i++){
        if(t%i==0){
            return 0;
        }
    }
    return 1;
}
void solve() {   
  ll t;cin>>t;
  if(t==1){
    cout<<"FastestFinger\n";return ;
  }
  if(t==2){
    cout<<"Ashishgup\n";return ;
  }
  if(t%2!=0){
    cout<<"Ashishgup\n";
  }else{
    if(pd(t/2)==0){
        cout<<"Ashishgup\n";
    }else{
        cout<<"FastestFinger\n";
   }
  }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    ll sum=0;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}