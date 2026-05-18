bdinh2122 - Bài 1. Số có ba ước nguyên dương
Bạn Hiền rất yêu thích toán học, đặc biệt là Số học. Một ngày nọ, trong lúc giải một bài toán số học, Hiền muốn đếm những số tự nhiên có đúng ba ước số nguyên dương trong một phạm vi nhất định. Hãy lập trình giúp bạn Hiền đếm xem có bao nhiêu số có đúng ba ước số nguyên dương khác nhau có giá trị không lớn hơn số nguyên N cho trước.

Dữ liệu vào: File BAUOC.INP gồm một dòng ghi số nguyên dương N.
Kết quả: File BAUOC.OUT gồm một dòng ghi một số nguyên là số lượng số có đúng ba ước nguyên dương đếm được.
Ví dụ:


| bauoc.inp | bauoc.out |
| --- | --- |
| 6 | 1 |

Giải thích: Có một số tự nhiên không lớn hon 6 có đúng ba ước số là số 4 (ba ước số: 1, 2, 4)
//chưa tối ưu
```cpp
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll limit=1000006;
int main(){
    ll n;cin>>n;
    vector<bool> ip(limit);
    fill(ip.begin(),ip.end(),true);
    ip[0]=ip[1]=false;
    for(ll p=2;p*p<=limit;p++){
        if(ip[p]){
            for(ll i=p*p;i<limit;i+=p){
                ip[i]=false;
            }
        }
    }
    //cout<<ip.size()<<" ";
    ll count=0;
    for(ll u=0;u*u<=n;u++){
        if(ip[u]){
            count++;
    }
    
}
cout<<count;
    return 0;
}
```
//idea
```
saung sàng era để đnáh dấu tất cả các số ngtố trong pvi 10^6 sauu đó xét các số trong pvi n
```

bdinh2122 -Bài 2: Nghe nhạc
Tại một trung tâm thương mại, người ta lắp một băng nhạc vào một máy phát nhạc. Khách hàng muốn nghe bài hát nào chỉ việc nhấn phím ứng với bài đó. Để tìm và phát bài thứ i trên băng, máy xuất phát từ đầu cuộn băng, quay băng để bỏ qua i-1 bài ghi trước đó, thời gian quay băng bỏ qua mỗi bài và thời gian phát bài đó được tính là như nhau (băng nhạc ghi N bài hát, được mã số từ 1 đến N có thời lượng tính theo phút đủ chứa toàn bộ các bài đã cho, với mỗi bài hát ta biết thời lượng phát của bài đó). Tính trung bình, các bài hát trong một ngày được khách hàng lựa chọn với số lần (tần suất) như nhau. Hãy tìm cách ghi các bài trên băng sao cho tổng thời gian quay băng trong mỗi ngày là ít nhất.
Dữ liệu vào: File NHẠC.INP gồm 2 dòng, dòng 1 là số tự nhiên N cho biết số lượng bài hát, dòng 2 là N số nguyên dương thể hiện dung lượng tính theo phút của mỗi bài (mỗi số cách nhau 1 dấu cách).
Kết quả: File NHAC. OUT gồm:
N dòng đầu tiên thể hiện trật tự bài hát trên băng (mỗi dòng gồm hai số nguyên dương j và d cách nhau bởi dấu cách, trong đó j là mã số của bài hát cần ghi, d là thời gian tìm và phát bài đó theo trật tự ghi này).
Dòng thứ N + 1 ghi tổng số thời gian quay băng nếu mỗi bài hát được phát một lần trong ngày.
Ví dụ:


| nhac.inp | nhac.out |
| --- | --- |
| 3 8 3 4 | 2 3 3 7 1 15 25 |

```cpp
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;cin>>n;
    pair<ll,ll>a[n];
    for(int i =0; i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a,a+n);
    ll res1=0,res2=0;
    for(int i=0;i<n;i++){
        res1+=a[i].first;
        cout<<a[i].second<<" "<<res1<<endl;
        res2+=res1;
    }
    cout<<res2;
    return 0;
}
```


bdinh2122 - Bài 3: Chọn số
Cho dãy số nguyên a1, a2, . . ., an và một số nguyên dương M. Cần xác định một dãy gồm n bít t1, t2, . . ., tn (ti bằng 1 hoặc 0), để có M = t1a1 + t2a2 + . . . + tnan.
Dữ liệu vào: File CHONSO.INP gồm:
Dòng đầu tiên chứa số nguyên dương n (5 ≤ n ≤ 40);

n dòng sau tiếp theo chứa các số nguyên ai (i = 1…n) (tổng các số ai không vượt quá 109)
Dòng cuối cùng (dòng thứ n+2) chứa số nguyên M.
Kết quả: File CHONSO.OUT thông báo dãy bit tìm được.
Dữ liệu vào đảm bảo có nghiệm duy nhất.
Ví dụ:


| chonso.inp | chonso.out |
| --- | --- |
| 7 11 8 23 2 45 7 34 38 | 0110010 |

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

int n, n1;
long long M;
vector<long long> a;
vector<pair<long long, string>> half1; // Lưu: {tổng, chuỗi_bit}
string ans = "";
bool found = false;

// Quay lui nửa đầu (từ số 0 đến n1-1)
void backtrack1(int idx, long long cur_sum, string cur_bits) {
    if (idx == n1) {
        half1.push_back({cur_sum, cur_bits});
        return;
    }
    backtrack1(idx + 1, cur_sum, cur_bits + "0");
    backtrack1(idx + 1, cur_sum + a[idx], cur_bits + "1");
}

// Quay lui nửa sau (từ số n1 đến n-1)
void backtrack2(int idx, long long cur_sum, string cur_bits) {
    if (found) return;
    if (idx == n) {
        long long target = M - cur_sum;
        // Tìm kiếm nhị phân mảnh ghép còn thiếu
        auto it = lower_bound(half1.begin(), half1.end(), make_pair(target, string("")));
        if (it != half1.end() && it->first == target) {
            ans = it->second + cur_bits;
            found = true;
        }
        return;
    }
    backtrack2(idx + 1, cur_sum, cur_bits + "0");
    if (cur_sum + a[idx] <= M) {
        backtrack2(idx + 1, cur_sum + a[idx], cur_bits + "1");
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ifstream fin("CHONSO.INP"); ofstream fout("CHONSO.OUT");
    
    fin >> n; a.resize(n);
    for (int i = 0; i < n; i++) fin >> a[i];
    fin >> M;

    n1 = n / 2;
    backtrack1(0, 0, "");
    
    // C++ tự xếp tăng dần theo tổng (it->first) mà không cần viết hàm so sánh riêng
    sort(half1.begin(), half1.end()); 

    backtrack2(n1, 0, "");

    fout << ans;
    fin.close(); fout.close();
    return 0;
}
```

bdinh2122 - Bài 4: Rừng nguy hiểm
Một con hổ bị lạc trong một khu rừng nguy hiểm hình vuông, kích thước N x N, mỗi địa hình được mã hoá bởi các số 0 hoặc 1. Mỗi lần di chuyển con hổ có thể đi một bước theo hướng Đông (Đ), Tây (T), Nam (N), Bắc (B) (hay nói cách khác là một ô chung cạnh) với kiện nó đi sang một ô có cùng tính chất địa hình (giá trị) với ô nó đang đứng. Bạn hãy xem liệu con hổ có thể thoát khỏi khu rừng nguy hiểm này không, nếu có thì mất ít nhất là bao nhiêu bước dịch chuyển con hổ có thể thoát nguy được?
Dữ liệu vào: File RUNG.INP gồm:
Dòng đầu là số N (2 ≤ N ≤ 50).
Dòng thứ hai ghi hai số x, y là giá trị dòng, cột của vị trí đứng ban đầu của con hổ.
N dòng tiếp theo, mỗi dòng chứa N số (gồm số 0 hoặc số 1) thể hiện cho khu rừng hiểm.
Kết quả: File RUNG.OUT gồm:
Dòng đầu ghi số 0 nếu con hổ không thể tìm được lối ra.
Nếu có được lối ra thì:
Dòng đầu ghi số 1
Dòng thứ hai ghi số bước ngắn nhất để con hổ thoát khỏi khu rừng (tại vị trí con hổ đang đứng được tính là 1 bước).
Các dòng tiếp theo, mỗi dòng ghi một tọa độ nằm trên đường con hổ thoát ra (gồm chỉ số hàng và chỉ số cột, ngăn cách nhau bởi dấu cách). Đường đi của hổ được xuất phát từ vị trí ban đầu nó đứng.
Ví dụ:


| rung.inp | rung.out |  | rung.inp | rung.out |
| --- | --- | --- | --- | --- |
| 4 2 2 1 0 1 1 1 0 1 1 1 0 0 0 1 1 1 1 | 1 2 2 2 1 2 |  | 4 2 2 1 1 1 1 1 0 1 1 1 0 0 1 1 1 1 1 | 0 |
