#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll a,b,count=0;cin>>a>>b;
    while(b>0){
        count+=a/b;
        ll temp = a%b;
        a=b;
        b=temp;
    }
    cout<<count;
    return 0;
}