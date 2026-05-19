
bphuoc1819 - Bài 1: Chu vi tam giác
Yêu cầu: cho độ dài ba cạnh tam giác lần lượt là a, b, c hãy tính chu vi tam giác đó. Dữ liệu vào: lấy từ file CHUVI.INP ba số nguyên dương a, b, c 1  a, b, c  1000 Kết quả: ghi ra file CHUVI.OUT chu vi tam giác đã cho.
Ví dụ:


| chuvi.inp | chuvi.out |
| --- | --- |
| 3 5 4 | 12 |
| 2 7 8 | 17 |
```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
#ifndef ONLINE_JUDGE
freopen("CHUVI.INP", "r", stdin);
freopen("CHUVI.OUT", "w", stdout);
#endif
    ll a,b,c;cin>>a>>b>>c;
    ll res = a+b+c;
    cout<<res;
    return 0;
}
```

bphuoc1819 - Bài 2: Số lượng chữ số
Yêu cầu: cho một xâu ký tự S gồm các chữ cái tiếng Anh in thường và các chữ số, hãy đếm xem có bao nhiêu chữ số trong xâu đã cho.
Dữ liệu vào: lấy từ file SOCHUSO.INP xâu S có không quá 200 ký tự.
Kết quả: ghi ra file SOCHUSO.OUT số lượng chữ số trong xâu S.
Ví dụ:


| sochuso.inp | sochuso.out |
| --- | --- |
| nam2018 | 4 |
| ngay06thang03nam2018 | 8 |

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
#ifndef ONLINE_JUDGE
freopen("SOCHUSO.INP", "r", stdin);
freopen("SOCHUSO.OUT", "w", stdout);
#endif
    string a;cin>>a;
    ll count = 0;
    for(char u:a){
        if(u=='0'||u=='1'||u=='2'||u=='3'||u=='4'||u=='5'||u=='6'||u=='7'||u=='8'||u=='9'){
            count++;
        }
    }
    cout<<count;
    return 0;
}
```

bphuoc1819 - Bài 3: Đếm số nguyên tố
Số nguyên tố là số tự nhiên lớn hơn 1 và có hai ước phân biệt là 1 và chính nó. Ví dụ: số 2, 5, 17 là các số nguyên tố, còn các số 1, 9, 10, 12 không phải là các số nguyên tố.
Yêu cầu: cho số nguyên dương N, hãy xác định xem trong đoạn [1; N] có bao nhiêu số nguyên tố.

Dữ liệu vào: lấy từ file DEMNT.INP số nguyên dương N  106
Kết quả: ghi ra file DEMNT.OUT số lượng số nguyên tố trong đoạn [1; N].
Ví dụ:


| demnt.inp | demnt.out |
| --- | --- |
| 2 | 1 |
| 38 | 12 |
```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll limit = 1e6;
int main(){
  #ifndef ONLINE_JUDGE
freopen("DEMNT.INP", "r", stdin);
freopen("DEMNT.OUT", "w", stdout);
#endif
    ll n;cin>>n;
    vector<bool>  ip(limit+100,true);
    ip[0]=ip[1]=false;
    for(ll p =2;p*p<=limit;p++){
        if(ip[p]){
            for(ll i = p*p;i<=limit;i+=p){
                ip[i]=false;
            }
        }
       
    }
     ll count=0;
        for(ll i=0;i<=n;i++){
            if(ip[i]){
                count++;
            }
        }
        cout<<count;
    return 0;
}
```

bphuoc1819 - Bài 4: Xuất hiện nhiều nhất
Yêu cầu: Cho dãy A gồm N số nguyên a1, a2, …, an. Hãy cho biết giá trị nào xuất hiện nhiều lần nhất trong dãy và số lần xuất hiện của giá trị đó (nếu có nhiều giá trị cùng xuất hiện nhiều lần nhất thì đưa ra giá trị nhỏ nhất trong các giá trị đó).
Ví dụ: ta có dãy A gồm 7 phần tử như sau: 9 7 6 9 6 5 8. Ta thấy trong dãy A, giá trị 9 xuất hiện 2 lần, giá trị 7 xuất hiện 1 lần, giá trị 6 xuất hiện 2 lần, giá trị 5 xuất hiện 1 lần, giá trị 8 xuất hiện 1 lần. Vậy có hai giá trị xuất hiện nhiều nhất là 9 và 6 với số lần xuất hiện là 2. Vậy ta chọn giá trị 6.
Dữ liệu vào: lấy từ file XUATHIEN.INP
Dòng đầu chứa số nguyên dương N
Dòng hai chứa N số nguyên
Kết quả: ghi ra file XUATHIEN.OUT
Dòng đầu ghi giá trị xuất hiện nhiều nhất trong dãy (nếu có nhiều giá trị cùng xuất hiện nhiều lần nhất thì đưa ra giá trị nhỏ nhất trong các giá trị đó).
Dòng hai ghi số lần xuất hiện của giá trị ở dòng đầu.
Ví dụ:


| xuathien.inp | xuathien.out |
| --- | --- |
| 7 9 7 6 9 6 5 8 | 6 2 |
| 8 4 8 9 3 15 5 6 10 | 3 1 |


<img width="512" height="101" alt="image" src="https://github.com/user-attachments/assets/4913d233-454c-491c-b029-1294c3aea331" />


```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll limit=1e7;
int main(){
#ifndef ONLINE_JUDGE
freopen("XUATHIEN.INP", "r", stdin);
freopen("XUATHIEN.OUT", "w", stdout);
#endif
    ll n;cin>>n;
    vector<ll> a(n);
    vector<ll>fre(limit+100,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i:a){
        fre[i]++;
}
ll max1=0;
ll pos =0;
ll res=0;
for(ll i=0;i<=limit;i++){
    if(fre[i]>max1){
        res=fre[i];
        pos=i;
        max1=fre[i];    
    }
}
cout<<pos<<endl<<res;
return 0;
}
```
