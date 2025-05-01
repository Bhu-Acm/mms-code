//fly!
#include<bits/stdc++.h>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
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
  map<ll,ll>mpa,mpb;
  string s;cin>>s;
  if(n==2){
    if(s[0]=='A'){
        cout<<"Alice\n";return ;
    }else{
        cout<<"Bob\n";return ;
    }
  }
  ll maxxa=0,maxxb=0;
  int a=0,b=0;
  for(int i=0;i<n;i++){
    if(s[i]=='A'){a++;
        mpa[i+1]++;
        if(i+1!=n)
        maxxa=max(maxxa,(ll)i+1);
    }else{b++;
        mpb[i+1]++;
        //if(i+1!=n)
        maxxb=max(maxxb,(ll)i+1);
    }
  }
  if(mpa[1]!=0&&mpa[n]!=0){
    cout<<"Alice\n";return ;
  }
  if(mpb[1]!=0&&mpb[n]!=0){
    cout<<"Bob\n";return ;
  }
  if(maxxb==n&&b==1){
    cout<<"Alice\n";return ;
  }
  if(maxxa==n&&a==1){
    cout<<"Bob\n";return ;
  }
  if(maxxa>maxxb){
    cout<<"Alice\n";
  }else{
    cout<<"Bob\n";
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