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
    int x[n+10][n+10]={0};
    memset(x,0,sizeof(x));
    int a=1,b=2;
    if(1){
        for(int i=1;i<=n;i++){
            if(a>=n)break;
            for(int j=1;j<n;j+=2){
                x[i][j]=a;x[i][j+1]=b;
                b++;
                if(b>n){
                    a++;b=a+1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(x[i][j]==0){
                cout<<1 endd;continue;
            }
            cout<<x[i][j] endd;

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