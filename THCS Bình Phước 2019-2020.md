//hahahah 1 tiếng

bphuoc1920 - Bài 1: Điểm trung bình

Bạn Nam vừa tham gia cuộc thi kiểm tra kiến thức môn Tin học, nội dung kiểm tra gồm hai phần: phần thi lý thực hành (viết tắt TH) và phần thi lý thuyết (viết tắt LT). Điểm trung bình (viết tắt DTB) được tính như sau:

DTB = (TH*3 + LT)/4
Nếu DTB 5 thì đạt, ngược lại không đạt  5
Yêu cầu: cho hai số nguyên X và Y 0  X ,Y  10 lần lượt là điểm thi thực hành
và lý thuyết của Nam. Em hãy viết chương trình giúp bạn Nam tính ra kết quả đạt hay không đạt (nếu đạt ghi 1, không đạt ghi 0)
Dữ liệu vào: lấy từ file DIEMTB.INP hai số nguyên X, Y trên 1 dòng 0  X ,Y  10
Kết quả: ghi ra file DIEMTB.OUT ghi1 nếu Nam đạt, ngược lại ghi 0.
Ví dụ:


| diemtb.inp | diemtb.out |
| --- | --- |
| 4 5 | 0 |
| 7 4 | 1 |

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll th,lt;cin>>th>>lt;
    ll dtb= (th*3+lt)/4;
    if(dtb<=5){cout<<'0';}
    else cout<<'1';
    return 0;
}
```
bphuoc1920 - Bài 2: Tính tổng
Yêu cầu: cho hai số nguyên dương N và M , viết chương trình tính tổng M chữ số tận cùng của số N.
Dữ liệu vào: lấy từ file TINHTONG.INP trên hai dòng.
Dòng 1: chứa duy nhất số nguyên dương N.
Dòng 2: chứa duy nhất số nguyên dương M.
Kết quả: ghi ra file TINHTONG.OUT ghi tổng M chữ số tận cùng của số N.
Ví dụ:


| tinhtong.inp | tinhtong.out |
| --- | --- |
| 25487 2 | 15 |
| 5876512 3 | 8 |

Giới hạn:
Có 60% số điểm ứng với 1  N  109 ,1  M  số chữ số của N
Có 60% số điểm ứng với 1  N  10200,1  M  số chữ số của N

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string n;cin>>n;
     ll m;cin>>m;
    reverse(n.begin(),n.end());
    ll res=0;
    for(int i=0;i<m;i++){
        res+=n[i]-'0';
    }
    cout<<res;
    return 0;
}
```
bphuoc1920 - Bài 3: Bộ ba số lớn nhất
Yêu cầu: Cho dãy số A gồm N số nguyên a1, a2....an viết chương trình tìm bộ ba số
liên tiếp có tổng lớn nhất trong dãy A (nếu có nhiều bộ ba có tổng lớn nhất thì lấy bộ ba có chỉ số nhỏ nhất)
Dữ liệu vào: lấy từ file BOMAX.INP
Dòng 1: số nguyên dương N
Dòng 2: chứa N số nguyên a1, a2	an
Kết quả: ghi ra file BOMAX.OUT

Dòng 1: tổng ba số liên tiếp có tổng lớn nhất.
Dòng 2: là hai số nguyên chỉ vị trí đầu và vị trí cuối của bộ số tìm được.
Ví dụ:


| bomax.inp | bomax.out |
| --- | --- |
| 5 2 8 4 6 3 | 18 2 4 |
| 4 6 3 7 4 | 16 1 3 |

Giới hạn:
Có 30% số điểm ứng với 3 ≤ N ≤ 50; |ai| ≤ 105 (i = 1..N);
Có 70% số điểm ứng với 3 ≤ N ≤ 105; |ai| ≤ 1018 (i = 1..N).

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;cin>>n;
    vector<ll>a(n+10);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>> k(n);
    vector<ll>preres(n);
    for(int i=0;i<n;i++){
        ll res1=a[i]+a[i+1]+a[i+2];
        preres[i]=(res1);
        k[i].first=i;k[i].second=i+2;
    }
   ll max=0;
   ll res=0;
   ll pos=0;
    for(int i=0;i<n;i++){
        if(preres[i]>max){
            res=max=preres[i];
            pos=i;
        }
    }
   cout<<res<<endl<<k[pos].first+1<<" "<<k[pos].second+1;
    return 0;
}
```
bphuoc1920 - Bài 4: Mật khẩu
Yêu cầu: Việc bảo mật thông tin người dùng ngày nay là vấn đề đặt ra cho mọi người sử dụng máy tính Để tăng tính an toàn cho tài khoản của mình, Nam quyết định giấu mật khẩu truy cập vào dãy mã gồm các ký tự trong bảng chữ cái tiếng Anh và các ký tự số. Do lâu ngày không sử dụng nên Nam không nhớ, Nam muốn nhờ các bạn lập trình tìm lại mật khẩu giúp bạn ấy. Mật khẩu là dãy các số liên tiếp trong dãy mã có giá trị lớn nhất.
Dữ liệu vào: lấy từ file MATKHAU.INP xâu ký tự S không quá 255 ký tự.
Kết quả: ghi ra file MATKHAU.OUT là số nguyên P là mật khẩu cần tìm, nếu trong dãy mã không chứa số hoặc chỉ chứa các số 0 thì P = 0
Ví dụ:


| matkhau.inp | matkhau.out |
| --- | --- |
| 456abfhcj12345612 | 12345612 |
| Pass9578a0001453 | 9578 

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string n;cin>>n;
    vector<string> res;
    string pre;
    for(int i=0;i<n.size();i++){
        if(!isdigit(n[i+1])&&isdigit(n[i])){
            pre+=n[i];
           // cout<<pre<<" "<<endl;
            if(pre[0]=='0'){
                    ll o=stoll(pre);
                    res.push_back(to_string(o));
            }
           else res.push_back(pre);
            pre="";
        }
        else if(isdigit(n[i])){
            pre+=n[i];
           // cout<<pre<<" ";
        }
    }
    for(int i=0;i<res.size();i++){
        //cout<<res[i]<<" ";
    }
    ll max=0;
    for(int i=0;i<(int)res.size();i++){
        ll u=stoll(res[i]);
        if(u>max){max=u;}
    }
    
    cout<<max;
    return 0;
}
```
