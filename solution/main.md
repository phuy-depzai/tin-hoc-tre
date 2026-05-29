Bài 1
Cho 2 tàu có số ngày cập cảng lần lượt là x và y,biết ngày cập cảng và rời cảng là chung 1 ngày
Hỏi sau n ngyà thì 2 tàu gặp nhau bao nhiêu lần
Đầu vào từ file”VANTAI.INP” gồm 
Dòng 1 số ng dương n(0<n<10^12)
Dòng 2 gồm 2 số ng dương x và y(0<x,y<10^5)
Đầu ra file “VANTAI.OUT” gồm số ngyà mà 2 tàu gặp nhau
ví dụ
|VANTAI.INP|VANTAI.OUT|giải thích|
|----------|----------|----------|
|30 <br> 3 4| 2  |2 tàu gặp nhau vào ngày 12 và 24|

// main idea ngày 2 tàu gặp nhau là ngày 2 tàu cùng cập cảng hay nói cách khác là bội chung của x và y
Ta có công thức 
Số ngày gặp nhau=n/bcnn(x,y)

//my idea 
Brute force từ 1 tới n tìm bc của x và y(lúc đó gọi là ước chung(?))
// đã cố tối ưu nhưng vì ovtk nên tối ưu bất thành
Code 
```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;cin>>n;
    ll x,y;cin>>x>>y;
    ll count=0;
    for(int i=1;i<n;i++){
        if(((i%x)==0)&&((i%y)==0)){count++;}
    }
    cout<<count;
}
```



Bài 2
Cho 1 số nguyên dương n.yêu cầu xóa 1 số ở vị trí bât kì của số n sao cho số tìm được là lớn nhất ,nhỏ hơn n và chia hết cho 9
Dữ liệu vào từ file”STEM.INP” gồm 1 số nguyên dương n
Dữ liệu ra từ file”STEM.OUT” gồm số vừa tìm được
Ví dụ
|STEM.INP|STEM.OUT|
|-------|--------|
|583654|58365|

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string n;cin>>n;
    string a="";
    ll remove=0;
    vector<ll>b;
    for(int i=0;i<n.size();i++){
       for(int j=0;j<n.size();j++){
        if(j==remove){
            continue;
        }
        else{
            a+=n[j];
        }
}
   if((stoll(a)%9)==0&&stoll(a)<stoll(n)){b.push_back(stoll(a));}
    a.clear();
    remove++;
}
ll max1=0;
for(int i=0;i<b.size();i++){
   if(b[i]>max1)max1=b[i];
}
cout<<max1;
return 0;
}
```


Bài 3
Các số tương đồng là các số giống nhau về hàng đơn vị,chục,trăm,nghìn,……
Yêu cầu:cho n số nguyên,hãy đếm các cặp số tưong đồng
Dữ liệu vào file “TDONG.INP”
Dòng 1 số nguyên dương N
Dòng 2 gồm n số nguyên a1,…..,an
// kh nhớ ví dụ:D

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;cin>>n;
    ll count=0;
    vector<ll>a(n);
    for(int i=0 ; i < n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int z=i+1;z<n;z++){
            string b=to_string(a[i]);
            string c=to_string(a[z]);
            for(int u=0;u<min(b.size(),c.size());u++){
                if(b[u]==c[u])count++;
            }
        }
    }
    cout<<count;
return 0;
}
```




