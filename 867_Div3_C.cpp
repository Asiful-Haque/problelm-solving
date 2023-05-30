#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define check cout<<"hello"<<endl
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define EPS 1e-9
#define PI acos(-1)
#define distance(x1,x2,y1,y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define printvector for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
#define printmap for(auto it=m.begin();it!=m.end();it++)cout<<it->first<<"-->"<<it->second<<endl;
#define MAX (ll)(2e5+7)
#define arrayzero memset(arr,0,sizeof(arr));
#define s1_is_in_x x.find(s1)!=string::npos
#define mod 1000000007
//ll arr[MAX];
// void sieve(){
//     arr[2]=1;
//     for(ll i=3;i<=MAX;i+=2){
//         arr[i]=1;
//     }
//     for(ll i=3;i<=MAX;i+=2){
//         for(ll j=i*i;j<=MAX;j+=i){
//             arr[j]=0;
//         }
//     }
// }
int main(){
	ll t;cin>>t;
	while (t--){
		ll n;cin>>n;
		ll x1=n-1;
		ll first_sum=(x1*(x1+1))/2;

		ll x2=n-2;
		ll second_sum=(x2*(x2+1))/2;

		cout<<(n*4)+1+first_sum+second_sum<<endl;
	}
}
