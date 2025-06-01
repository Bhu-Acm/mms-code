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
  ll a,b,c;cin>>a>>b>>c;
  ll a1=a/3,b1=b/2,c1=c/2;
  ll minn=INT_MAX;
  minn=min(minn,min(a1,min(b1,c1)));
  a-=3*minn;b-=2*minn;c-=2*minn;ll maxx=0;
  for(int i=1;i<=7;i++){
    a1=a;b1=b;c1=c;int f=i;ll cnt=0;
    while(1){
        if(f==1||f==4||f==7){if(a1==0)break;a1--;}
        else if(f==2||f==6){if(b1==0)break;b1--;}
        else {if(c1==0)break;c1--;}
        cnt++;
        if(f==7){
            f=1;continue;
        }
        f++;
    }
    maxx=max(maxx,cnt);
  }
  cout<<minn*7+maxx endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}