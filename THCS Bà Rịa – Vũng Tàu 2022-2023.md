THCS Bà Rịa – Vũng Tàu 2022-2023 brvt2223 - Bài 1: Tìm ước chung lớn nhất Cho một mảng A gồm N số nguyên dương: a1, a2, . . ., an. Yêu cầu: Hãy tìm hai số nguyên trong mảng A sao cho ước chung lớn nhất của 2 số đó là lớn nhất. Dữ liệu: đọc vào từ file CDIV. INP: Dòng đầu tiên chứa số nguyên N (2 ≤ N ≤ 2.105). Dòng thứ hai chứa N số nguyên a, mỗi số cách nhau một ký tự trắng (1 ≤ a ≤ 106). Kết quả: ghi ra file CDIV.OUT một số nguyên duy nhất là ước chung lớn nhất tìm được. Ví dụ:

| CDIV. INP | CDIV.OUT |
| --- | --- |
| 6 12 5 6 4 7 10 | 6 |
//chưa tối ưu
```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    //freopen("CDIV.INP","r",stdin);
    //freopen("CDIV.OUT","w",stdout);
    ll n;
    cin>>n;
    vector<ll>v;
    vector<ll>res;
    ll a;
    for(ll p=0;p<n;p++){cin>>a;v.push_back(a);}


    for(ll i=0;i<v.size();i++){
        for(ll x=0;x<v.size();x++){
            if(v[i]!=v[x]){
            ll result=gcd(v[i],v[x]);
            res.push_back(result);}
        }

    }
    ll max=res[0];
        for(ll u =1;u<(int)res.size();u++){
            if(max<res[u]){
                max=res[u];
            }
        }
        cout<<max;
    return 0;
}
```
brvt2223 - Bài 2: Đố vui tin học Để tổng kết phát thưởng cho cuộc thi Đố vui tin học. Ban tổ chức có N phần quà được đánh thứ tự từ 1 tới N, phần quà thứ i có giá trị là ai. Ban tổ chức yêu cầu học sinh chọn các phần quà theo quy tắc sau: Phần quà chọn sau phải có số thứ tự lớn hơn phần quà chọn trước đó. Phần quà chọn sau phải có giá trị lớn hơn phần quà chọn trước đó ít nhất K giá trị. Yêu cầu: Hãy giúp các bạn học sinh lựa chọn theo quy tắc ban tổ chức đặt ra sao cho số lượng phần quà được chọn là nhiều nhất. Dữ liệu: đọc vào từ File GIFT.INP: Dòng đầu chứa 2 số nguyên dương N và K cách nhau một ký tự trắng (N ≤ 104, K ≤ 105). N dòng tiếp theo, dòng thứ i chứa số nguyên dương ai (ai ≤ 106) là giá trị của phần quà thứ i. Kết quả: ghi ra file GIFT.OUT gồm một dòng duy nhất chứa số lượng phân quà nhiều nhất thỏa mãn yêu cầu. Ví dụ:


| gift.inp | gift.out |
| --- | --- |
| 5 2 4 5 6 4 8| 3 |
//chưa tối ưu
```cpp
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
//freopen("GIFT.INP","r",stdin)
//freopen("GIFT.OUT","w",stdin)
    ll res=0;
    ll n,k,o;
    cin>>n>>k;
    vector<ll>v;
    while(cin>>o){v.push_back(o);}
    //solvel
    ll last=0;
    last=v[0];
    res++;
    for(int z=1;z<(int)v.size();z++){
        ll ketqua=v[z]-last;
        if(ketqua>=k){
            res++;
            last=v[z];
        }
    }
    cout<<res;
    return 0;
}
```
brvt2223 - Bài 3: Trò chơi Nhân kỷ niệm ngày thành lập Đoàn, cô Tổng phụ trách tổ chức 1 trò chơi có thưởng cho các bạn lớp 9 như sau:
Có N ô vuông được vẽ thẳng hàng trên sân trường, các ô vuông được đánh số từ 1, 2, ..., N. Mỗi ô vuông i (1 ≤ i ≤ N) có giá trị năng lượng là hi. Một bạn học sinh đang ở ô vuông thứ i, bạn ấy có thể nhảy tới ô vuông tiếp theo các cách:
Nếu bạn ở ô vuông thứ i thì bạn có thể nhảy đến ô vuông thứ tự i +1, i+2, i+k. Chi phí năng lượng của bạn tiêu hao cho 1 lần nhảy là |hj – hi| với hj là ô vuông đích mà bạn nhảy tới. Bạn học sinh nào di chuyển từ ô số 1 đến ô số N với chi phí năng lượng thấp nhất sẽ được cô thưởng 1 phần quà. Yêu cầu: Hãy tìm chi phí thấp nhất để giúp các bạn học sinh nhảy từ ô vuông số 1 đến ô vuông thứ N.
Dữ liệu: đọc vào từ file GAME.INP gồm: Dòng đầu ghi 2 số N và K cách nhau một ký tự trắng: N là số ô vuông (2 ≤ N ≤ 105), K là số ô vuông tối đa bạn học sinh có thể nhảy qua (1 ≤ K ≤ 100). Dòng thứ hai chứa N giá trị hi (1 ≤ h ≤ 104), mỗi số cách nhau một ký tự trắng là chi phí năng lượng của ô vuông thứ i tương ứng. Lưu ý: Các giá trị là số nguyên. Kết quả: ghi ra file GAME.OUT một số là tổng chi phí phát sinh tối thiểu. Ví dụ:

| game.inp | game.out |
| --- | --- |
| 5 3 10 25 35 40 20 | 20 |

Giải thích: Cách nhảy của bạn học sinh sẽ là: 1  2 5, tổng chi phí sẽ là |25 - 10|+|20-25|=20. 
