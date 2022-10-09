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
    int di[s.size()+2][s1.size()+2];
    //for(int i=0;i<=s.size()+1;i++)di[i][0]=0;
    //for(int i=0;i<=s1.size()+1;i++)di[i][0]=0;
    di[1][1]=0;
    for(int i=2;i<=s1.size()+1;i++)di[1][i]=di[1][i-1]+1;
    for(int i=2;i<=s.size()+1;i++)di[i][1]=di[i-1][1]+1;
    for(int i=2;i<=s.size()+1;i++){
        for(int j=2;j<=s1.size()+1;j++){
            di[i][j]=min(di[i-1][j]+1,min(di[i][j-1]+1,di[i-1][j-1]+(int)(s[i-2]!=s1[j-2])));
        }
    }
    cout<<di[s.size()+1][s1.size()+1]<<endl;
}
int32_t main(){
    fast
    //cin>>n;
    //while(t--){
        //cin>>n>>k>>s;
        //for(int i=0;i<n;i++) cin>>p[i];
        cin>>s>>s1;
        solve();
    //}
    return 0;
}
