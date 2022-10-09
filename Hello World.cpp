#include <math.h>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define int long long
#define out {cout<<"-1"<<endl;return;}
#define prime(n) pow(1+sqrt(5),n)-pow(1-sqrt(5),n)/(pow(2,n)*(sqrt(5)))
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cin.tie(0);
 int p[1000000],h[1000000],e[1000000],mn,k,one,two,three, a,b,d,n,c,m,z,q,r,t,x,y,l,maxi=0;
const int minn=-1e9-1;
string s,s2,s1;
int maxx=1e9+7;
string grid[1010];
const int MxN=2e5;
vector<pair<int,int>> vc;
array<int,2> ar[MxN];

void solve(){
    int minq[n][n];
    int d=1;
    while(d<=n){
        for(int i=0;i<n-d+1;i++){
                minq[i][i+d-1]=p[i];
            for(int j=i+d-1;j>i;j--){
                minq[i][i+d-1]=min(minq[i][i+d-1],p[j]);
            }
        }
         d<<=1;
    }
    int c=b-a+1,cnt=-1;
    while(c>0){
        if(c&1==1) cnt++;
        c>>=1;
    }
    c=1<<cnt;
    cout<<min(minq[a][c+a-1],minq[b-c+1][b])<<endl;
}
int32_t main(){
    fast
    cin>>n;
    //while(t--){
        //cin>>n>>k>>s;
        for(int i=0;i<n;i++) cin>>p[i];
        cin>>a>>b;
        solve();
    //}
    return 0;
}
