#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll check(ll h,ll n,const vector<ll>& a){
    ll res1=0;
    for(int i=0;i<n;i++){
        
        if(a[i]>h){
            res1+=a[i]-h;
        }
    }
    return res1;
}
int main(){
    ll n,m,res=0,max=0;cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];res+=a[i];if(a[i]>max){max=a[i];}
    }
if(res<m){cout<<"-1";return 0;}
else{
    res=-1;
    ll high =max,low=0;
    while(low<=high){
        ll mid = low+ (high-low)/2;
        if(check(mid,n,a)>=m){
            res=mid;
            low=mid+1;
        }
        else{high=mid-1;}
    }
}
cout<<check(*min_element(a.begin(),a.end()),n,a)<<endl<<res;
return 0;
}