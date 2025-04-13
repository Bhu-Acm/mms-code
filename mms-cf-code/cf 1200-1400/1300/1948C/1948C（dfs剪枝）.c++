//fly!
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<numeric>
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
int dx[8]={-1,1,0,0,-1,-1,1,1};
int dy[8]={0,0,-1,1,-1,1,-1,1};//上下左右，左上右上左下右上
int flag=0; 
int n;
  char c[3][200010];
  int pos[3][200010]={0};
void dfs(int i,int j){
    if(i==2&&j==n){
        flag=1;return ;
    }
    if(flag==1) return ;
    for(int k=0;k<4;k++){
        int a=i+dx[k];
        int b=j+dy[k];
        if(a==2&&b==n) {flag=1;return ;}
        if(a>=1&&a<=2&&b>=1&&b<=n&&pos[a][b]==0){
            if(c[a][b]=='>'){
                pos[a][b]=1;
                pos[a][b+1]=1;
                dfs(a,b+1);
              // pos[a][b]=0;
              //  pos[a][b+1]=0;
            }else{
                pos[a][b]=1;
                pos[a][b-1]=1;
                dfs(a,b-1);
               // pos[a][b]=0;
               // pos[a][b-1]=0;
            }
        }
        if(flag==1) return ;
    }
    return ;
}
//神秘的题目 
/*这道题是dfs 在我刚开始学dfs的时候 all文章都在强调“回溯”是多么重要在dfs里面
而这道题却不需要回溯 或者可以不回溯 因为这道题不需要走遍所有的路径 只需要找到条路能到达就行*/
void solve() {   
 cin>>n;
  for(int i=1;i<=2;i++){
    for(itn j=1;j<=n;j++){
        cin>>c[i][j];
    }
  }
  dfs(1,1);
  if(flag!=0){
    cout<<"Yes\n";
  }else{
    cout<<"No\n";
  }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        memset(pos,0,sizeof(pos));
        flag=0;
        solve();
    }
    return 0;
}