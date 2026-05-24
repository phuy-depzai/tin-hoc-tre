#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;cin>>n;
    ll max=0;
    vector<ll>a(n+5),b;
    for(int i=0;i<n;i++){
        ll nhap;
        cin>>nhap;
        if(nhap>max){max=nhap;}
        a[i]=nhap;
        b.push_back(nhap+20);
    }
    ll count=0;
    for(int i=0;i<b.size();i++){
        if(b[i]>max){
            count++;
        }
    }
    cout<<count;
    return 0;
}