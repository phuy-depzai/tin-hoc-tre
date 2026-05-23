
bphuoc2021 - Bài 1: Tổng chữ số
Yêu cầu: cho số nguyên dương N có hai chữ số, hãy tính tổng các chữ số của N
Dữ liệu vào: lấy từ file tongchuso.inp duy nhất một số nguyên N
Kết quả: ghi ra file tongchuso.out duy nhất một số nguyên là tổng các chữ số của N
Ví dụ:


| tongchuso.inp | tongchuso.out |
| --- | --- |
| 24 | 6 |
| 45 | 9 |

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string n;cin>>n;
    ll res=0;
    for(int u:n){
        res+=u-'0';
    }
    cout<<res;
    return 0;
}
```


bphuoc2021 - Bài 2: Số anh cả
Cho số nguyên N (N > 0). M gọi là số anh cả của N nếu M được tạo thành từ các chữ số của N nhưng M lớn nhất. Chẳng hạn: N = 216 thì M = 621

Dữ liệu vào: lấy từ file soanhca.inp duy nhất một số nguyên N
Kết quả: ghi ra file soanhca.out duy nhất một số nguyên M
Ví dụ:


| soanhca.inp | soanhca. out |
| --- | --- |
| 216 | 621 |
| 10201 | 21100 |



<img width="508" height="100" alt="image" src="https://github.com/user-attachments/assets/14a1a81a-bb25-4078-a99b-3529ba98db3c" />

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
string n;cin>>n;
sort(n.begin(),n.end());
reverse(n.begin(),n.end());
 cout<<n;
return 0;
}
```




bphuoc2021 - Bài 3: Bỏ sỏi

Cho một dãy có N ô vuông. Người ta bỏ các viên sỏi vào các ô vuông theo quy luật: hai ô đầu tiên chỉ bỏ một viên sỏi, từ ô thứ ba trở đi số sỏi được bỏ vào bằng tổng các viên sỏi ở các ô trước nó. Mỗi lượt thực hiện là bỏ từ ô đầu tiên đến ô thứ N.
Yêu cầu: sau K lượt bỏ sỏi, hãy cho biết số sỏi tại ô thứ M 0  M  N 
Chẳng hạn với N = 5, K = 3 và M = 4 ta được:


| K = 1 | 1 | 1 | 2 | 4 | 8 |
| --- | --- | --- | --- | --- | --- |
| K = 2 | 2 | 2 | 6 | 14 | 32 |
| K = 3 | 3 | 3 | 12 | 32 | 82 |

Dữ liệu vào: lấy từ file bosoi.inp gồm ba số nguyên N, K, M
Kết quả: ghi ra file bosoi.out duy nhất một số nguyên là số sỏi của ô thứ M sau K lượt bỏ.
Ví dụ:


| bosoi.inp | bosoi.out |
| --- | --- |
| 4 1 3 | 2 |
| 5 2 4 | 14 |

Giới hạn: N , K  30
bphuoc2021 - Bài 4: Tiền photo
Để khách hàng tiện theo dõi về giá cả dịch vụ cũng như việc tính tiền được nhanh chóng, tiệm Photocopy G9 niêm yết bảng giá dịch vụ photo như sau:


| Loại giấy | Số lượng < 100 tờ | Số lượng < 100 tờ | Số lượng  100 tờ | Số lượng  100 tờ |
| --- | --- | --- | --- | --- |
| Loại giấy | Giá 1 mặt | Giá 2 mặt | Giá 1 mặt | Giá 2 mặt |
| Giấy A4 | 300đ | 400đ | 250đ | 350đ |
| Giấy A3 | 600đ | 800đ | 500đ | 700đ |


Giải thích: Nếu khách hàng photo số lượng nhỏ hơn 100 tờ, với loại giấy A4 mà photo 1 mặt thì có giá 300đ/tờ, còn 2 mặt thì có giá 400đ/tờ. Còn khách photo loại giấy A3 thì có giá dịch vụ gấp đôi giấy A4.
Yêu cầu: Tính số tiền khách phải trả khi thực hiện một giao dịch photo.
Dữ liệu vào: lấy từ file tienphoto.inp gồm ba số nguyên L, M, N.
Trong đó quy ước: L thể hiện loại giấy (L = 3 là giấy A3, L = 4 là giấy A4); M thể hiện số mặt photo (M = 1 là phô 1 mặt, M = 2 là phô 2 mặt); N là số lượng bản photo.
Kết quả: duy nhất một số nguyên là số tiền phải trả cho 1 giao dịch.
Ví dụ:


| tienphoto.inp | tienphoto.out |
| --- | --- |
| 4 1 20 | 6000 |
| 3 2 100 | 70000 |

```cpp
```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll l,n,m;cin>>l>>m>>n;
    
    bool a4=false,a3=false,mat=false,matt=false;
    if(l==3){a3=true;}
     if(l==4) a4=true;
     if(m==1)mat=true;
     if(m==2)matt=true;
    if(n<100){
    if(mat&&a4){cout<<n*300;return 0;}
    if(mat&&a3){cout<<n*600;return 0;}
    if(matt&&a4){cout<<n*400;return 0;}
     if(matt&&a3){cout<<n*800;return 0;}
}
    if(n>=100){
    if(mat&&a4){cout<<n*250;return 0;}
    if(mat&&a3){cout<<n*500;return 0;}
    if(matt&&a4){cout<<n*350;return 0;}
     if(matt&&a3){cout<<n*700;return 0;}
}

return 0;
}
```
