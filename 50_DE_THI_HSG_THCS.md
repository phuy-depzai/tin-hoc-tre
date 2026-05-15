DANH MỤC ĐỀ THI


THCS Bà Rịa – Vũng Tàu 2022-2023
brvt2223 - Bài 1: Tìm ước chung lớn nhất
Cho một mảng A gồm N số nguyên dương: a1, a2, . . ., an.
Yêu cầu: Hãy tìm hai số nguyên trong mảng A sao cho ước chung lớn nhất của 2 số đó là lớn nhất.
Dữ liệu: đọc vào từ file CDIV. INP:
Dòng đầu tiên chứa số nguyên N (2 ≤ N ≤ 2.105).
Dòng thứ hai chứa N số nguyên a, mỗi số cách nhau một ký tự trắng (1 ≤ a ≤ 106).
Kết quả: ghi ra file CDIV.OUT một số nguyên duy nhất là ước chung lớn nhất tìm được.
Ví dụ:


| CDIV. INP | CDIV.OUT |
| --- | --- |
| 6 12 5 6 4 7 10 | 6 |

brvt2223 - Bài 2: Đố vui tin học
Để tổng kết phát thưởng cho cuộc thi Đố vui tin học. Ban tổ chức có N phần quà được đánh thứ tự từ 1 tới N, phần quà thứ i có giá trị là ai. Ban tổ chức yêu cầu học sinh chọn các phần quà theo quy tắc sau:
Phần quà chọn sau phải có số thứ tự lớn hơn phần quà chọn trước đó.
Phần quà chọn sau phải có giá trị lớn hơn phần quà chọn trước đó ít nhất K giá trị.
Yêu cầu: Hãy giúp các bạn học sinh lựa chọn theo quy tắc ban tổ chức đặt ra sao cho số lượng phần quà được chọn là nhiều nhất.
Dữ liệu: đọc vào từ File GIFT.INP:
Dòng đầu chứa 2 số nguyên dương N và K cách nhau một ký tự trắng (N ≤ 104, K ≤ 105).
N dòng tiếp theo, dòng thứ i chứa số nguyên dương ai (ai ≤ 106) là giá trị của phần quà thứ i.
Kết quả: ghi ra file GIFT.OUT gồm một dòng duy nhất chứa số lượng phân quà nhiều nhất thỏa mãn yêu cầu.
Ví dụ:


| gift.inp | gift.out |
| --- | --- |
| 5 2 4 5 6 | 3 |



| 4 8 |  |
| --- | --- |

brvt2223 - Bài 3: Trò chơi
Nhân kỷ niệm ngày thành lập Đoàn, cô Tổng phụ trách tổ chức 1 trò chơi có thưởng cho các bạn lớp 9 như sau: Có N ô vuông được vẽ thẳng hàng trên sân trường, các ô vuông được đánh số từ 1, 2, ..., N. Mỗi ô vuông i (1 ≤ i ≤ N) có giá trị năng lượng là hi. Một bạn học sinh đang ở ô vuông thứ i, bạn ấy có thể nhảy tới ô vuông tiếp theo các cách:
Nếu bạn ở ô vuông thứ i thì bạn có thể nhảy đến ô vuông thứ tự i +1, i+2,	i+k.
Chi phí năng lượng của bạn tiêu hao cho 1 lần nhảy là |hj – hi| với hj là ô vuông đích mà bạn nhảy tới.
Bạn học sinh nào di chuyển từ ô số 1 đến ô số N với chi phí năng lượng thấp nhất sẽ được cô thưởng 1 phần quà.
Yêu cầu: Hãy tìm chi phí thấp nhất để giúp các bạn học sinh nhảy từ ô vuông số 1 đến ô vuông thứ N.
Dữ liệu: đọc vào từ file GAME.INP gồm:
Dòng đầu ghi 2 số N và K cách nhau một ký tự trắng: N là số ô vuông (2 ≤ N
≤ 105), K là số ô vuông tối đa bạn học sinh có thể nhảy qua (1 ≤ K ≤ 100).
Dòng thứ hai chứa N giá trị hi (1 ≤ h ≤ 104), mỗi số cách nhau một ký tự trắng là chi phí năng lượng của ô vuông thứ i tương ứng.
Lưu ý: Các giá trị là số nguyên.
Kết quả: ghi ra file GAME.OUT một số là tổng chi phí phát sinh tối thiểu.
Ví dụ:


| game.inp | game.out |
| --- | --- |
| 5 3 10 25 35 40 20 | 20 |

Giải thích:
Cách nhảy của bạn học sinh sẽ là: 1  2 5, tổng chi phí sẽ là |25 - 10|+|20-25|=20.
THCS Bình Định 2021-2022
bdinh2122 - Bài 1. Số có ba ước nguyên dương
Bạn Hiền rất yêu thích toán học, đặc biệt là Số học. Một ngày nọ, trong lúc giải một bài toán số học, Hiền muốn đếm những số tự nhiên có đúng ba ước số nguyên dương trong một phạm vi nhất định. Hãy lập trình giúp bạn Hiền đếm xem có bao nhiêu số có đúng ba ước số nguyên dương khác nhau có giá trị không lớn hơn số nguyên N cho trước.

Dữ liệu vào: File BAUOC.INP gồm một dòng ghi số nguyên dương N.
Kết quả: File BAUOC.OUT gồm một dòng ghi một số nguyên là số lượng số có đúng ba ước nguyên dương đếm được.
Ví dụ:


| bauoc.inp | bauoc.out |
| --- | --- |
| 6 | 1 |

Giải thích: Có một số tự nhiên không lớn hon 6 có đúng ba ước số là số 4 (ba ước số: 1, 2, 4)
bdinh2122 - Bài 2: Nghe nhạc
Tại một trung tâm thương mại, người ta lắp một băng nhạc vào một máy phát nhạc. Khách hàng muốn nghe bài hát nào chỉ việc nhấn phím ứng với bài đó. Để tìm và phát bài thứ i trên băng, máy xuất phát từ đầu cuộn băng, quay băng để bỏ qua i-1 bài ghi trước đó, thời gian quay băng bỏ qua mỗi bài và thời gian phát bài đó được tính là như nhau (băng nhạc ghi N bài hát, được mã số từ 1 đến N có thời lượng tính theo phút đủ chứa toàn bộ các bài đã cho, với mỗi bài hát ta biết thời lượng phát của bài đó). Tính trung bình, các bài hát trong một ngày được khách hàng lựa chọn với số lần (tần suất) như nhau. Hãy tìm cách ghi các bài trên băng sao cho tổng thời gian quay băng trong mỗi ngày là ít nhất.
Dữ liệu vào: File NHẠC.INP gồm 2 dòng, dòng 1 là số tự nhiên N cho biết số lượng bài hát, dòng 2 là N số nguyên dương thể hiện dung lượng tính theo phút của mỗi bài (mỗi số cách nhau 1 dấu cách).
Kết quả: File NHAC. OUT gồm:
N dòng đầu tiên thể hiện trật tự bài hát trên băng (mỗi dòng gồm hai số nguyên dương j và d cách nhau bởi dấu cách, trong đó j là mã số của bài hát cần ghi, d là thời gian tìm và phát bài đó theo trật tự ghi này).
Dòng thứ N + 1 ghi tổng số thời gian quay băng nếu mỗi bài hát được phát một lần trong ngày.
Ví dụ:


| nhac.inp | nhac.out |
| --- | --- |
| 3 8 3 4 | 2 3 3 7 1 15 25 |

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

THCS Bình Định 2022-2023
bdinh2223 - Bài 1. Cặp số tương đồng
Bạn An rất yêu thích toán học, đặc biệt là Số học. Một ngày nọ, trong lúc giải một bài toán số học, An nhận ra có nhiều cặp số có tổng các chữ số trong biểu diễn thập phân của chúng bằng nhau và An gọi những cặp số như thế là cặp số tương đồng. Ví dụ, cặp số 69 và 555 là cặp số tương đồng vì cả hai đều có tổng các chữ số là 6+9=5+5+5=15. Cho hai số nguyên dương l, r. Hãy giúp Hiền tìm xem cặp số tương đồng có giá trị trong đoạn từ 1 tới r và hiệu hai số là lớn nhất.
Dữ liệu vào: File SIMILAR.INP gồm một dòng chứa hai số nguyên không âm l, r không vượt quá 107.
Dữ liệu ra: File SIMILAR.OUT gồm một dòng ghi một số nguyên là hiệu lớn nhất tìm được.
Giới hạn: 50% số test có l,r ≤ 103.
Ví dụ:


| similar.inp | SIMILAR.OUT |
| --- | --- |
| 10 30 | 18 |

Giải thích: Cặp số cần tìm là 12 và 30 (có tổng các chữ số là 1+2=3). Ngoài
ra, còn có một số cặp số tương đồng khác như 14 và 23 hay 16 và 25.
bdinh2223 - Bài 2: Hình chữ nhật lớn nhất
Trong mặt phẳng Oxy vẽ đường tròn tâm O bán kính R. Ta xác định các hình chữ nhật có toạ độ nguyên, nằm trên hình tròn (O,R) và có các cạnh song song với các trục tọa độ (đỉnh của hình chữ nhật nằm ở bên trong hoặc trên đường tròn).
Lưu ý:
Hình vuông được xem là hình chữ nhật có hai cạnh bằng nhau.
Điểm M(xo,yo) nằm trong hoặc trên đường tròn (O,R) khi và chỉ khi các tọa độ của nó thỏa mãn:

2√𝑥2 + 𝑦2 ≤ 𝑅
𝑜	𝑜
Yêu cầu: Xác định giá trị lớn nhất về diện tích trong các hình chữ nhật thỏa mãn yêu cầu trên.
Dữ liệu vào: Từ file văn bản DIENTICH.INP gồm một số nguyên dương R duy nhất (R<10).

Dữ liệu ra: File văn bản DIENTICH.OUT chứa 1 số nguyên duy nhất cho biết giá trị lớn nhất về diện tích trong các hình chữ nhật. Nếu không tồn tại hình chữ nhật thì ghi số 0.
Ví dụ:


| dientich.inp | dientich.out | Giải thích |
| --- | --- | --- |
| 5 | 48 | Hình chữ nhật có diện tích lớn nhất là 48 có đỉnh là: (-3;4), (-3,-4), (3;-4), (3;4) Nằm trên đường tròn (O,5) |
| 3 | 12 | Hình chữ nhật có diện tích lớn nhất là 12 có đỉnh là: (-2;2), (-2,-2), (2;-2), (2;2) Nằm trên đường tròn (O,3) |
| 1 | 0 | Không có hình chữ nhật có tọa độ nguyên nằm trong hình tròn (O,1) |

bdinh2223 - Bài 3: Trò chơi xâu ký tự
Bạn được cho một xâu ký tự gồm N ký tự. Đầu tiên, bạn được sắp xếp lại các ký tự trong xâu theo một thứ tự bất kỳ. Sau đó, hãy chia xâu ký tự này thành chính xác K xâu ký tự liên tiếp không rỗng sao cho xâu ký tự có thứ tự từ điển lớn nhất là nhỏ nhất có thể.
Xâu A có thứ tự từ điển nhỏ hơn xâu B khi thỏa một trong các điều kiện sau:
A là tiền tố của B và A khác B.
Tồn tại số i (1 ≤ i<min(|A|,|B|)) sao cho A[i] < B[i] và A[j] = B[j] với mọi j
(1<j<min(|A|, |B|). Ở đây, |A| là độ dài của xâu A, min(x,y) là giá trị nhỏ hơn giữa x và y.
Ví dụ:
+ abc có thứ tự từ điển nhỏ hơn ad.
+ ab có thứ tự từ điển nhỏ hơn abb.
Dữ liệu vào: File STRGAME.INP gồm:
Dòng đầu tiên gồm hai số nguyên dương N, K (1 ≤ K ≤ N ≤ 100).

Dòng thứ hai gồm xâu chứa N ký tự. Các ký tự là các chữ cái tiếng Anh in thường.
Dữ liệu ra: File STRGAME.OUT gồm:
Gồm một dòng duy nhất là xâu ký tự có thứ tự từ điển lớn nhất của phương án tối ưu.
Giới hạn:
20% số test có xâu ký tự gồm toàn ký tự a.
20% số test tiếp theo có K = N.
60% số test còn lại không có ràng buộc gì thêm.
Ví dụ:


| strgame.inp | strgame.out |
| --- | --- |
| 4 2 baba | Ab |
| 4 2 baca | abc |

Giải thích:
Ở ví dụ đầu tiên, ta có thể sắp xếp baba thành abab và chia thành hai xâu con ab và ab. Khi đó xâu ký tự có thứ tự từ điển lớn nhất là ab. Ta cũng có thể sắp xếp thành abba và chia thành hai xâu abb và a, tuy nhiên phương án này sẽ cho xâu có thứ tự từ điển lớn nhất là abb, lớn hơn so với ab ở phương án đầu tiên.
Ở ví dụ thứ hai, ta có thể sắp xếp baca thành abca và chia thành hai xâu con abc và a. Khi đó xâu ký tự có thứ tự từ điển lớn nhất sẽ là abc.
bdinh2223 - Bài 4: Khoanh vùng phân loại
Một mảnh vườn hình chữ nhật được chia thành các ô đất nhỏ gồm M hàng, N cột để ươm các loại cây giống khác nhau. Độ dài cạnh mỗi ô được xem là 1 đơn vị chiều dài, mỗi ô sẽ ươm một trong số các loại cây cần ươm. Để phân vùng các loại cây giống khác nhau trong khu vườn, người làm vườn tiến hành căng dây để phân biệt theo các đường ranh giới các ô đất. Dây được căng xung quanh mảnh vườn và cạnh của ô nếu 2 ô chứa cạnh đó ươm hai loại cây khác nhau.
Yêu cầu: Tính độ dài của dây cần dùng để khoanh vùng các loại cây trong mảnh vườn theo yêu cầu.
Dữ liệu vào: File văn bản VUONCAY.INP có cấu trúc như sau:
Dòng đầu chứa 2 số nguyên dương M, N (0<M,N<100).
M dòng tiếp theo mỗi dòng chứa N số nguyên dương. Giá trị ở dòng thứ 1, cột thứ j là aij với (1 ≤ i ≤ M;1 ≤ j ≤ N và 1 ≤ aij ≤ 100) để mô tả loại cây được ươm tại ô ở hàng i cột j của mảnh vườn (các giá trị giống nhau để chỉ cùng một loại cây).

Dữ liệu ra: File văn bản VUONCAY.OUT chứa một số nguyên dương duy nhất cho biết chiều dài của dây được dùng khoanh vùng theo yêu cầu của người làm vườn.
Ví dụ:


| vuoncay.inp | vuoncay.out | Giải thích |
| --- | --- | --- |
| 4 5 1 1 2 2 4 3 3 3 4 4 3 3 3 4 4 1 2 2 2 2 | 32 | Chu vi: 18 Dây dọc bên trong: 5 Dây ngang bên trong: 9 Tổng cộng chiều dài dây: 32 |

THCS Bình Dương 2021-2022
bduong2122 – Câu 1: Chở hàng
Mẹ nhờ Bo ra chợ lấy hàng hóa để chuẩn bị bán hàng vào dịp Tết sắp đến. Do chưa biết hàng hóa được đóng gói như thế nào nên Bo mang theo thùng chứa hàng chứa được tối đa N Kg. Khi đến điểm bán hàng, Bo thấy cửa hàng chỉ đóng gói hàng vào 02 loại hộp A Kg và B Kg.
Yêu cầu: Bạn hãy giúp Bo tính toán số kg hàng hóa tối đa mà Bo có thể chở một chuyến, biết rằng số kg hàng hóa của cửa hàng đang có nhiều hơn khả năng chở hàng của thùng trên xe Bo.
Dữ liệu vào: Số nguyên N, A, B (1 ≤ A, B, N ≤ 1000).
Kết quả: Một số nguyên duy nhất là số Kg tối đa hàng hóa tối đa mà Bo có thể chở một chuyến.
Ví dụ:


| chohang.inp | chohang.out | Giải thích |
| --- | --- | --- |
| 77 17 25 | 76 | Bo sẽ chở 3 gói hàng 17 Kg và 1 gói hàng 25 Kg |

bduong2122 – Câu 2: Vòng tay
Để có tiền đi chơi lễ hội trong mùa xuân năm nay, Bo quyết định làm các vòng tay để bán cho du khách. Bo tham gia khóa học kết các vòng tay của một cửa hàng. Bo muốn ghi chép lại các kiểu kết vòng tay nên quy ước mỗi loại hạt dùng để kết vòng tay là một con số từ 1 đến 9. Một vòng tay được kết từ một dãy các hạt mẫu lặp đi lặp lại k lần và luôn kết thúc bằng hạt cùng loại với hạt bắt đầu. Bạn hãy giúp Bo tìm số lượng các hạt trong dãy hạt mẫu để Bo dễ dàng kết vòng tay nhé.
Dữ liệu vào: Số nguyên N (1 ≤ N ≤ 100) và một dãy ai (1 ≤ ai ≤ 9) là các hạt được kết trong vòng tay.
Kết quả: Một số nguyên duy nhất là số lượng các hạt trong dãy hạt mẫu.
Ví dụ:


| vongtay.inp | vongtay.out | Giải thích |
| --- | --- | --- |
| 13 5 3 1 3 5 2 5 3 1 3 5 2 5 | 6 | Dãy hạt mẫu là 5 3 1 3 5 2 có 6 hạt |


bduong2122 – Câu 3: Tính toán
Bo quyết định mua nguyên liệu kết vòng tay để bán cho du khách. Đầu tiên, Bo vay tiền của bạn bè để mua nguyên liệu và khi bán được vòng tay sẽ trả lại tiền đã vay. Bo liệt kê tất cả N các khoản tiền bán vòng tay và các khoản vay từ bạn bè trong sổ ghi chép được đánh số vị trí từ 1 đến N.
Khi có đủ tiền trả cho khoản vay thì Bo sẽ trả ngay cho người mình đang vay không nhất thiết phải bán hết vòng tay mới trả. Bo luôn bắt đầu ở vị trí 0 và kết thúc phải là vị trí cuối cùng trong danh sách liệt kê. Hãy giúp Bo tìm số bước ngắn đi nhất để thu tiền bán vòng tay và trả tất cả nợ cho bạn bè. Trong trường hợp Bo không đủ tiền trả các khoản vay thì Bo quay về vị trí cuối cùng và vẫn còn nợ.
Dữ liệu vào: Số nguyên N (1 ≤ N ≤ 105) và ai số nguyên (-103 ≤ ai ≤ 103) Dữ liệu xuất: Một số nguyên duy nhất là số bước ngắn đi nhất Bo phải đi. Ví dụ:

| tinhtoan.inp | tinhtoan.out | Giải thích |
| --- | --- | --- |
| 5 100 -200 250 -200 150 | 9 | Bắt đầu 100 -200 250 -200 150 Đi 1 đơn vị nhận được 100 (số bước: 1) Đi tiếp 2 đơn vị nhận được 350 (số bước: 3) Quay lại 1 đơn vị trả 200 còn lại 150 (số bước: 4) Đi tiếp 3 đơn vị nhận được 150 (số bước: 7) Quay lại 1 đơn vị và trả 200 (số bước: 8) |
| 5 100 -200 250 -200 10 | 7 | Bắt đầu 100 -200 250 -200 10 Đi 1 đơn vị nhận được 100 (số bước: 1) Đi tiếp 2 đơn vị nhận được 350 (số bước: 3) Quay lại 1 đơn vị trả 200 còn lại 150 (số bước: 4) Đi tiếp 3 đơn vị nhận được 10 (số bước: 7) |

bduong2122 – Câu 4: Lễ hội
Đã đến lễ hội mùa xuân, Bo rất vui vì đã có đủ tiền tham gia lễ hội. Trong rất nhiều trò chơi được tổ chức, Bo muốn sắp xếp thời gian để có thể tham gia nhiều trò chơi nhất có thể mà không trùng về mặt thời gian.
Yêu cầu: Hãy giúp Bo xác định số lượng trò chơi nhiều nhất mà Bo có thể tham gia.
Dữ liệu vào:

Dòng đầu ghi số nguyên N (1 ≤ N ≤ 1000) là số lượng trò chơi;
N dòng tiếp theo, dòng thứ i ghi hai số nguyên ai, bi (1 ≤ a ≤ b ≤ 10; i = 1 .. N) là thời gian bắt đầu và kết thúc của trò chơi thứ i.
Ví dụ:


| lehoi.inp | lehoi.out | Giải thích |
| --- | --- | --- |
| 6 3 8 9 12 6 10 1 4 2 7 11 4 | 3 | Đầu tiên Bo tham gia trò chơi thứ 4, sau đó tham gia trò chơi thứ 3 và cuối cùng tham gia trò chơi thứ 6. |

THCS Bình Phước 2018-2019
bphuoc1819 - Bài 1: Chu vi tam giác
Yêu cầu: cho độ dài ba cạnh tam giác lần lượt là a, b, c hãy tính chu vi tam giác đó. Dữ liệu vào: lấy từ file CHUVI.INP ba số nguyên dương a, b, c 1  a, b, c  1000 Kết quả: ghi ra file CHUVI.OUT chu vi tam giác đã cho.
Ví dụ:


| chuvi.inp | chuvi.out |
| --- | --- |
| 3 5 4 | 12 |
| 2 7 8 | 17 |

bphuoc1819 - Bài 2: Số lượng chữ số
Yêu cầu: cho một xâu ký tự S gồm các chữ cái tiếng Anh in thường và các chữ số, hãy đếm xem có bao nhiêu chữ số trong xâu đã cho.
Dữ liệu vào: lấy từ file SOCHUSO.INP xâu S có không quá 200 ký tự.
Kết quả: ghi ra file SOCHUSO.OUT số lượng chữ số trong xâu S.
Ví dụ:


| sochuso.inp | sochuso.out |
| --- | --- |
| nam2018 | 4 |
| ngay06thang03nam2018 | 8 |

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



Ràng buộc:
Có 60% số test ứng với 60% số điểm của bài có
Có 20% số test ứng với 20% số điểm của bài có
Có 20% số test ứng với 20% số điểm của bài có
THCS Bình Phước 2019-2020
bphuoc1920 - Bài 1: Điểm trung bình

N 103, a N  105 , a N  106 , a

103
 104
 109

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
bphuoc1920 - Bài 4: Mật khẩu
Yêu cầu: Việc bảo mật thông tin người dùng ngày nay là vấn đề đặt ra cho mọi người sử dụng máy tính Để tăng tính an toàn cho tài khoản của mình, Nam quyết định giấu mật khẩu truy cập vào dãy mã gồm các ký tự trong bảng chữ cái tiếng Anh và các ký tự số. Do lâu ngày không sử dụng nên Nam không nhớ, Nam muốn nhờ các bạn lập trình tìm lại mật khẩu giúp bạn ấy. Mật khẩu là dãy các số liên tiếp trong dãy mã có giá trị lớn nhất.
Dữ liệu vào: lấy từ file MATKHAU.INP xâu ký tự S không quá 255 ký tự.
Kết quả: ghi ra file MATKHAU.OUT là số nguyên P là mật khẩu cần tìm, nếu trong dãy mã không chứa số hoặc chỉ chứa các số 0 thì P = 0
Ví dụ:


| matkhau.inp | matkhau.out |
| --- | --- |
| 456abfhcj12345612 | 12345612 |
| Pass9578a0001453 | 9578 |

THCS Bình Phước 2020-2021
bphuoc2021 - Bài 1: Tổng chữ số
Yêu cầu: cho số nguyên dương N có hai chữ số, hãy tính tổng các chữ số của N
Dữ liệu vào: lấy từ file tongchuso.inp duy nhất một số nguyên N
Kết quả: ghi ra file tongchuso.out duy nhất một số nguyên là tổng các chữ số của N
Ví dụ:


| tongchuso.inp | tongchuso.out |
| --- | --- |
| 24 | 6 |
| 45 | 9 |

bphuoc2021 - Bài 2: Số anh cả
Cho số nguyên N (N > 0). M gọi là số anh cả của N nếu M được tạo thành từ các chữ số của N nhưng M lớn nhất. Chẳng hạn: N = 216 thì M = 621

Dữ liệu vào: lấy từ file soanhca.inp duy nhất một số nguyên N
Kết quả: ghi ra file soanhca.out duy nhất một số nguyên M
Ví dụ:


| soanhca.inp | soanhca. out |
| --- | --- |
| 216 | 621 |
| 10201 | 21100 |



Giới hạn:
Có 80% số điểm ứng với
Có 20% số điểm ứng với
bphuoc2021 - Bài 3: Bỏ sỏi

N  250
N  250

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

THCS Cà Mau 2023-2024
Bài 1: Đếm kí tự
Xâu là dãy liên tiếp các kí tự (bao gồm kí tự chữ Latinh, số và dấu cách).
Yêu cầu: Cho xâu S có N kí tự (chỉ chứa các kí tự chữ Latinh và in thường). Hãy đếm số lần xuất hiện của các kí tự có trong xâu S.
Dữ liệu vào: Từ tệp tin văn bản demkitu.inp gồm một dòng duy nhất chứa xâu S có N ký tự (1 ≤ N ≤ 106).
Kết quả: Ghi ra tệp văn bản demkitu.out gồm nhiều dòng, mỗi dòng gồm hai kết quả lần lượt là kí tự và số lần xuất hiện của nó trong xâu S (các ký tự được sắp xếp theo thứ tự Alpha), hai kết quả được ngăn cách nhau bởi một khoảng trắng.
Ví dụ:


| demkitu.inp | demkitu.out | Giải thích |
| --- | --- | --- |
| dbakabk | a 2 b 2 d 1 k 2 | Có 4 kí tự xuất hiện trong xâu S là a, b, d và k, với số lần xuất hiện: Kí tự ‘a’: 2 lần; Kí tự ‘b’: 2 lần; Kí tự ‘d’: 1 lần; Kí tự ‘k’: 2 lần; |

Bài 2: Trò chơi dân gian
Trong buổi hội trại mừng ngày thành lập đoàn 26/3, ban tổ chức yêu cầu các đội tham gia một trò chơi tập thể. Có tất cả m câu hỏi và n đội chơi tham gia, với câu hỏi thứ i (1 ≤ i ≤ m), đội thứ j (1 ≤ j ≤ n) sẽ được ban giám khảo cho điểm là aij. Sau trò chơi, đội chiến thắng là đội có tổng số điểm của m câu hỏi là cao nhất.
Yêu cầu: Hãy giúp ban tổ chức tìm ra đội chiến thắng và tổng số điểm của đội đó?

Dữ liệu vào: Tệp tin văn bản trochoi.inp, gồm:
Dòng đầu chứa hai số nguyên m và n (1 ≤ m, n ≤ 103).
m dòng sau, mỗi dòng chứa n số nguyên aij (1 ≤ aij ≤ 106) thể hiện số điểm câu hỏi thứ i của đội thứ j, các số được ngăn cách nhau bởi một khoảng trắng.
Dữ liệu vào đảm bảo chỉ có duy nhất một đội chiến thắng.
Kết quả: Ghi ra tệp tin văn bản trochoi.out gồm một dòng duy nhất chứa hai số nguyên lần lượt là số thứ tự và tổng số điểm của đội chiến thắng (hai số ngăn cách nhau bởi một khoảng trắng).
Ví dụ:


| trochoi.inp | trochoi.out | Giải thích |
| --- | --- | --- |
| 4 5 2 5 4 1 2 4 6 7 3 3 6 9 5 4 3 3 8 1 2 4 | 2 28 | Có 4 câu hỏi và 5 đội tham gia chơi Số điểm 4 câu hỏi của đội 1 lần lượt là 2, 4, 6 và 3  tổng điểm là 15 Tương tự ta có tổng số điểm của đội 2, 3, 4, 5 lần lượt là 28, 17, 10 và 12. => Đội 2 là đội chiến thắng với 28 điểm. |

Bài 3. Số nguyên tố
Số ngyên tố là số nguyên dương chỉ có duy nhất hai ước là 1 và chính nó. Ví dụ số 11 là số nguyên tố vì nó chỉ có hai ước là 1 và 11; số 15 không phải là số nguyên tố vì nó có 4 ước gồm 1, 3, 5, 15; số 1 không phải là số nguyên tố vì nó có 1 ước là 1.
Yêu cầu: Cho số nguyên N (1 ≤ N ≤ 106) và N đoạn số nguyên [Li, Ri] (1 ≤ Li < Ri
≤ 107; 1 ≤ i ≤ N). Hãy tìm số lượng số nguyên tố thuộc mỗi đoạn [Li, Ri].
Dữ liệu vào: Từ tệp tin văn bản snt.inp, gồm:
Dòng đầu tiên chứa số nguyên N.
N dòng tiếp theo, dòng thứ i chứa hai số nguyên Li, Ri (ngăn cách nhau bởi một khoảng trắng).
Kết quả: Ghi ra tệp tin văn bản snt.out gồm N dòng, dòng thứ i ghi một số nguyên là số lượng số nguyên tố thuộc đoạn [Li, Ri].
Ví dụ:


| snt.inp | snt.out | Giải thích |
| --- | --- | --- |
| 2 14 16 11 25 | 0 5 | Số lượng số nguyên tố thuộc 2 đoạn tương ứng: Đoạn [14, 16]: không có số nguyên tố; Đoạn [11, 25]: có 5 số nguyên tố là 11, 13, 17, 19, 23. |

Ràng buộc:
Có 40% số test với 1≤ N ≤ 103; 1 ≤ Li < Ri ≤ 103.

Có 60% số test với 103 ≤ N ≤ 106; 1≤ Li < Ri ≤ 107.
THCS Cần Thơ 2021-2022
Bài 1. Đếm số
Cho một dãy số gồm n số nguyên.
Yêu cầu:
Hãy lập trình xác định số lượng các số chia hết cho 3 và không chia hết cho 9 trong dãy số đã cho.
Dữ liệu: Vào từ file văn bản DEMSO.INP có cấu trúc như sau:
Dòng đầu ghi một số nguyên dương n (n ≤ 106).
Dòng thứ hai ghi n số nguyên cho biết dãy số, các số trong dãy có giá trị tuyệt đối không vượt quá 109.
Kết quả: Ghi ra file văn bản DEMSO.OUT chứa một số nguyên là kết quả tìm được.
Ví dụ:


| DEMSO.INP | DEMSO.OUT |
| --- | --- |
| 6 1 2 3 15 816 18 | 4 |

Bài 2. Số lẻ
Nam có thói quen thường xuyên thực hiện các phép tính nhanh để rèn luyện khả năng tư duy. Những lần Nam di chuyển bằng xe buýt, nhìn qua cửa sổ xe buýt, Nam thoáng thấy một biển quảng cáo. Nam không chú ý tới nội dung mà chỉ nhớ trên đó có hai số nguyên dương a và b (a ≤ b). Nam có trí nhớ tốt và có khả năng tính nhanh cũng rất tốt, Nam đã tính được số lượng số nguyên trong đoạn [a; b] có tổng các chữ số là số lẻ. Khi về tới nhà, Nam kiểm tra trên máy tính đã xác định đúng số lượng số nguyên trong đoạn [a; b] có tổng các chữ số là số lẻ.
Yêu cầu: Hãy lập trình xác định kết quả mà Nam đã tính được.
Dữ liệu: Vào từ file văn bản SOLE.INP gồm một dòng chứa hai số nguyên a và b (1≤a≤b≤109).
Kết quả: Ghi ra file văn bản SOLE.OUT chứa một số nguyên là kết quả Nam đã tính được.
Ví dụ:


| SOLE.INP | SOLE.OUT | Giải thích |
| --- | --- | --- |
| 10 20 | 5 | Trong ví dụ, các số có tổng các chữ số là số lẽ gồm: 10, 12, 14, 16, 18 |

Ràng buộc:
Có ít nhất 70% số test ứng với 70% số điểm của bài thỏa mãn: (1≤a≤b≤106).
Có 30% số test còn lại ứng với 30% số điểm của bài thỏa mãn: (1≤a≤b≤109).

Bài 3. Kiểu mới
Trong công ty ABC, văn bản gốc chứa các từ chỉ gồm chữ cái La tinh thường và dấu cách. Khi chuyển văn bản này sang chuẩn CamelCase: chữ cái đầu tiên của văn bản có thể bắt đầu bằng chữ cái thường hoặc hoa; chữ cái đầu tiên của mỗi từ tiếp theo được viết hoa và không có dấu cách. Khi Giám đốc điều hành cũ về hưu, Giám đốc điều hành mới quyết định sẽ lưu trữ văn bản theo chuẩn snake case. Chuẩn snake_case được xây dựng theo quy tắc ' sau: giữa hai từ được cách nhau bởi dấu ‘’, tất cả các chữ cái trong văn bản đều là chữ cái thường. Ví dụ, ở chuẩn CamelCase thông tin có dạng abCde thi sang chuẩn snake case sẽ có dạng abcde.
Yêu cầu: Hãy lập trình đổi thông tin từ chuẩn CamelCase sang chuẩn snake case.
Dữ liệu: Vào từ file văn bản KIEUMOI.INP gồm:
Dòng đầu tiên chứa số nguyên n (1 <n≤100).
Trong n dòng tiếp theo, mỗi dòng chứa một xâu độ dài không quá 1000 ký tự theo chuẩn CamelCase.
Kết quả: Ghi ra file văn bản KIEUMOI.OUT các xâu đã cho dưới dạng chuẩn snake_case, mỗi xâu trên một dòng.
Ví dụ:


| KIEUMOI.INP | KIEUMOI.OUT |
| --- | --- |
| 4 CamelCase camelCase toBeOrNotToBe ABCDE | camel_case camel_case to_be_or_not_to_be a_b_c_d_e |

Bài 4. Quân xe
Trên bàn có một bàn cờ là lưới ô vuông kích thước n x n. Các hàng được đánh số từ 1 đến
các cột được đánh số từ trái qua phải bắt đầu từ 1. Người ta đặt n quân xe lên bản cờ sao cho mỗi hàng có đúng một quân xe và mỗi cột
cũng có đúng một quân xe. Mỗi quân xe được xác định trên bàn cờ có vị trí ở hàng x, cột y (với 1≤ x, y ≤ n). Khi mang bàn cờ này sang bàn khác, bàn cờ bị xoay đi một góc 900 theo chiều kim đồng hồ.
Yêu cầu: Hãy xác định vị trí (hàng, cột) của từng quân xe theo trạng thái mới của bàn cờ và đưa ra các vị trí tìm được theo chiều tăng dần của hàng.

Dữ liệu: Vào từ file văn bản QUANXE.INP gồm:
Dòng đầu tiên chứa số nguyên n (1≤ n ≤ 105).
n dòng tiếp theo, mỗi dòng chứa hai số nguyên x và y là vị trí hàng x, cột y của mỗi quân xe trong bàn cờ lúc đầu.
Kết quả: Ghi ra file văn bản QUANXE.OUT chứa n dòng, mỗi dòng hai số nguyên là vị trí của quân xe theo trạng thái mới của bàn cờ.
Ràng buộc:
Có ít nhất 70% số test ứng với 70% số điểm của bài thỏa mãn: 1 ≤ n ≤103.
Có 30% số test còn lại ứng với 30% số điểm của bài thỏa mãn: 1≤ n ≤ 105.
Ví dụ:


| QUANXE.INP | QUANXE.OUT |
| --- | --- |
| 5 1 4 2 2 3 3 4 5 5 1 | 1 1 1 4 3 3 4 5 5 2 |

THCS Đà Nẵng 2023-2024 Bài 1. TÍNH TỔNG
Cho một dãy số nguyên dương có N phần tử và một chỉ số K. Hãy tính tổng
K phần tử lớn nhất trong dãy số nguyên dương đã cho.
Dữ liệu vào: Đọc từ file văn bản TONG.INP
Dòng đầu tiên chứa hai số nguyên dương N và K.
Dòng thứ 2 chứa N số nguyên dương lần lượt là giá trị các phần tử trong dãy số.
Kết quả: Ghi vào file văn bản TONG.OUT số nguyên theo yêu cầu đề bài.
Ví dụ:


| TONG.INP | TONG.OUT |
| --- | --- |
| 10 3 1 2 3 4 5 6 7 8 9 10 | 27 |

Ràng buộc:
Có 40% test tương ứng với K=2, n ≤ 10;
Có 30% test tương ứng với K=3, n ≤ 100;
Có 30% test tương ứng với n ≤ 105.
Bài 2. OẲN TÙ XÌ

Nhân dịp Tết cổ truyền, Đức và Nhi được bố mẹ cho rất nhiều kẹo, vì được nghỉ học nên Đức và Nhi bày ra một trò chơi như sau: Hai bạn chơi oẳn tù xì với nhau, ai thắng có thể lấy 1 viên kẹo. Để ghi lại kết quả Đức sử dụng các kí tự để ghi chú, nếu Đức thắng sẽ dùng kí tự D, nếu Nhi thắng sẽ dùng kí tự N, nếu hòa sẽ dùng kí tự H.
Yêu cầu: Hãy cho biết số lượng kẹo của Đức và Nhi là bao nhiêu sau khi kết thúc trò chơi.
Dữ liệu vào: Đọc từ file văn bản GAME.INP, chuỗi kí tự dùng để ghi lại kết quả.
Kết quả: Ghi vào file văn bản GAME.OUT, 2 số nguyên lần lượt là số kẹo của Đức và Nhi.
Ví dụ:


| GAME.INP | GAME.OUT | Giải thích |
| --- | --- | --- |
| HDNDNNNDDNN | 4 6 | Hai bạn chơi 11 ván, trong đó Đức thắng 4 ván, Nhi thắng 6 ván và 1 ván hòa. |

Ràng buộc:
Có 40% Chuỗi kí tự có độ dài tối đa 200 kí tự;
Có 60% Chuỗi kí tự có độ dài tối đa 103 kí tự;
Bài 3. CHÙM ĐÈN
Dọc theo khu vườn nhà Tí được trang trí bởi n chùm bóng đèn a1, a2, …, an, chùm bóng đèn thứ i có ai bóng. Để chuẩn bị cho buổi tiệc sinh nhật của mình, Tí quyết định chọn một dãy các chùm đèn liên tiếp trong khu vườn để bố trí khu vực chụp hình cho khách mời đến dự tiệc. Ngoài ra, để khu vực chụp hình không quá đơn điệu, Tí muốn dãy các chùm đèn được chọn có đúng k chùm đèn có số bóng là số lẻ. Vì có nhiều cách chọn, Tí đang rất phân vân không biết nên chọn như thế nào.
Bạn là một trong những người bạn thân của Tí, hãy giúp Tí đếm số cách chọn các chùm đèn trong khu vườn thỏa mãn yêu cầu Tí đặt ra.
Dữ liệu vào: Đọc từ tệp văn bản CHUMDEN.INP
Dòng thứ nhất chứa hai số nguyên n và k (1≤ k ≤ n ≤ 106).
Dòng thứ hai chứa n số nguyên a1, a2, …, an (1 ≤ ai ≤ 106), các số cách nhau một khoảng trắng.
Kết quả: Ghi ra tệp văn bản CHUMDEN.OUT, số nguyên duy nhất là kết quả của bài toán.
Ví dụ:


| CHUMDEN.INP | CHUMDEN.OUT | Giải thích |
| --- | --- | --- |
| 4 2 1 3 2 3 | 3 | Có 3 cách chọn thỏa mãn ở các vị trí bắt đầu và kết thúc là (1, 2); (1, 3) và (2, 4) |


Ràng buộc:
Có 30% số test đầu với 1 ≤ n ≤ 100;
Có 30% số test tiếp theo với 100 < n ≤ 5.103;
Có 40% số test còn lại không ràng buộc gì thêm.
Bài 4. TẶNG QUÀ
Bố Tí là một người rất giàu có. Ông có rất nhiều đất đai và các món đồ quý hiếm. Đặc biệt, ông có bộ sưu tập gồm n món đồ cổ được đánh số thứ tự từ 1 đến n có giá trị cao. Ông đã nhờ các chuyên gia về đồ cổ định giá cho từng món đồ cổ của mình. Sau khi định giá, các chuyên gia đã đưa ra giá trị của món đồ cổ thứ i là ai (∀i
= 1..n). Tí là đứa con duy nhất nên ông đã quyết định tặng cho Tí một số món từ bộ sưu tập đồ cổ của mình để làm vốn riêng. Ông cho Tí được tự ý lựa chọn các món đồ, tuy nhiên có một yêu cầu cho Tí là các món chọn sau phải có số thứ tự và giá trị cao hơn món chọn trước đó.
Yêu cầu: Hãy giúp Tí tính xem phải chọn những món đồ trong bộ sưu tập đồ cổ như thế nào để số món đồ không được chọn là ít nhất.
Dữ liệu vào: Đọc từ tệp văn bản TANGQUA.INP
Dòng thứ nhất chứa số nguyên dương n (105) là số lượng các món đồ cổ.
Dòng thứ hai ghi n số nguyên a1, a2, …, an (1 ≤ ai ≤ 109), là giá trị của từng món đồ.
Kết quả: Ghi ra tệp văn bản TANGQUA.OUT một số nguyên duy nhất là số món đồ cổ Tí không chọn.
Ví dụ:


| TANGQUA.INP | TANGQUA.OUT | Giải thích |
| --- | --- | --- |
| 5 1 3 3 2 8 | 2 | Tí được chọn 3 món đồ trong 5 món ở các vị trí lần lượt là (1, 3, 5) |

Ràng buộc:
Có 40% số test đầu với n ≤ 25;
Có 30% số test tiếp theo với 25 < n ≤ 2000;
Có 30% số test còn lại không có ràng buộc gì thêm.
THCS Đắk Nông 2021-2022
Bài 1. Chữ số tận cùng
Chữ số tận cùng của một số nguyên dương là phần dư tìm được sau khi lấy chữ số nguyên dương đó chia cho 10. Giả sử số nguyên dương 357 thì chữ số tận cùng của số nguyên dương 357 là chữ số 7. Cho số nguyên dương n.
Yêu cầu: Em hãy lập trình tìm chữ số tận cùng của chữ số n.
Dữ liệu vào: Cho trong tệp tin văn bản CHUSO.INP gồm
Một dòng chứa số nguyên dương n (1≤ n ≤ 106).

Kết quả ra: Ghi ra tệp tin văn bản CHUSO.OUT gồm
Một số nguyên duy nhất là chữ số tận cùng tìm được.
Ví dụ:


| CHUSO.INP | CHUSO.OUT |
| --- | --- |
| 357 | 7 |

Bài 2. Số nguyên tố
Theo định đề Bertran thì với mọi số nguyên p ≥ 2 bao giờ cũng tìm thấy số nguyên tố n thỏa mãn p < n < 2p. Định đề này do nhà toán học Pháp Jojeph Bertran đưa ra năm 1845 sau khi đã kiểm tra với mọi p ≤ 106. Điều này đã được Tchebusep chứng minh năm 1850. Năm 1932 Erdoeus đã tìm được cách chứng minh mới đơn giản hơn.
Nay bạn đang là học sinh Trung học cơ sở, bạn được giao một nhiệm vụ rộng hơn một chút: với p cho trước, hãy liệt kê các số nguyên tố n và xác định số lượng số nguyên tố n thỏa mãn điều kiện p < n < 2p.
Yêu cầu: Em hãy lập trình tìm các số nguyên tố và xác định số lượng số nguyên tố n thỏa mãn điều kiện p < n < 2p.
Dữ liệu vào: Cho trong tệp tin văn bản BERTRAN.INP gồm
Một dòng chứa số nguyên dương p (1 ≤ p ≤ 106).
Kết quả ra: Ghi ra tệp tin văn bản BERTRAN.OUT gồm
Dòng đầu chứa các số nguyên tố n. Các số trên một dòng được viết cách nhau ít nhất một dấu cách.
Dòng tiếp theo chứa số lượng số nguyên tố n. Ví dụ 1:

| BERTRAN.INP | BERTRAN.OUT |
| --- | --- |
| 2 | 3 1 |

Ví dụ 2:

| BERTRAN.INP | BERTRAN.OUT |
| --- | --- |
| 4 | 5 7 2 |

Bài 3. Cặp số hoàn hảo
Hai số nguyên được gọi là một “Cặp số hoàn hảo” nếu như tổng của chúng bằng giá trị s cho trước.
Hai bạn học sinh lúc ngồi nhàn rỗi nghĩ ra trò chơi sau đây để tăng khả năng tư duy toán học, cho dãy số a1, a2, …, an, các bạn chọn trong dãy số gồm n số nguyên sao cho giá trị của hai số đã chọn ai, aj với i<j thỏa mãn ai+aj=s là cặp số hoàn hảo.
Cho một dãy số nguyên a1, a2, …, an và số nguyên s.

Yêu cầu: Em hãy lập trình đếm xem trong dãy số đã cho có bao nhiêu cặp số hoàn hảo.
Dữ liệu vào: Cho trong tệp tin văn bản CAPSO.INP gồm
Dòng thứ nhất ghi số nguyên dương n (n ≤ 105) và số nguyên s (|s| ≤ 109).
Các dòng tiếp theo lần lượt ghi các số a1, a2, .., an (|ai| ≤ 109).
Kết quả ra: Ghi ra tệp tin văn bản CAPSO.OUT gồm một số nguyên duy nhất là số lượng cặp số hoàn hảo.
Ví dụ:


| CAPSO.INP | CAPSO.OUT |
| --- | --- |
| 10 7 5 2 5 3 4 3 1 6 4 0 | 7 |

Bài 4. Các Đồng Xu
Vào một ngày chủ nhật buồn, Nam ngồi học bài và nhâm nhi tách cà phê bên cửa sổ anh ta quan sát các hoạt động hàng ngày của lũ quạ thường bay về làm tổ trong vườn nhà mình. Chúng là loài chim thông minh, rất thích các vật lóng lánh và hay tha những thứ này về tổ. Hôm nay, không biết chúng kiếm được ở đâu, chúng tha về các đồng xu.
Theo sự quan sát của Nam thì lúc này có tất cả 𝑛 con quạ. Con quạ thứ 𝑖 đã mang về 𝑎𝑖 đồng xu. Nhìn vào vị trí của tổ trên cành Nam hiểu rằng nếu có 𝑏𝑖 đồng xu thì tổ của quạ thứ 𝑖 sẽ bị lật rơi xuống đất và Nam sẽ nhặt được hết các đồng xu trong tổ. Nam đang có trong túi 𝑚 đồng xu và anh ta có tài lẻ ném đâu trúng đó. Bây giờ chính là lúc cái tài lẻ này của anh phát huy tác dụng.
Yêu cầu: Em hãy lập trình xác định số tiền tối đa mà Nam sẽ có được.
Dữ liệu vào: Cho từ tập tin văn bản COINS.INP gồm:
-  Dòng thứ nhất chứa hai số nguyên dương 𝑛, 𝑚 (1 ≤ 𝑛, 𝑚 ≤ 105)
-  Dòng thứ hai chứa 𝑛 số 𝑎1, 𝑎2, … , 𝑎𝑛(0 ≤ 𝑎𝑖 ≤ 105)
-  Dòng thứ ba chứa 𝑛 số 𝑏1, 𝑏2, … , 𝑏𝑛(𝑎𝑖 < 𝑏𝑖 ≤ 105)
Kết quả ra: Ghi ra tập tin văn bản COINS.OUT gồm số tiền tối đa mà Nam sẽ có.
Ví dụ:


| COINS.INP | COINS.OUT |
| --- | --- |
| 2 3 1 2 4 6 | 6 |

THCS Đắk Nông 2022-2023
Bài 1. Chi phí
Dọc theo một con đường trên phố đi bộ, người ta trồng một hàng gồm n cây xanh có khoảng cách đều nhau. Để cho người đi bộ có thời gian ngồi nghỉ ngơi, ngắm phố, người ta đặt dưới hàng cây một số ghế đá theo quy tắc xen kẽ, cứ hai cây

liên tiếp nhau thì một cây được đặt một ghế đá, một cây để trống. Biết rằng để đặt một ghế đá dưới một gốc cây thì cần chi phí với số tiền là x đồng.
Yêu cầu: Hãy tính tổng chi phí để đặt được nhiều ghế đá nhất cho hàng cây.
Dữ liệu: vào từ file CHIPHI.INP chỉ gồm một dòng chứa hai số nguyên n và x. Kết quả: Ghi ra file CHIPHI.OUT một số nguyên là kết quả bài toán tìm được. Ví dụ:

| CHIPHI.INP | CHIPHI.OUT |
| --- | --- |
| 7 50 | 200 |

Ràng buộc: 1 ≤ n ≤ 109, 1 ≤ x ≤ 103
Bài 2. Mật khẩu
Nam là người yêu thích các số nguyên tố, chính vì vậy cậu ta thường tìm ra những số nguyên tố có tính chất đặc biệt để tạo mật khẩu cho các tài khoản facebook, zalo, mail ... của mình. Nam đã phát hiện ra những số nguyên tố mà tổng các chữ số của nó cũng là số nguyên tố. Xét các ví dụ:
Số 17 có tổng các chữ số bằng 8 không phải là số nguyên tố, vì vậy Nam không thể chọn 17 làm mật khẩu.
Số 32 có tổng các chữ số bằng 5 là một số nguyên tố nhưng 32 không phải là số nguyên tố, vì vậy Nam không thể chọn 32 làm mật khẩu.
Số 67 là số nguyên tố và tổng các chữ số bằng 13 là một số nguyên tố, vì vậy Nam có thể chọn 67 làm mật khẩu cho các tài khoản
Yêu cầu: Cho hai số l,r hãy cho biết trong đoạn từ l đến r có những số nguyên tố nào Nam có thể chọn để làm mật khẩu cho các tài khoản của mình.
Dữ liệu: vào từ file PASSWORD.INP gồm hai số nguyên dương l và r trên cùng một dòng. Dữ liệu vào luôn đảm bảo bài toán có nghiệm.
Kết quả: ghi ra file PASSWORD.OUT gồm các số nguyên tố đặc biệt từ l đến r.
Các số trên cùng một dòng và in theo thứ tự tăng dần và cách nhau một dấu cách.
Ví dụ:


| PASSWORD.INP | PASSWORD.OUT |
| --- | --- |
| 50 90 | 61 67 83 89 |

Ràng buộc: 1 ≤ l, r ≤ 107
Bài 3. Phân tử lượng
Cho công thức hóa học của phân tử một chất dưới dạng một xâu ký tự. Các nguyên tử trong công thức chỉ gồm H (Hydro), O (Oxy), N (Nitrogen) và C (Carbon). Trong đó:
H có nguyên tử lượng là 1

O có nguyên tử lượng là 16
N có nguyên tử lượng là 14
C có nguyên tử lượng là 12
Trong công thức, nếu một nguyên tử E nào đó gặp liên tiếp n lần thì sẽ được viết gọn dưới dạng En (n ≤ 1000). Phân tử lượng là tổng khối lượng nguyên tử của các nguyên tử trong phân tử.
Giả sử công thức hóa học là N2O3 sẽ có phân tử lượng là 14x2+16x3 = 76.
Yêu cầu: Cho công thức hóa học. Hãy xác định phân tử lượng của công thức hóa học đã cho.
Dữ liệu vào: Cho trong tệp tin văn bản PHANTU.INP một dòng chứa chuỗi ký tự xác định công thức hóa học của phân tử.
Kết quả ra: Ghi ra tệp tin văn bản PHANTU.OUT một số duy nhất là phân tử lượng dưới dạng số nguyên.
Ví dụ:


| PHANTU.INP | PHANTU.OUT |
| --- | --- |
| N2O3 | 76 |

Bài 4. Virus
Flashback là một loại virus máy tính sinh sản rất nhanh khi gặp môi trường thuận lợi và là một loại virus nguy hiểm, có tốc độ lây lan nhanh trong môi trường mạng.
Flashback lần đầu tiên được phát hiện vào năm 2011 bởi công ty diệt virus Intego dưới dạng một bản cài đặt flash giả và chúng sinh sản theo quy luật sau.
Ngày đầu tiên (ngày 0) có n cá thể ở mức 1,
Ở mỗi ngày tiếp theo, mỗi cá thể mức i sinh ra i cá thể mức 1, các cá thể mới sẽ sinh sôi, phát triển từ ngày hôm sau
Bản thân cá thể thứ i sẽ phát triển thành mức i + 1 và chu kỳ phát triển trong ngày chấm dứt.
Yêu cầu: Hãy xác định sau k ngày trong môi trường mạng có bao nhiêu cá thể.
Dữ liệu vào: Cho trong tệp tin văn bản FLASHBACK.INP gồm một dòng chứa hai số nguyên n và k (1 ≤ n ≤ 1000, 1 ≤ k ≤ 105).
Dữ liệu ra: Đưa ra tệp tin văn bản FLASHBACK.OUT một số nguyên duy nhất là số dư của kết quả tìm được chia cho 109 +7.
Ví dụ:


| FLASHBACK.INP | FLASHBACK.OUT |
| --- | --- |
| 5 3 | 65 |

Giới hạn:

Có 40% số test ứng với 40% số điểm có n ≤ 100,k ≤ 103;
Có 60% số test, ứng với 60% số điểm có n ≤ 1000, k ≤ 105.
THCS Đồng Tháp 2016-2017 Bài 1: CẮT GIẤY
Để chuẩn bị cho ngày cắm trại, Nam và các bạn cùng nhau cắt những mảnh giấy màu để trang trí trại. Nhằm làm tăng thêm phần độc đáo, bạn Nam nghĩ ra một cách cắt tờ giấy màu thành các hình vuông.
Tờ giấy màu của Nam có dạng hình chữ nhật kích thước a X b (a>b). Sau đó Nam sẽ gấp chéo tờ giấy tạo thành đường gấp có góc 45 độ, một mép trùng với một cạnh của tờ giấy (như hình vẽ), sau đó cắt phần giấy thừa không bị gấp đè lên.

Sau khi cắt, Nam nhận được một mảnh giấy hình vuông kích thước b X b và một mảnh kích thước b X (a-b). Nam lại tiếp tục thực hiện thao tác như trên với mảnh giấy b X (a-b) và cứ thế cho đến khi tất cả các mảnh giấy đều là hình vuông.
Yêu cầu: Hãy xác định xem Nam có thể có được bao nhiêu mảnh giấy hình vuông?
Dữ liệu vào: Cho từ tệp văn bản PAPER.INP gồm một dòng ghi hai số nguyên a và b cách nhau một kí tự trắng (1 ≤ b ≤ a < 109).
Kết quả: Ghi ra tệp văn bản PAPER.OUT gồm một dòng ghi một số nguyên là số hình vuông sau khi cắt.
Ví dụ:


| PAPER.INP | PAPER.OUT |
| --- | --- |
| 10 7 | 6 |

Bài 2: CÁC THÍ SINH THÔNG MINH
Cuộc thi “Các thí sinh thông minh” là một cuộc thi rất nổi tiếng trên truyền hình. Để chọn các thí sinh thông minh nhất, cuộc thi có nhiều vòng thi, thang điểm mỗi vòng thi là 20 điểm. Năm nay có n thí sinh dự thi, hiện tại đang chuẩn bị bước vào vòng thi cuối cùng và tổng điêm số của từng thí sinh ở các vòng thi trước lần lượt là a1, a2,..., an. Tổng điểm chung cuộc của các thí sinh sẽ bằng điểm số của họ đạt được trong vòng thi này cộng với điểm số đã có ở các vòng thi trước.
Yêu cầu: Cho trước tổng số điểm của từng thí sinh ở các vòng thi trước. Hãy tính xem có bao nhiêu thí sinh có khả năng vô địch. Biết rằng thí sinh vô địch là thí sinh đạt tổng số điểm cao nhất của cuộc thi.
Dữ liệu vào: Cho từ tệp TM.INP gồm hai dòng:
Dòng thứ nhất ghi số nguyên n là số thí sinh dự thi (1< n ≤ 105)

Dòng thứ hai ghi n số nguyên a1, a2, ..., an là tổng điểm số ở các vòng thi trước của từng thí sinh, thí sinh thứ i có tổng điểm số là ai (1< ai < 105, i=1..n). Các số ghi trên một dòng cách nhau một kí tự trắng.
Kết quả: Ghi vào tệp văn bản TM.OUT gồm một dòng ghi số nguyên là số lượng thí sinh có khả năng vô địch.
Ví dụ:


| TM.INP | TM.OUT |
| --- | --- |
| 4 40 45 15 45 | 3 |

Bài 3: HÀNG CÂY PHI LAO
Cây phi lao là loại cây được trồng nhiều ở ven biển nước ta. Ngoài công dụng chắn gió, giữ đất, cây phi lao còn là nguyên liệu để làm giấy. Ở ven biển, ông Năm trồng cây phi lao thành một hàng dài gồm có n cây, các cây có độ cao lần lượt là a1, a2, ..., an mét. Để đảm bảo chắn gió và giữ đất, ông Năm thu hoạch phi lao từ trên ngọn xuống để giữ lại phần gốc. Chẳng hạn để thu hoạch m mét gỗ phi lao, ông Năm cưa hàng cây ở độ cao h mét nào đó (dĩ nhiên những cây có độ cao không lớn hơn h thì không bị cưa) sao cho thu hoạch phần ngọn đủ m mét gỗ và số gỗ phi lao dư ra là ít nhất. Ví dụ, hàng cây có các cây với độ cao tương ứng là: 20; 15; 10 và 18 mét, cần lấy 7 mét gỗ, ông Năm cưa hàng cây ở độ cao h = 15 là hợp lí nhất vì ông Năm thu hoạch được 8 mét phần ngọn (dư 1 mét), phần gốc còn lại lần lượt là: 15; 15; 10; 15 mét.
Yêu cầu:
Tính tổng số lượng mét gỗ thu hoạch được nếu chọn cưa hàng cây ở độ cao bằng với cây phi lao thấp nhất.
Hãy tìm vị trí h mét họp lí nhất (h là số nguyên) sao cho thu hoạch được m mét gỗ và số mét gỗ dư ra là ít nhất.
Dữ liệu vào: Cho từ tệp văn bản PHILAO.INP gồm hai dòng:
Dòng thứ nhất ghi hai số nguyên dương n và m (1<= n <=106; 1<= m <= 107)
Dòng thứ hai ghi n số nguyên dương a1, a2, ..., an với ai là độ cao của cây thứ i (l<=ai<=109; i=l...n). Các số ghi trên cùng một dòng cách nhau một kí tự trắng.
Kết quả: Ghi vào tệp văn bản PHILAO.OUT gồm hai dòng:
Dòng thứ nhất ghi số nguyên s là tổng số mét gỗ thu hoạch được nếu cưa hàng cây ở độ cao bằng với cây phi lao thấp nhất.
Dòng thứ hai ghi số nguyên h tìm được để thu hoạch đủ m mét gỗ và số gỗ dư ra là ít nhất. Nếu không tìm được h ghi ra số -1. Các số ghi trên cùng một dòng cách nhau một kí tự trắng.
Ví dụ:


| PHILAO.INP | PHILAO.OUT |  |
| --- | --- | --- |
| 4 7 20 15 10 18 | 23 15 |  |

Ràng buộc:
Có 70% số test tương ứng 70% số điểm của bài có n<=104
Có 30% số test tương ứng 30% số điểm của bài có n<=106
THCS Hà Nội 2017-2018
Câu 1: Tìm số đặc biệt
Một số nguyên dương được gọi là đặc biệt nếu tổng bình phương các chữ số của nó (trong dạng biểu diễn thập phân) là một số nguyên tố.
Ví dụ: 12 là số đặc biệt vì 12 + 22 = 5 là số nguyên tố.
Yêu cầu: Cho số nguyên dương n. Hãy tìm số đặc biệt nhỏ nhất lớn hơn n.
Dữ liệu: Vào từ tệp văn bản CAU1.INP chứa số nguyên dương n (1 ≤ n ≤ 109).
Kết quả: Ghi vào tệp văn bản CAU1.OUT số đặc biệt nhỏ nhất lớn hơn n.
Ví dụ:


| CAU1.INP | CAU1.OUT | Giải thích |
| --- | --- | --- |
| 11 | 12 | 12 + 22 = 5 là số nguyên tố |

Câu 2: Tặng quà
Để động viên khích lệ học sinh tham gia dự thi học sinh giỏi năm nay, trường ITS có chuẩn bị n phần quà cho n thí sinh dự thi. Trên hộp quà thứ i có ghi số nguyên ai. Sau khi tặng quà cho các thí sinh, trường sẽ có thêm những cặp quà đặc biệt cho mỗi cặp thí sinh có cặp số trên hộp quà là ai, aj (i ≠ j) mà ai + aj = 0.
Yêu cầu: Hãy cho biết trường phải chuẩn bị thêm bao nhiêu cặp quà đặc biệt.
Dữ liệu: Vào từ tệp văn bản CAU2.INP:
Dòng thứ nhất chứa số nguyên dương n (1 < n ≤ 106);
Dòng thứ hai chứa n số nguyên a1, a2, ... , an đôi một khác nhau (|ai| ≤ 105, 1
≤ i ≤ n).
Kết quả: Ghi ra tệp văn bản CAU2.OUT số lượng cặp quà đặc biệt.
Ví dụ:


| CAU2.INP | CAU2.OUT | Giải thích |
| --- | --- | --- |
| 7 6 -3 0 1 -1 3 2 | 2 | Có hai cặp có tổng bằng 0: -3 + 3 = 0 -1 + 1 = 0 |

Câu 3: Xâu chung lớn nhất

Cho hai xâu X và Y độ dài tối đa mỗi xâu không quá 1000 kí tự, bao gồm các chữ cái và các chữ số.
Yêu cầu: Hãy tìm xâu Z là xâu con chung liên tiếp của hai xâu X và Y gồm toàn các chữ số tạo thành một số có giá trị lớn nhất.
Dữ liệu: Vào từ tệp văn bản CAU3.INP:
Dòng thứ nhất chứa xâu X;
Dòng thứ hai chứa xâu Y.
Kết quả: Ghi ra tệp văn bản CAU3.OUT xâu Z tìm được.
Ví dụ:


| CAU3.INP | CAU3.OUT | Giải thích |
| --- | --- | --- |
| ab123abcba57 cba12abcbad23 | 23 | Các xâu con gồm toàn chữ số của xâu X là: 1 12 2 3 123 23 57 Các xâu con gồm toàn chữ số của xâu Y là: 1 12 2 3 23 Xâu con chung liên tiếp gồm toàn chữ số có giá trị lớn nhất: 23 |

Câu 4: Sơn tường chung cư
Thành phố ABC có một khu đô thị gồm nhiều khối chung cư cao tầng được mô tả trong bản đồ hình chữ nhật gồm m dòng và n cột. Các dòng được đánh số từ 1 đến m và các cột được đánh số từ 1 đến n. Ô ở dòng thứ i và cột thứ j ghi một số nguyên dương ai,j mô tả số tầng của một khối chung cư ở hàng thứ i và cột j. Một khối chung cư được định nghĩa là một tập hợp các ô có đáy tạo thành một miền gồm những ô vuông kề cạnh có giá trị lớn hơn 0.
Để chỉnh trang khu đô thị người ta muốn sơn toàn bộ các bức tường xung quanh (không cần phải sơn mái chung cư) tất cả các khối chung cư bằng một loại sơn mới bền và đẹp hơn. Ban quản lý khu đô thị muốn xác định số lượng các khối chung cư, tổng số diện tích phải sơn, diện tích của khối chung cư phải sơn lớn nhất (mỗi mặt của một tầng được tính là một đơn vị diện tích).
Yêu cầu: Với bản đồ trên, hãy giúp ban quản lý khu đô thị xác định số lượng các khối chung cư, tổng số diện tích phải sơn, diện tích của khối chung cư phải sơn lớn nhất.
Dữ liệu: Vào từ tệp văn bản CAU4.INP:
Dòng thứ nhất chứa hai số nguyên dương m và n (1 < m ≤ 500, 1 < n ≤ 500);
m dòng tiếp theo, mỗi dòng ghi n số nguyên dương ai,j là số ghi trên ô vuông ở dòng thứ i và cột thứ j (0 ≤ ai,j ≤ 103, 1 ≤ i ≤ m, 1 ≤ j ≤ n).
Kết quả: Ghi ra tệp văn bản CAU4.OUT:
Dòng thứ nhất ghi số lượng các khối chung cư;
Dòng thứ hai ghi tổng số diện tích cần sơn;

Diện tích khối chung cư cần sơn lớn nhất.
Ví dụ:


| CAU4.INP | CAU4.OUT | Giải thích |
| --- | --- | --- |
| 4 5 0 0 0 2 0 0 0 0 1 0 0 1 3 0 0 0 0 0 0 0 | 2 24 14 | Có 2 khối chung cư; Khối thứ nhất có số mặt sơn là: 2 + 2 + 2 + 1 + 1 + 1 + 1 = 10; Khối thứ hai có số mặt sơn là: 1 +1 +1 +2 + 3 + 3 +3 = 14; Tổng diện tích cần sơn là: 24 Diện tích khối nhà cần sơn lớn nhất là: 14. |

THCS Hà Nội 2020-2021
Bài 1. Tích lớn nhất
Cho ba số nguyên 𝑎, 𝑏, 𝑐 và một số nguyên dương 𝑀.
Yêu cầu: Hãy tìm tích lớn nhất được tạo bởi hai trong ba số 𝑎, 𝑏, 𝑐. Vì kết quả có thể rất lớn nên chỉ cần in ra phần dư khi chia cho 𝑀.
Dữ liệu: vào từ tệp văn bản MAXPRO.INP: gồm bốn số nguyên 𝑎, 𝑏, 𝑐, 𝑀. Các số cách nhau một dấu cách.
Kết quả: ghi ra tệp văn bản MAXPRO.OUT: một số nguyên duy nhất là kết quả của bài toán.
Ví dụ:


| MAXPRO.INP | MAXPRO.OUT | Giải thích |
| --- | --- | --- |
| 3 2 5 4 | 3 | Tích lớn nhất: 3 × 5 = 15. 15 chia 4 dư 3. Kết quả là 3. |
| 2 -3 -2 100 | 6 | Tích lớn nhất: (−2) × (−3) = 6 6 chia 100 dư 6. Kết quả là 6 |

Giới hạn:
Có 70% số test tương ứng với số điểm có |a|, |b|, |c| ≤ 109; 1 ≤ M ≤ 109;
30% số test còn lại tương ứng với số điểm có |a|, |b|, |c| ≤ 1018; 1 ≤ M ≤ 1018;
Bài 2. Bỏ phiếu
Chuẩn bị Gala mừng năm mới Tết Tân Sửu 2021 của công ty HiTech, ban giám đốc quyết định có giải thưởng đặc biệt cho thành viên của công ty. Sau khi đưa ra các tiêu chí đánh giá, việc bầu chọn sẽ được thực hiện bằng cách tất cả các thành viên sẽ được bỏ phiếu cho nhau.
Hình thức bỏ phiếu được thực hiện thông qua phiếu bầu chọn online. Danh sách các thành viên của công ty được niêm yết và quy định là số thứ tự từ 1 đến 𝑁 (1 ≤ 𝑁 ≤ 5000), tương ứng với 𝑁 ô trên phiếu bầu chọn. Sau khi thực hiện, ban tổ chức thu được các danh sách phiếu tương ứng của các thành viên công ty. Trong mỗi phiếu bầu chọn, giá trị ô ở vị trí tương ứng ghi "𝑋" là bầu chọn cho người đó, ô

ghi "0" là không bầu chọn (coi các trường hợp bầu chọn không hợp lệ là không bầu chọn).
Yêu cầu: Em hãy giúp ban tổ chức đưa ra danh sách các nhân viên có phiếu bầu chọn cao nhất.
Dữ liệu: vào từ tệp văn bản VOTE.INP:
Dòng đầu tiên gồm số một số nguyên dương 𝑁 (1 ≤ 𝑁 ≤ 5000) là số lượng phiếu bầu chọn.
𝑁 dòng tiếp theo mỗi dòng tương ứng là 𝑁 giá trị của các phiếu đã bầu chọn.
Các kí tự cách nhau một dấu cách.
Kết quả: ghi ra tệp văn bản VOTE.OUT:
Dòng đầu tiên ghi số lượng người được nhiều phiếu nhất và số lượng phiếu.
Dòng thứ hai ghi thứ tự tương ứng của những người được cao phiếu nhất đó theo thứ tự tăng dần.
Ví dụ:


| VOTE.INP | VOTE.OUT | Giải thích |
| --- | --- | --- |
| 5 X 0 X 0 X X 0 0 X X 0 0 X 0 0 0 X 0 X 0 0 0 X X 0 | 2 3 3 4 | Người số 1 được 2 phiểu bầu chọn. Người số 2 được 1 phiếu bầu chọn. Người số 3 được 3 phiếu bầu chọn. Người số 4 được 3 phiếu bầu chọn. Người số 5 được 2 phiếu bầu chọn. Người số 3 và số 4 cùng được số phiếu bầu chọn lớn nhất. |

Giới hạn:
Có 70% số test tương ứng với số điểm có 𝑁 ≤ 1000;
30% số test còn lại tương ứng với số điểm có 𝑁 ≤ 5000.
Bài 3. Xoá dòng
Cho một bảng hình chữ nhật có 𝑁 dòng và 𝑀 cột gồm các chữ cái in thường từ ‘𝑎’ đến ‘𝑧’. Bảng này có tính chất: ở mỗi cột, khi ghép các kí tự từ trên xuống dưới sẽ thu được một xâu đại diện và trong bảng các xâu đại diện là đôi một khác nhau.
Yêu cầu: hãy tìm cách xoá nhiều nhất các dòng (lần lượt từ dòng đầu tiên xuống dưới) của bảng để thu được một bảng mới vẫn đảm bảo tính chất trên. (Chỉ được xoá tối đa 𝑁 − 1 dòng)
Dữ liệu: vào từ tệp văn bản DELROW.INP:
Dòng đầu tiên chứa hai số nguyên 𝑁 và 𝑀 cách nhau một dấu cách;
𝑁 dòng sau, mỗi dòng chứa một xâu có dộ dài 𝑀.
Kết quả: ghi ra tệp văn bản DELROW.OUT gồm một số duy nhất là kết quả của bài toán.
Ví dụ :


| DELROW.INP | DELROW.OUT | Giải thích |
| --- | --- | --- |
| 5 4 qwpt abcf bvoa abka bbhb | 2 | Xoá tối đa 2 dòng đầu. Nếu xoá cả dòng thứ 3 thì cột đầu tiên và cột cuối cùng sẽ giống nhau. (không thoả mãn tính chất của bảng) |

Giới hạn:
Có 40% số test tương ứng với số điểm có 𝑁, 𝑀 ≤ 100;
30% số test khác tương ứng với số điểm có 𝑁, 𝑀 ≤ 500;
30% số test còn lại tương ứng với số điểm có 𝑁, 𝑀 ≤ 5000.
Bài 4. TĂNG BẢNG
Thao tác tăng hình nón đối xứng của một dãy số 𝑋1, 𝑋2, 𝑋3, … , 𝑋𝑁−2, 𝑋𝑁−1, 𝑋𝑁
được thực hiện như sau:
Tăng 𝑋1 và 𝑋𝑁 lên 1 đơn vị;
Tăng 𝑋2 và 𝑋𝑁−1 lên 2 đơn vị;
Tăng 𝑋3 và 𝑋𝑁−2 lên 3 đơn vị;
…
Ví dụ 1	Ví dụ 2
Cho một bảng hình vuông A có 𝑁 dòng, 𝑁 cột. Các dòng được đánh số từ 1 tới 𝑁 theo thứ tự từ trên xuống dưới và các cột được đánh số từ 1 tới 𝑁 theo thứ tự từ trái qua phải. Ô ở dòng thứ 𝑖, cột thứ 𝑗 được gọi là ô 𝐴(𝑖, 𝑗). Ban đầu tất cả các ô đều có giá trị bằng 0.
Thực hiện 𝑇 thao tác tăng hình nón đối xứng trên bảng A, mỗi thao tác có cấu trúc như sau: gồm bốn số nguyên dương 𝑘, 𝑟𝑐, 𝑥, 𝑦 (𝑘 = 1 hoặc 𝑘 = 2) có ý nghĩa:
Khi 𝑘 = 1, thực hiện tăng hình nón đối xứng trên dòng 𝑟𝑐 với dãy số gồm các số từ 𝐴(𝑟𝑐, 𝑥) đến 𝐴(𝑟𝑐, 𝑦);
Khi 𝑘 = 2, thực hiện tăng hình nón đối xứng trên cột 𝑟𝑐 với dãy số gồm các số từ 𝐴(𝑥, 𝑟𝑐) đến 𝐴(𝑦, 𝑟𝑐).
Yêu cầu: cho kích thước bảng, 𝑇 thao tác tăng và 𝑄 câu hỏi. Mỗi câu hỏi có ý nghĩa: tìm giá trị của một ô của bảng sau khi thực hiện 𝑇 thao tác.
Dữ liệu: vào từ tệp văn bản ITABLE.INP có cấu trúc:

Dòng đầu tiên gồm hai số nguyên dương 𝑁 và 𝑇 là kích thước của bảng và số thao tác tăng. (𝑁 ≤ 5000; 𝑇 ≤ 105)
𝑇 dòng sau, mỗi dòng gồm bốn số nguyên dương 𝑘, 𝑟𝑐, 𝑥, 𝑦 mô tả thao tác tăng lên dòng hoặc cột của bảng. (𝑘 = 1 hoặc 𝑘 = 2; 𝑟𝑐, 𝑥, 𝑦 ≤ 𝑁)
Dòng tiếp theo gồm số một số nguyên dương 𝑄 là số ô cần tìm giá trị. (𝑄 ≤ 105)
𝑄 dòng sau, mỗi dòng chứa hai số nguyên dương 𝑢, 𝑣 có ý nghĩa là cần tìm
giá trị của ô 𝐴(𝑢, 𝑣). (𝑢, 𝑣 ≤ 𝑁)
Mỗi số cách nhau một dấu cách. Dữ liệu đảm bảo đúng đắn và luôn có kết quả.
Kết quả: ghi ra tệp văn bản ITABLE.INP gồm 𝑄 dòng, mỗi dòng in ra giá trị của một ô tương ứng.
Ví dụ:


| ITABLE.INP | ITABLE.OUT |
| --- | --- |
| 4 2 1 2 1 4 2 3 1 3 3 1 1 2 2 2 3 | 0 2 4 |

Giải thích:

Bảng ban đầu	Thao tác tăng lần 1	Thao tác tăng lần 2
Giới hạn:
Có 50% số test tương ứng với số điểm có với 𝑇 ≤ 5000;
Có 30% số test khác tương ứng với số điểm có với 𝑄 ≤ 500;
Có 20% số test còn lại tương ứng với số điểm không có giới hạn gì thêm.
THCS Hà Nội 2021-2022
Bài 1. Đua robot
Có hai robot đang chuyển động thẳng đều, cùng chiều trên cùng một con đường, robot thứ nhất đang ở vị trí 𝑆1 di chuyển với vận tốc là 𝑉1 m/s, robot thứ hai đang ở vị trí 𝑆2 di chuyển với vận tốc là 𝑉2 m/s. Hỏi sau bao nhiêu lâu thì hai robot gặp nhau?
Dữ liệu vào: từ file văn bản DRB.INP:

Dòng đầu tiên gồm số nguyên dương 𝑆1 mô tả vị trí của robot thứ nhất;
Dòng thứ hai gồm số nguyên dương 𝑉1 mô tả vận tốc của robot thứ nhất;
Dòng thứ ba gồm số nguyên dương 𝑆2 mô tả vị trí của robot thứ hai;
Dòng thứ tư gồm số nguyên dương 𝑉2 mô tả vận tốc của robot thứ hai.
Các đơn vị khoảng cách được tính bằng mét, thời gian được tính bằng giây và
𝑆1 ≠ 𝑆2; 𝑆1, 𝑆2, 𝑉1, 𝑉2 ≤ 109.
Kết quả: ghi ra file văn bản DRB.OUT:
In ra một số nguyên là phần nguyên của kết quả - thời gian mà hai robot gặp nhau. Nếu hai robot không thể gặp nhau thì in ra −1.
Ví dụ:


| DRB.INP | DRB.OUT | Giải thích |
| --- | --- | --- |
| 2 5 7 3 | 2 | Sau 2.5 giây hai robot sẽ gặp nhau: 2 + 5 × 2.5 = 14.5 7 + 3 × 2.5 = 14.5 Phần nguyên của 2.5 là 2. |
| 2 3 7 5 | -1 | Hai robot càng đi càng xa nhau. |

Bài 2. Chuỗi ARN
Trong phòng thí nghiệm, các nhà khoa học đang nghiên cứu về gen của một chuỗi ARN đặc biệt được mã hoá bằng một xâu 𝑆 gồm các kí tự ′𝐴′, ′𝑈′, ′𝐺′, ′𝑋′. Họ muốn cắt từ chuỗi ARN đó một mạch (được mã hoá bằng xâu 𝑋) cho trước.
Yêu cầu: từ chuỗi ARN 𝑆 có thể cắt được ra tối đa bao nhiêu đoạn mạch 𝑋.
Dữ liệu vào: từ file văn bản ARN.INP:
Dòng đầu tiên gồm một xâu kí tự 𝑆 mô tả chuỗi ARN;
Dòng thứ hai gồm một xâu kí tự 𝑋 mô tả đoạn mạch cần cắt ra.
Các xâu chỉ gồm các kí tự ′𝐴′, ′𝑈′, ′𝐺′, ′𝑋′ và độ dài các xâu không quá 103 kí tự.
Kết quả: ghi ra file văn bản ARN.OUT:
Một số nguyên duy nhất là kết quả của bài toán.
Ví dụ:


| ARN.INP | ARN.OUT | Giải thích |
| --- | --- | --- |
| AUAUGXXAUGXGX AUGX | 2 | AUAUGXXAUGXGX |
| AAAAA AAA | 1 | AAAAA |



| AGAX U | 0 |  |
| --- | --- | --- |

Bài 3. Tải bài giảng
Do ảnh hưởng của dịch bệnh, các lớp học sẽ học kết hợp cả hình thức trực tiếp và trực tuyến. Để học sinh có thể hiểu kĩ hơn về bài học, giáo viên lưu lại video các bài giảng và tải lên nhóm lớp cho học sinh xem lại.
Một video bài giảng dài 𝑍 giây. Dung lượng mà video cần phát 1 giây là 𝑋
MB. Nhưng mạng nhà An lúc đó chỉ có thể tải được 𝑌 MB trong 1 giây.
An muốn xem bài giảng mà không phải dừng lại giữa chừng. An quyết định trước khi bắt đầu xem, sẽ đợi trước 𝑇0 giây để bài giảng được tải xuống một dung lượng nhất định. Một video bài giảng được phát liên tục nếu tổng dung lượng tại thời điểm bất kì mà An đã tải về lớn hơn hoặc bằng tổng dung lượng của đoạn video tính đến thời điểm đó.
Yêu cầu: Hãy giúp An tìm lượng thời gian ít nhất 𝑇0 mà An phải đợi để có thể xem liên tục.
Dữ liệu vào: từ file văn bản TBG.INP:
Gồm một dòng chứa ba số nguyên dương 𝑋, 𝑌, 𝑍 (1 ≤ 𝑋, 𝑌, 𝑍 ≤ 105; 𝑌 < 𝑋);
Kết quả: ghi ra file văn bản TBG.OUT:
Một số nguyên dương 𝑇0 là thời gian ít nhất mà An phải đợi.
Ràng buộc:
Có 80% số test ứng với 80% số điểm của bài thoả mãn: 1 ≤ 𝑋, 𝑌, 𝑍 ≤ 100;
20% số test còn lại ứng với 20% số điểm của bài không có ràng buộc gì thêm.
Ví dụ:


| TBG.INP | TBG.OUT | Giải thích |
| --- | --- | --- |
| 4 1 1 | 3 | An đợi trước 3 giây nên An đã tải được sẵn 3 × 1 = 3 MB. Tại giây thứ nhất của video, dung lượng mà An tải được sẽ là 3 + 1 = 4 MB, vừa bằng dung lượng mà video phát trong 1 giây là 4 MB. |
| 10 3 2 | 5 | An đợi trước 5 giây nên An đã tải được sẵn 5 × 3 = 15 MB. Tại giây thứ nhất của video, dung lượng mà An tải được sẽ là 15 + 3 = 18 MB. Lớn hơn dung lượng mà video phát trong 1 giây là 10 MB. Tại giây thứ 2 của video, dung lượng mà An tải được sẽ là 18 + 3 = 21 MB. Lớn hơn dung lượng mà video phát trong 2 giây là 20 MB. |


Bài 4. Hình chữ nhật
Cho một hình chữ nhật gồm 𝑁 dòng và 𝑀 cột. Các dòng được đánh số từ 1 đến 𝑁, từ trên xuống dưới. Các cột được đánh số từ 1 đến 𝑀, từ trái sang phải. Ô ở dòng thứ 𝑖 và cột thứ 𝑗 được gọi là ô (𝑖, 𝑗) và có diện tích là 1 đơn vị. Có một số ô đã được điền sẵn kí tự ′𝑋′.
Yêu cầu: tìm hình chữ nhật con có diện tích lớn nhất chỉ chứa duy nhất một kí tự
′𝑋′.
Dữ liệu vào: từ file văn bản HCN.INP:
Dòng đầu tiên gồm ba số nguyên dương 𝑁, 𝑀, 𝐾 (𝑁, 𝑀 ≤ 104; 𝐾 ≤ 103) mô tả kích thước của hình chữ nhật và số lượng kí tự ′𝑋′ có trong hình chữ nhật;
𝐾 dòng sau, mỗi dòng gồm hai số nguyên dương 𝑑 và 𝑐 là chỉ số dòng và cột của ô điền kí tự ′𝑋′ (𝑑 ≤ 𝑁; 𝑐 ≤ 𝑀).
Kết quả: ghi ra file văn bản HCN.OUT:
Ghi ra diện tích của hình chữ nhật lớn nhất thoả mãn yêu cầu đề bài.
Ràng buộc:
Có 50% số test tương ứng với 50% số điểm thoả mãn: 𝑁, 𝑀 ≤ 50;
30% số test khác tương ứng với 30% số điểm thoả mãn: 𝑁, 𝑀 ≤ 500;
20% số test còn lại tương ứng với 20% số điểm không có ràng buộc gì thêm.
Ví dụ:


| HCN.INP | HCN.OUT | Giải thích | Giải thích | Giải thích | Giải thích | Giải thích | Giải thích | Giải thích |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 4 5 4 | 9 |  |  |  |  |  |  |  |
| 2 3 |  |  |  |  |  |  |  |  |
| 2 3 |  |  |  |  | X |  | X |  |
| 2 5 |  |  |  |  | X |  | X |  |
| 3 1 |  |  |  |  | X |  | X |  |
| 3 1 |  |  | X |  |  |  |  |  |
| 4 4 |  |  | X |  |  |  |  |  |
|  |  |  |  |  |  | X |  |  |

Câu 5. Cổ phiếu VNI
Bình mua bán cổ phiếu VNI trên thị trường chứng khoán. Giả sử giá của một cổ phiếu VNI trong vòng 𝑁 ngày lần lượt là 𝐴1, 𝐴2, … , 𝐴𝑁. Biết rằng mỗi ngày Bình chỉ thực hiện một trong những hoạt động sau:
Mua một cổ phiếu VNI;
Bán số lượng cổ phiếu VNI bất kì mà Bình đang sở hữu;
Không thực hiện bất kì giao dịch nào.
Yêu cầu: Bình thực hiện mua bán cổ phiếu VNI như thế nào để thu được lợi nhuận lớn nhất nếu anh ấy tham gia mua bán bắt đầu từ ngày thứ 𝑇 cho trước?
Dữ liệu vào: từ file văn bản VNI.INP:

Dòng đầu tiên gồm số nguyên dương 𝑁 (𝑁 ≤ 105) là số ngày biết giá cổ phiếu;
Dòng thứ hai gồm 𝑁 số nguyên dương 𝐴1, 𝐴2, … , 𝐴𝑁 tương ứng là giá của một cổ phiếu VNI trong từng ngày (𝐴𝑖 ≤ 109; 1 ≤ 𝑖 ≤ 𝑁);
Dòng thứ ba gồm một số nguyên dương 𝑄 là số lượng truy vấn (𝑄 ≤ 105);
𝑄 dòng sau, mỗi dòng gồm một số nguyên dương 𝑇 (𝑇 ≤ 𝑁) thể hiện cho ngày đầu tiên mà Bình tham gia việc mua bán cổ phiếu VNI.
Kết quả: ghi ra file văn bản VNI.OUT: 𝑄 dòng, mỗi dòng gồm một số nguyên duy nhất là lợi nhuận lớn nhất mà Bình thu được ở mỗi truy vấn tương ứng.
Ràng buộc:
Có 50% số test ứng với 50% số điểm của bài thoả mãn: 𝑁 ≤ 1000; 𝑄 = 1;
30% số test khác ứng với 30% số điểm của bài thoả mãn: 𝑁 ≤ 105; 𝑄 = 1;
20% số test còn lại ứng với 20% số điểm của bài không có ràng buộc gì thêm.
Ví dụ:


| VNI.INP | VNI.OUT | Giải thích |
| --- | --- | --- |
| 4 1 2 5 4 2 1 3 | 7 0 | Bình bắt đầu tham gia mua bán VNI vào ngày 1: Ngày 1: mua 1 VNI với giá là 1. Ngày 2: mua 1 VNI với giá là 2. Ngày 3: bán 2 VNI với giá là 5. Ngày 4: không mua hay bán VNI vào ngày này. ⇒ Lợi nhuận thu được là: −1 − 2 + 2 × 5 = 7. Bình bắt đầu tham gia mua bán VNI vào ngày 3: Bình không mua bán VNI vào ngày 3 và ngày 4. ⇒ Lợi nhuận thu được là: 0. |

THCS Hà Nội 2022-2023
Bài 1. Thời gian
Một trung tâm lái xe tổ chức thi sát hạch vào lúc 8 giờ 00 phút sáng ngày mai. Thời gian thực hiện bài sát hạch tối đa là 100 phút. Mỗi thí sinh có thể hoàn thành bài sát hạch trong thời gian khác nhau (tính theo phút). Đợt sát hạch gồm N thí sinh được đánh số từ 1 đến N. Thí sinh thứ i (1 ≤ i ≤ N) hoàn thành bài sát hạch trong Ti phút. Trung tâm muốn biết thời điểm kết thúc bài sát hạch của mỗi thí sinh.
Dữ liệu vào từ file văn bản TG.INP:
Dòng đầu tiên chứa một số nguyên N (1 ≤ N ≤ 20) là số lượng thí sinh;
N dòng tiếp theo, dòng thứ i chứa một số nguyên Ti là thời gian hoàn thành bài sát hạch của thí sinh thứ i (0 < T ≤ 100,1 ≤ i ≤ N).
Kết quả ghi ra file văn bản TG.OUT: Gồm N dòng, mỗi dòng là thời điểm bài thi kết thúc của từng thí sinh có cấu trúc giờ:phút (không chứa dấu cách). Nếu giờ và phút nhỏ hơn 10 thì ghi thêm chữ số 0 trên đầu ví dụ 8 giờ 5 phút viết là 08:05.
Ví dụ:


| TG.INP | TG.OUT |
| --- | --- |
| 3 5 10 65 | 08:05 08:10 09:05 |

Bài 2. Mật mã
Một mật thư chứa mật mã bí ẩn được tạo ra là một xâu kí tự gồm các chữ số và các kí tự in thường. Mật mã bí ẩn là số lượng các số nguyên phân biệt xuất hiện trong thư. Các số nguyên được viết không có các chữ số 0 đứng đầu.
Ví dụ, với mật thư as23dkrf23smk1asd23sam09aa9 chứa 3 số nguyên phân biệt 23, 1, 9. Nên mật mã là 3.
Yêu cầu: Hãy lập trình đưa ra mật mã bí ẩn.
Dữ liệu vào từ file văn bản MM.INP: Gồm một xâu (độ dài ≤ 100) gồm các chữ cái in thường và chữ số. Tất cả các số nguyên trong xâu có nhiều nhất 3 chữ số.
Kết quả ghi ra file văn bản MM.OUT: Một số nguyên duy nhất là kết quả của bài toán.
Ví dụ:


| MM.INP | MM.OUT |
| --- | --- |
| abc123abc2a3a1 | 4 |
| as23dkrf23smk1asd23sam09aa9 | 3 |

Bài 3. Trạm phát sóng
Các trạm thu phát sóng viễn thông của thành phố được đặt trên một đường tròn được chia thành 106 điểm cách đều nhau theo chiều kim đồng hồ. Có một vị trí trên đó được tính là mốc 0. Có N trạm thu sóng được đánh thứ tự từ 1 đến N. Trạm thứ i có vị trí ai, (1 ≤ i ≤ N).
Thành phố dự kiến sẽ đầu tư K trạm phát sóng với phạm vi phát như nhau. Tuy nhiên, một trạm phát sóng với phạm vi phát càng dài thì chi phí càng cao nên thành phố cần tính toán để đầu tư các trạm phát sóng có phạm vi phát ngắn nhất. Và phải đảm bảo các trạm thu sóng đều nhận được tín hiệu.
Khi một trạm phát sóng có phạm vi phát là R thì các trạm thu sóng trong khoảng cách là R theo cả 2 chiều kim đồng hồ đều nhận được tín hiệu. Ví dụ, trạm phát sóng tại vị trí 3 với phạm vi phát 1 thì cả trạm thu sóng ở vị trí 2 và 4 đều nhận được tín hiệu.
Yêu cầu: Tìm phạm vi phát ngắn nhất của K trạm sóng sẽ đầu tư để N trạm thu sóng đều nhận được tín hiệu.
Dữ liệu vào từ file văn bản TPS.INP:
Dòng đầu chứa số nguyên dương N (1 ≤ N ≤ 103);
N dòng tiếp theo, dòng thứ i chứa một số nguyên ai, là vị trí trạm thu sóng thứ

i (0 ≤ai ≤ 106). Không có hai trạm nào cùng vị trí;
Dòng cuối cùng chứa số nguyên K là số trạm phát sóng. Chú ý, vị trí trạm phát có thể được đặt cùng vị trí của một trạm thu nào đó.
Kết quả ghi ra file văn bản TPS.OUT: Số nguyên duy nhất là phạm vi phát sóng ngắn nhất của K trạm.
Ví dụ:


| TPS.INP | TPS.OUT | Giải thích |
| --- | --- | --- |
| 4 5 1000 12345 987 2 | 498 | Đặt một trạm phát sóng ở vị trí 503 và một trạm phát sóng ở vị trí 12340 có phạm vi phát sóng là 498. |
| 2 1 999999 1 | 1 | Đặt một trạm phát sóng ở vị trí 0 với phạm vi phát sóng là 1. |

Bài 4. Triển lãm
Bảo tàng thành phố có N bức tranh được đánh số thứ tự từ 1 đến N. Bức tranh thứ i (1≤i≤N) có kích thước là Ai và được định giá là Bi.
Bảo tàng sẽ trưng bày các bức tranh và muốn chọn một số bức tranh trưng bày để thu được lợi nhuận lớn nhất thỏa mãn các tiêu chí:
Phải trưng bày ít nhất một bức tranh;
Chênh lệch về kích thước giữa các bức tranh được trưng bày càng nhỏ càng tốt;
Tổng giá trị các bức tranh được trưng bày là lớn nhất.
Gọi Amin là kích thước nhỏ nhất, Amax là kích thước lớn nhất, s là tổng giá trị của các bức tranh được lựa chọn trưng bày. Lợi nhuận của bảo tàng được tính theo công thức H = s - (Amax - Amin).
Yêu cầu: Hãy giúp giám đốc bảo tàng tìm H lớn nhất?
Dữ liệu vào từ file văn bản TL.INP:
Dòng đầu tiên chứa số nguyên N (2 ≤ N ≤ 500000) là số lượng các bức tranh;
N dòng tiếp theo, dòng thứ i chứa hai số nguyên Ai (1 ≤ Ai ≤ 1015)và Bi (1 ≤ Bi ≤ 109) là kích thước và định giá của bức tranh thứ i.
Kết quả: ghi ra file văn bản TL.OUT Số nguyên H lớn nhất tìm được.
Ràng buộc:
Có 25% số test ứng với 25% số điểm có n ≤ 16;

25% sốtest ứng với 25% số điểm cón ≤ 300;
25% sốtest ứng với 25% số điểm có n ≤ 5000;
25% sốtest còn lại với 25% số điểmkhông có ràng buộc gì thêm.
Ví dụ:


| TL.INP | TL.OUT | Giải thích |
| --- | --- | --- |
| 3 2 3 9 2 5 | 6 | Chọn các bức tranh là 1 và 3 thì: H = (3 + 5) - (4 - 2) = 6 là lớn nhất |

Bài 5. Dãy đẹp
Trong giờ số học, cô giáo đưa ra dãy A gồm N số nguyên dương từ 1 đến N. Cô giáo cho mỗi học sinh chọn một dãy con B gồm các phần tử liên tiếp của A. Dãy con B được gọi là dãy đẹp nếu khi sắp xếp B theo thứ tự tăng dần ta được một dãy số nguyên liên tiếp. Ví dụ, B = {2,4, 3} là dãy đẹp trong khi B = {2, 3, 2} thì không.
Cô giáo yêu cầu cả lớp đếm xem có bao nhiêu dãy con đẹp của A. Cả lớp rất thích thú với bài toán này. Nhưng vì N có thể rất lớn nên việc đếm dãy con sẽ rất khó khăn.
Yêu cầu: Hãy giúp cả lớp đếm số lượng dãy con đẹp của A.
Dữ liệu vào từ file văn bản DD.INP:
Dòng đầu tiên là số nguyên dương N(1 ≤ N ≤ 105).
Dòng tiếp theo chứa N số nguyên dương A1, A2, AN ( 1 ≤ Ai ≤ N, 1 ≤ i ≤ N).
Kết quả ghi ra file văn bản DD.OUT: Một số nguyên duy nhất là số lượng dãy con đẹp của A.
Ràng buộc:
Có 30% số test ứng với 30% số điểm có N ≤ 200;
30% số test tiếp theo ứng với 30% số điểm có N ≤ 2000 và các phần tử của A đôi một phân biệt;
30% số test tiếp theo ứng với 30% số điểm có N ≤ 105 và các phần tử của A đôi một phân biệt;
10% số test còn lại ứng với 10% số điểm có N ≤ 105, 1 ≤ Ai ≤ N, 1 ≤ i ≤ N.
Ví dụ:


| DD.INP | DD.OUT | Giải thích |
| --- | --- | --- |
| 3 1 2 3 | 6 | Có 6 dãy con đẹp là: {1}, {2}, {3}, {1,2}, {2,3}, {1,2,3} |


THCS Hải Dương 2023-2024
Bài 1. Tam giác cân
Bạn Nam có hai thanh gỗ với chiều dài lần lượt là a và b ( a  b ). Nam muốn tìm thêm một thanh gỗ nữa với chiều dài là c để dựng thành một tam giác cân với độ dài ba cạnh lần lượt là a, b, c.
Yêu cầu: Hãy xác định giá trị c để diện tích tam giác tạo được là lớn nhất.
Dữ liệu: Nhập từ bàn phím hai số nguyên dương lần lượt là a và b. Dữ liệu đảm bảo
rằng a,b 1000 và a  b (không cần kiểm tra dữ liệu nhập vào).
Kết quả: In ra màn hình duy nhất số nguyên dương c.
Ví dụ:


| CAU1.INP | CAU1.OUT |
| --- | --- |
| 10 5 | 10 |

Bài 2. Tổng các chữ số
Cho số nguyên dương n. Hãy tính tổng các chữ số của n biểu diễn trong hệ thập
phân.
Dữ liệu: Nhập vào từ bàn phím duy nhất số nguyên dương n. Dữ liệu đảm bảo rằng
n 109 (không cần kiểm tra dữ liệu nhập vào)
Kết quả: In ra màn hình duy nhất một số nguyên là tổng các chữ số của n viết trong hệ thập phân.
Ví dụ:


| CAU2.INP | CAU2.OUT |
| --- | --- |
| 193 | 13 |



Ghi chú:
Có 60% số lần kiểm tra ứng với 60% số điểm của bài có
40% số lần kiểm tra còn lại có 10000  n 109
Bài 3. Số nguyên tố nhỏ nhất

n 10000

Cho số nguyên dương n. Hãy tìm số nguyên tố nhỏ nhất lớn hơn hoặc bằng n.
Dữ liệu: Nhập vào từ bàn phím duy nhất số nguyên dương n. Dữ liệu đảm bảo rằng
n 109 (không cần kiểm tra dữ liệu nhập vào).
Kết quả: In ra màn hình duy nhất một số nguyên dương là số nguyên tố nhỏ nhất lớn hơn hoặc bằng n.
Ví dụ:


| CAU3.INP | CAU3.OUT |
| --- | --- |
| 20 | 23 |


Ghi chú:
Có 60% số lần kiểm tra ứng với 60% số điểm của bài có
40% số lần kiểm tra còn lại có 1000  n 109
Bài 4. Bánh Trung thu

n 1000

Lớp 9A có m bạn học sinh, thật tình cờ m lại là số nguyên tố lẻ. Nhân dịp Tết Trung thu cô giáo chủ nhiệm quyết định mua một hộp bánh lớn về liên hoan cả lớp. Các cửa hàng bánh trung thu đều bố trí hộp bánh trung thu có dạng một tam giác cân với tầng dưới cùng xếp n gói bánh, tiếp theo số gói bánh của tầng trên luôn nhỏ hơn số gói bánh của tầng dưới 1 gói, tầng trên cùng có 1 gói bánh. Ví dụ hộp bánh trung thu với n = 5 có dạng:

và số lượng gói bánh trong hộp bánh trên là 15.
Yêu cầu: Biết giá của hộp bánh tăng dần theo số gói bánh ở tầng dưới cùng. Quỹ lớp chỉ còn lại số tiền đủ để mua một hộp bánh có kích thước tầng dưới tối đa là n. Hãy giúp cô giáo tính xem có bao nhiêu loại hộp bánh có thể mua được mà số gói bánh trong hộp chia đều được cho m bạn học sinh.
Dữ liệu: Nhập từ bàn phím lần lượt hai số nguyên dương m, n. Dữ liệu đảm bảo
rằng m 1000,n 106 (không cần kiểm tra dữ liệu nhập).
Kết quả: In ra màn hình số loại hộp bánh có kích thước tầng dưới không quá n mà số gói bánh trong hộp chia đều được cho m bạn học sinh.
Ví dụ:


| CAU4.INP | CAU4.OUT |
| --- | --- |
| 7 20 | 5 |

Giải thích ví dụ: Trong ví dụ trên các kích cỡ hộp bánh phù hợp để số gói bánh trong hộp chia đều được cho 7 bạn là 6, 7, 13, 14, 20
Ghi chú:
Có 60% số lần kiểm tra với 60% số điểm của bài có n 1000
20% số lần kiểm tra tiếp theo ứng với 20% số điểm của bài có 1000  n 106
20% số lần kiểm tra còn lại có 106  n  109
Câu 5. Giải phương trình

Ký hiệu s(x) là hàm cho tổng các chữ số của x viết trong hệ thập phân. Ví dụ s(15)=6, s(2024)=8,…Viết chương trình tìm số nghiệm nguyên dương của phương
trình: x  s(x)  n
Ở đây n là số nguyên dương cho trước, còn x là ẩn số.
Dữ liệu: Nhập từ bàn phím duy nhất số nguyên dương n. Dữ liệu đảm bảo rằng
n 109 (không cần kiểm tra dữ liệu nhập vào).
Kết quả: In ra một số nguyên không âm là số nghiệm nguyên dương của phương trình trên.
Ví dụ:


| CAU5.INP | CAU5.OUT |
| --- | --- |
| 216 | 2 |


Giải thích: Trong ví dụ trên phương trình 207
Ghi chú:
x  s(x)  216
có 2 nghiệm là 198 và

Có 60% số lần kiểm tra ứng với 60% số điểm của bài có
40% số lần kiểm tra còn lại có 1000  n 109
THCS Hòa Bình 2021-2022 BÀI 1. PHIẾU GIẢM GIÁ
n 1000

Để thu hút khách hàng, Siêu thị điện máy cho đặt một máy tính ngay cạnh lối vào. Trên màn hình của máy tính hiển thị số nguyên n có 4 chữ số (không có số 0 ở đầu) và cho biết số này nhận được từ số nguyên X có 4 chữ số có nghĩa bằng cách cộng 2 chữ số đầu của X và 2 chữ số cuối của X sau đó viết liên tiếp 2 số nhận được thành số hiển thị trên màn hình, trong đó số lớn hơn được viết trước. Ví dụ X = 3165 thì 2 số nhận được sẽ là 3 + 1 = 4 và 5 + 6 = 11 và kết quả hiển thị trên màn hình sẽ là 114.
Khách hàng phải có nhiệm vụ nạp vào máy tính số nguyên nhỏ nhất có 4 chữ số (không có các số 0 không có nghĩa), từ đó tạo ra kết quả đã nêu trên màn hình. Nếu không tồn tại số phù hợp thì nạp vào số 0. Nếu khách hàng trả lời đúng trong phạm vi chờ đợi của máy thì sẽ nhận được một phiếu giảm giá khi mua hàng trong Siêu thị.
Em hãy viết chương trình xác định số cần đưa vào để nhận được phiếu giảm
giá.
Dữ liệu vào: số nguyên n có 4 chữ số.
Kết quả ra: số cần đưa vào để nhận được phiếu giảm giá hoặc số 0 nếu không tồn tại số cần tìm.
Ví dụ:


| TICKET.INP | TICKET.OUT |
| --- | --- |



| 1311 | 2949 |
| --- | --- |
| 2304 | 0 |

* Giải thích ví dụ 1: x = 2949 thì 2 số nhận được sẽ là 2 + 9 = 11, 4 + 9 = 13 và kết quả hiển thị trên màn hình là 1311.
BÀI 2. DÃY SỐ
Thầy giáo cho bạn An một dãy số gồm n số nguyên a1,a2,a3,... ,an, và yêu cầu An thực hiện thao tác quay dãy số bằng cách chuyển số đầu tiên xuống cuối dãy. An rất thích thú với thao tác này vì quá dễ đối với cậu. Tuy nhiên, để tăng độ khó thầy yêu cầu An tìm số đầu tiên của dãy số sau khi thực hiện k lần quay dãy số.
Em hãy lập trình giúp bạn An giải bài toán của thầy giáo.
Dữ liệu vào:
Dòng 1 chứa hai số nguyên n, k (1≤ n ≤ 106; 1 ≤ k ≤ 109)
Dòng 2 chứa n số nguyên a1, a2, a3, ..., an Kết quả ra: một số nguyên là kết quả của bài toán. Ví dụ:

| ARRAY.INP | ARRAY.OUT |
| --- | --- |
| 6 4 1 2 3 4 5 6 | 5 |

Ràng buộc:
Subtask1: 60% số test ứng với k <n
Subtask2: 20% số test tiếp theo ứng với 1 ≤ n ≤ 100; 1 ≤ k ≤ 104
Subtask3: 20% số test còn lại không có ràng buộc gì.
BÀI 3. CHỌN GIÀY
Một ngày Cristiano Ronaldo muốn đếm lại xem hiện tại mình đang có bao nhiêu chiếc giày. Sau khi kiểm tra, Ronaldo còn n chiếc giày, chiếc thứ i có màu độ sáng Si (i = 1 ...n), số càng lớn thì màu càng sáng.
Mỗi trận đấu Ronaldo lấy ra một đôi sử dụng, sau trận đấu đó, anh tháo giày và tặng lại cho các fan hâm mộ của mình. Hai chiếc giày mà anh chọn phải có độ sáng chênh lệch nhau không quá d, tức là 2 chiếc giày thứ i và j (i ≠ j) có thể được chọn nếu |Si -Sj| ≤ d.
Em hãy viết chương trình tính giúp Ronaldo xem với n chiếc giày hiện có anh ấy sẽ đá được tối đa bao nhiêu trận đấu.
Dữ liệu vào:
Dòng 1 chứa hai số nguyên n, d(1 ≤ n ≤ 2* 105; 1 ≤ d ≤ 106)
Dòng 2 chứa n số nguyên S1, S2, S3, ... , Sn (0 ≤ Si ≤ 106, i = 1... n)
Kết quả ra: một số nguyên là kết quả của bài toán.

Ví dụ:


| SHOES.INP | SHOES.OUT |
| --- | --- |
| 6 0 3 1 5 1 1 1 | 2 |
| 6 2 3 1 2 4 1 1 | 3 |

Giải thích ví dụ 2:
Ronaldo sẽ chọn các đôi giày có độ sáng là (3, 1), (2, 4), (1, 1). Anh cũng có thể chọn các đôi giày có độ sáng là (1, 2), (3, 4), (1, 1).
Ràng buộc:
Subtask1: 50% số test tương ứng với d = 0
Subtask2: 30% số test tiếp theo tương ứng với n ≤ 1000
Subtask3: 20% số test còn lại không có ràng buộc gì.
BÀI 4. BÉ LÀM TOÁN
Bạn An sẽ kết thúc chương trình tiểu học trong năm học này. Bài kiểm tra cuối cùng của cậu là bài kiểm tra toán. Cậu chuẩn bị rất kỹ lưỡng cho bài kiểm tra này. Anh trai của cậu giúp đỡ bằng cách cho cậu một bài tập.
Trong bài tập này, người anh viết ra dãy số theo thứ tự lần lượt có 1 số 1, 2 số 2, 3 số 3, và liên tục như vậy được một dãy vô hạn. Dưới đây là một vài số đầu tiên của dãy mà người anh viết:
1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, ...
Bây giờ, người anh cho An hai số nguyên A, B và hỏi rằng tổng các số trong dãy có chỉ số từ A đến B bằng bao nhiêu? Ví dụ, nếu A = 1 và B = 3 thì nó là tổng của ba số đầu tiên kết quả là 1 + 2 + 2 = 5.
Em hãy viết chương trình giúp bạn An tính tổng theo yêu cầu của người anh.
Dữ liệu vào: một dòng duy nhất chứa hai số nguyên A, B (1 ≤ A ≤ B ≤ 109)
Kết quả ra: một dòng duy nhất là số dư của tổng cho (109 + 7).
Ví dụ:


| INSTRUCK.INP | INSTRUCK.OUT |
| --- | --- |
| 1 3 | 5 |
| 3 7 | 15 |
| 50 50 | 10 |

Giải thích ví dụ 2: tổng các số từ vị trí 3 đến vị trí 7 là:
2 + 3 + 3 + 3 + 4 = 15
Vậy kết quả in ra là 15 mod (109+7) = 15

Ràng buộc:
Subtask1: 50% số test tương ứng với 1 ≤ A ≤ B ≤ 100
Subtask2: 30% số test tiếp theo tương ứng với 1 ≤ A ≤ B ≤ 105
Subtask3: 20% số test còn lại không có ràng buộc gì.
THCS Hòa Bình 2022-2023 BÀI 1. GIẢI BÓNG ĐÁ
Giải bóng đá phong trào khối lớp 9 của trường Trung học cơ sở HB có ba đội tham gia là A, B, C. Giải được tổ chức theo thể thức thi đấu vòng tròn tính điểm: A gặp B, A gặp C, B gặp C. Điểm mỗi trận được tính theo luật của FIFA: Đội thắng được 3 điểm, đội thua được 0 điểm, nếu hòa thì mỗi đội được 1 điểm.
Kết quả trận A gặp B có tỉ số là p : q - Đội A ghi được p bàn thắng và thủng lưới q lần, kết quả trận A gặp C có tỉ số r : s - Đội A ghi được r bàn thắng và bị thủng lưới s lần, kết quả trận B gặp C có tỉ số u : v - Đội B ghi được u bàn và bị thủng lưới v lần.
Cho biết các số p, q, r, s, u, v, hãy tính và đưa ra số điểm của mỗi đội.
Dữ liệu vào:
Các số p, q, r, s, u, v (0 ≤ p, q, r, s, u, v ≤ 20)
Kết quả ra:
Ghi ba số lần lượt là số điểm của ba đội A, B, C. Ví dụ:

| FBALL.INP | FBALL.OUT |
| --- | --- |
| 9 7 7 5 4 8 | 6 0 3 |

BÀI 2. CẶP SỐ ĐẸP
Nội dung số học là một trong những chủ đề thú vị được khai thác rất nhiều trong các bài toán Tin học. Người ta có thể đưa ra những khái niệm mới đối với các số nguyên trong Tin học, ví dụ: số phong phú là số X mà tổng các ước (không kể chính nó) của nó lớn hơn X, hoặc cặp số bạn bè là cặp (a, b) mà tổng các ước (không tính a, b) của số này bằng số kia,   Trong bài toán này, chúng ta định nghĩa cặp số
đẹp (a,b) là cặp số mà tổng các chữ số của a và b bằng nhau, ví dụ: (14, 23) là cặp số đẹp vì 1+ 4 = 2 + 3, còn hai số (14, 25) không phải cặp số đẹp vì 1+ 4 ≠ 2 + 5.
Cho dãy số nguyên dương gồm n phần tử a1 a2,  , an. Hãy đếm số lượng cặp
số đẹp có trong dãy.
Dữ liệu vào:
Dòng thứ nhất chứa số nguyên dương n (1 ≤ n ≤ 3*105)
Dòng thứ hai chứa n số nguyên dương a1 a2,  , an (ai ≤ 109). Các số cách nhau
bởi dấu cách.

Kết quả ra:
Một số nguyên duy nhất là số lượng cặp số đẹp tìm được.
Ví dụ:


| BPAIRS.INP | BPAIRS.OUT |
| --- | --- |
| 5 3 8 21 17 12 | 4 |

Giải thích: Có 4 cặp số đẹp là (3, 21), (8, 17), (21, 12), (3, 12).
Giới hạn:
Subtask 1: Có 70% số test đầu tiên n ≤ 1000.
Subtask 2: Có 30% số test còn lại n ≤ 3*105.
BÀI 3. MỞ CỬA
Tầng áp mái thường được sử dụng như nhà kho lưu trữ các giấy tờ, đồ đạc cũ và ít ai lên đó. Hôm nay, Bình có việc cần lên đó tìm cuốn album lưu ảnh của những thế hệ trước trong gia đình.
Ổ khóa mở cánh cửa có hai núm xoay hình tròn, núm thứ nhất đang chỉ tới số a, núm thứ hai đang chỉ tới số b. Các núm chỉ có thể xoay theo chiều kim đồng hồ. Khi xoay một vòng, số được chỉ sẽ tăng thêm 1. Cánh cửa sẽ mở khi các số a và b nhận được có ước chung khác 1.
Đáng tiếc, do để lâu không dùng núm thứ nhất bị kẹt, không xoay được và vì vậy luôn chỉ tới số a. Như vậy chỉ có thề xoay núm thứ hai.
Hãy xác định số vòng xoay tối thiểu cần thực hiện của núm thứ hai để mở cửa.
Dữ liệu vào:
Dòng thứ nhất chứa số nguyên n là số cặp a, b (1 ≤ n ≤ 100);
Dòng thứ i trong n dòng sau chứa 2 số nguyên a và b, ghi cách nhau một dấu cách (2≤a,b≤109).
Kết quả ra:
Với mỗi test đã cho đưa ra trên một dòng một số nguyên là lời giải tìm được.
Ví dụ:


| DOOR.INP | DOOR.OUT |
| --- | --- |
| 3 | 2 |
| 15 7 | 12 |
| 23 11 | 0 |
| 35 42 |  |

* Ràng buộc:
Subtaskl: 50% số test tương ứng với n = 1,1 ≤ a, b ≤ 105
Subtask2: 30% số test tiếp theo tương ứng với 1 ≤ a, b ≤ 105

Subtask3: 20% số test còn lại không có ràng buộc gì.
BÀI 4. XẾP THÁP
Hội thi Olympic Khoa học viễn tưởng là hội thi thường niên diễn ra giữa các trường Trung học cơ sở trên cả nước, ngoài nội dung thi kiến thức học sinh giỏi, Ban tổ chức còn có nội dung thi vận động dành cho các bạn học sinh. Năm nay, hội thi được tổ chức tại trường Ngôi Sao - thành phố XYZ. Ban tổ chức sẽ có một trò chơi vận động mới đó là cuộc thi xếp tháp dành cho các đội chơi.
Mỗi độ chơi sẽ được Ban tổ chức cung cấp n khối hộp, và các đội phải xếp thành các tòa tháp thỏa mãn các yêu cầu sau:
Mỗi đội nhận khối hộp đầu tiên và tạo tháp đầu tiên.
Khi nhận được một khối hộp các đội phải xếp luôn vào tháp đã có hoặc tạo ra một tháp mới, sau đó mới được nhận khối hộp tiếp theo từ Ban tổ chức.
Các tòa tháp phải thỏa mãn điều kiện khối hộp ở trên có thể tích không lớn hơn khối hộp ở ngay dưới nó.
Không được chuyển khối hộp từ tòa tháp này sang tòa tháp khác.
Mỗi đội cần phải xếp được càng ít tòa tháp càng tốt.
Bạn là một thành viên của trường Trung học cơ sở HB tham gia cuộc thi xếp tháp, nhiệm vụ của bạn và đồng đội của mình là xếp được các tòa tháp thỏa mãn điều kiện của Ban tổ chức đưa ra.
Dữ liệu vào:
Dòng đầu tiên chứa số nguyên dương n là số lượng các khối hộp mà Ban tổ chức cung cấp cho trường Trung học cơ sở HB.
Dòng thứ hai chứa n số nguyên dương a1, a2,..., an (ai ≤ 109) là thể tích của các khối hộp.
Kết quả ra:
Một dòng duy nhất là số lượng tòa tháp ít nhất được tạo thành.
Ví dụ:


| TOWER.INP | TOWER.OUT |
| --- | --- |
| 5 3 8 5 2 2 | 2 |

* Giải thích ví dụ:


| Các khối hộp | Hình ảnh các tháp tạo đưọc |
| --- | --- |
| Khối hộp thứ nhất: 3 |  |
| Khối hộp thứ hai: 8 |  |



| Khối hộp thứ ba: 5 |  |
| --- | --- |
| Khối hộp thứ tư: 2 |  |
| Khối hộp thứ năm: 2 |  |

Giới hạn:
Subtaskl: 70% số test tương ứng với 1 ≤ n ≤ 1000
Subtask2: 30% số test tiếp theo tương ứng với 1 ≤ n ≤ 3*105
THCS Kon Tum 2020-2021
Bài 1. Khoảng cách
Cho số nguyên dương n và dãy số nguyên a1, a2, ..., an. Ta định nghĩa khoảng cách giữa hai số đứng ở vị trí i và j là |ai - aj|.
Yêu cầu: Tìm cặp chỉ số i và j sao cho khoảng cách khoảng cách của chúng là lớn nhất có thể.
Dữ liệu: Vào từ file văn bản KCACH.INP:
Dòng 1: Chứa số nguyên dương n (2 ≤ n ≤ 106).
Dòng 2: Chứa n số nguyên a1, a2, ..., an (|ai | ≤ 106, i = 1..n).
Kết quả: Ghi ra file văn bản KCACH.OUT hai số nguyên i, j (i < j) tìm được trên một dòng, các số cách nhau một dấu cách. Nếu có nhiều cặp số thỏa mãn thì in ra cặp có chỉ số nhỏ nhất.
Ví dụ:


| KCACH.INP | KCACH.OUT |
| --- | --- |
| 6 2 1 4 6 5 6 | 2 4 |

Ràng buộc:
60% số test ứng với 60% điểm của bài thỏa mãn điều kiện 2 ≤ n ≤ 103;
40% số test ứng với 40% điểm của bài thỏa mãn điều kiện 103 < n ≤ 106;
Bài 2. Phần thưởng
Trong cuộc thi năng khiếu môn Tin học do Sở Giáo dục và Đào tạo tổ chức, mỗi học sinh dự thi đều có số điểm thi tích lũy riêng của mình. Số điểm tích lũy của

mỗi học sinh là một số nguyên dương V. Đội tuyển của trường THCS Năng Khiếu có N học sinh tham gia dự thi. Tại buổi gặp mặt trước kỳ thi cấp tỉnh, thầy Hiệu trưởng mong muốn tặng thưởng cho các hoc sinh K triệu đồng; tuy nhiên, thầy vẫn còn phân vân và mong muốn các em học sinh giúp thầy đưa ra số nguyên dương K lớn nhất thoả mãn điều kiện điểm tích lũy của mỗi học sinh đều chia hết cho K.
Yêu cầu: Em được cho biết điểm tích lũy của N học sinh, Tìm K lớn thỏa mãn điều kiện bài toán.
Dữ liệu: Vào tử file văn bản PT.INP có cấu trúc như sau:
Dòng 1: Ghi số nguyên dương N là số lượng học sinh (2 ≤ N ≤ 100).
Dòng 2: Ghi N số nguyên dương lần lượt là điểm tích lũy của N học sinh, các số nguyên dương và không vượt quá 106, các số cách nhau ít nhất một dấu cách.
Kết quả: Ghi ra file văn bản PT.OUT một số nguyên dương K tìm được.
Ví dụ:


| PT.INP | PT.OUT |
| --- | --- |
| 5 15 24 45 36 27 | 3 |

Bài 3. Biển quảng cáo
Theo xu hướng hiện nay, nhiều cửa hàng, doanh nghiệp đều sử dụng loại biển quảng cáo led chữ chạy để quảng bá cho thương hiệu sản phẩm của mình. Mặc dù giá cả làm biển quảng cáo led chữ chạy có phần cao hơn các loại biển quảng cáo khác. Nhưng chất lượng và hiệu quả quảng cáo mà nó mang lại thì không thể phủ nhận được. Chính vì vậy mà loại biển quảng cáo này vẫn giành được ưu thế thượng phong trên thị trường. Được nhiều khách hàng lựa chọn.
Nam đang thiết kế biển quảng cáo led chạy chữ theo yêu cầu của khách hàng như sau: Biển quảng cáo chạy chữ chỉ gồm 1 hàng và có độ dài đúng N kí tự. Xâu kí tự chạy trên bảng quảng cáo được cho trong xâu S có đúng N kí tự. Nam thiết kế dòng chữ chạy từ phải sang trái bảng theo quy tắc vòng tròn sau: Ban đầu bảng quảng cáo chưa có kí tự nào, mỗi giây các kí tự dịch chuyển qua trái 1 đơn vị và lần lượt xuất hiện trên bảng quảng cáo. Như vậy ở giây thứ nhất, kí tự đầu tiên trong xâu S xuất hiện trên bảng; ở giây thứ 2, kí tự thứ nhất và thứ 2 trong xâu S xuất hiện trên bảng, ..., đến giây thứ N, tất cả N kí tự xuất hiện trên bảng; sau khi kí tự cuối cùng của xâu S xuất hiện trên bảng thì tiếp tục quay lại kí tự đầu tiên và cứ tiếp tục như vậy.
Ví dụ: với N = 5, xâu S = “ABCDE”, thì kết quả khi chạy bảng quảng cáo như sau:


| Thời gian (giây) | Kết quả xuất hiện trên biển quảng cáo |
| --- | --- |
| 1 | A |
| 2 | AB |
| 3 | ABC |
| 4 | ABCD |



| 5 | ABCDE |
| --- | --- |
| 6 | BCDEA |
| 7 | CDEAB |
| .... |  |

Nam có một câu hỏi muốn đố các bạn nhỏ yêu thích lập trình đó là: Với hệ thống thiết kế của Nam thì ở thời điểm T trên bảng quảng cáo hiển thị những gì? Các bạn hãy trả lời câu hỏi của Nam nhé.
Yêu cầu: Em được cho biết N, xâu S và số nguyên dương T. Hãy cho biết dòng chữ hiển thị trên bảng quảng cáo ở giây thứ T.
Dữ liệu: Vào từ file văn bản QUANGCAO.INP:
Dòng 1: Chứa hai số nguyên dương N, T (1 ≤ N ≤ 106; 1 ≤ T ≤ 109).
Dòng 2: Chứa xâu S có độ dài đúng N kí tự thuộc bảng chữ cái Latinh in hoa.
Kết quả: Ghi ra file văn bản QUANGCAO.OUT dòng chữ hiển thị trên bảng quảng cáo ở thời điểm T theo thứ tự xuất hiện trên bảng từ trái qua phải.
Ví dụ:


| QUANGCAO.INP | QUANGCAO.OUT |
| --- | --- |
| 5 8 ABCDE | DEABC |

Bài 4. Tổng lớn nhất
Từ khi An cài được phần mềm học tiếng anh với mật khẩu tìm được từ dãy số mà nhà sản xuất đã tặng, An rất thích thú với dãy số đã cho. Một hôm, An đến nhà Lâm chơi và kể cho Lâm nghe về việc được tặng một dãy số mật khẩu, nhìn thấy dãy số An nảy sinh ý tưởng và rủ Lâm chơi trò chơi tìm số. Hai bạn lần lượt mỗi người viết một số nguyên lên giấy roki, An viết số thứ nhất, Lâm viết số thứ hai, rồi đến lượt An viết số thứ ba,… Cứ tiếp tục như vậy hai bạn viết được một dãy gồm n số a1, a2, …, an. Đến đây hai bạn chưa kịp chơi trò chơi của mình thì bố của Lâm đi làm về, Bố của Lâm cũng là một giáo viên dạy môn toán cấp 2. Ông tiến lại gần, sẵn thấy dãy số ghi trên giấy, ông đã đặt ra câu đố và sẵn sàng trao thưởng nếu ai tìm ra được đáp án đúng, câu đố như sau: Tìm một đoạn liên tiếp các số trong dãy số trên sao cho tổng giá trị các số trong đoạn đó là lớn nhất. Vì dãy số có quá nhiều số nên cả hai bạn nhìn hoa cả mắt mà vẫn chưa tìm ra được đáp án. Bạn hãy lập trình giải giúp hai bạn nhé.
Yêu cầu: Em được cho biết n và dãy a1, a2, …, an. Tìm dãy số liên tiếp có tổng lớn nhất trong dãy a1, a2, …, an.
Dữ liệu: Vào từ file văn bản có tên SMAX.INP có dạng như sau:
Dòng đầu tiên ghi số nguyên n (1≤ n ≤ 106).
Dòng thứ hai ghi dãy n số nguyên a1, a2, …, an (-1000 ≤ ai ≤ 1000, i=1..n)
Kết quả: Ghi ra file văn bản SMAX.OUT gồm một số nguyên duy nhất là tổng lớn nhất của một đoạn liên tiếp các số trong dãy tìm được.

Ví dụ:


| SMAX.INP | SMAX.OUT |
| --- | --- |
| 10 2 -9 4 1 -3 5 8 -7 3 1 | 15 |

Ràng buộc:
Có 40% test ứng với 40% điểm của bài có 1≤ n ≤ 102;
Có 30% test ứng với 30% điểm của bài có 102 < n ≤ 103;
Có 30% test ứng với 30% điểm của bài có 103 < n ≤ 106;
THCS Kon Tum 2022-2023 Bài 1. RÚT GỌN PHÂN SỐ
Phân số 𝒂 là tối giản nếu a và b là nguyên tố cùng nhau, nghĩa là a và b có ước
𝒃
số chung lớn nhất là 1.
Yêu cầu: Hãy viết chương trình thực hiện rút gọn phân số về dạng tối giản.
Dữ liệu: Vào từ file RUTGON.INP gồm hai số nguyên dương a, b (1<a, b≤109).
Kết quả: Ghi ra file RUTGON.OUT gồm hai số nguyên dương tương ứng với tử số và mẫu số của phân số sau khi đã rút gọn.
Ví dụ:


| RUTGON.INP | RUTGON.OUT | Giải thích |
| --- | --- | --- |
| 12 18 | 2 3 | Rút gọn phân số 𝟏𝟐 ta được phân số 𝟏𝟖 𝟐  𝟑 |

Bài 2. HỘI THAO
Trong một đợt tổ chức hội thao cấp tỉnh dành cho học sinh trung học cơ sở, Ban Tổ chức hội thao đã nhận được sự hưởng ứng nhiệt tình của các bạn học sinh đến từ các trường học trung học cơ sở trên địa bàn tỉnh Kon Tum đăng ký tham gia với nhiều nội dung thi đấu. Có n học sinh đăng ký tham gia thi đấu tại hội thao. Các nội dung thi đấu được Ban Tổ chức hội thao đánh số từ 1 đến n và được phân loại theo nội dung thi đấu.
Theo kết quả phân loại, nội dung thi đấu thứ i được đặt tên là ai (1 ≤ i ≤ n). Vì số lượng nội dung thi đấu tại hội thao lần này được học sinh đăng ký rất nhiều và đa dạng, nên việc bố trí trọng tài điều khiển các nội dung thi đấu tương đối khó khăn.
Yêu cầu: Bạn hãy giúp Ban Tổ chức hội thao xác định số nội dung thi đấu khác nhau và nội dung thi đấu có nhiều học sinh đăng ký nhất trong hội thao lần này.
Dữ liệu: Vào từ file HOITHAO.INP gồm hai dòng:
Dòng đầu tiên: chứa một số nguyên n (1 ≤ n ≤ 106).

Dòng thứ hai: chứa n số nguyên a1, a2, ... , an tương ứng với các nội dung mà học sinh đăng ký thi đấu (1 ≤ ai ≤ 106, 1 ≤ i ≤ n).
Kết quả: Ghi ra file HOITHAO.OUT gồm 2 dòng:
Dòng thứ nhất: chứa số nguyên duy nhất chính là số nội dung khác nhau mà học sinh đăng ký thi đấu.
Dòng thứ hai: là số nguyên chính là nội dung thi đấu có nhiều học sinh đăng ký nhất (trường hợp có nhiều nội dung đăng ký nhiều nhất bằng nhau thì đưa ra nội dung ứng với số nhỏ nhất).
Ví dụ:


| HOITHAO.INP | HOITHAO.OUT |
| --- | --- |
| 6 1 4 4 2 5 4 | 4 4 |

Bài 3. TẠO XÂU
Nam rất thích tạo ra các xâu kí tự. Bố Nam nghĩ ra câu đố thử thách trí thông minh và tính kiên trì của Nam như sau: từ xấu s ban đầu gồm n kí tự khác nhau từng đôi một (3 < n≤52), hãy tạo ra các xâu mới khác bằng cách xóa đi không quá n-m kí tự (3≤m<n) và giữ nguyên thứ tự các kí tự còn lại của xâu s.
Ví dụ: với xâu s = KHOA và m=3 ta có thể tạo thành 5 xâu sau: KHO, KHA, KOA, HOA, KHOA.
Yêu cầu: Hãy giúp Nam đếm xem có bao nhiêu xâu được tạo ra từ xấu s theo cách như trên.
Dữ liệu: Vào từ file TAOXAU.INP gồm hai dòng:
Dòng đầu tiên: chứa hai số nguyên n,m (3 ≤ m <n≤52).
Dòng thứ hai: chứa xâu s gồm n kí tự.
Kết quả: Ghi ra file TAOXAU.OUT gồm 1 số nguyên dương là số xâu khác nhau tạo được từ xâu s.
Ví dụ:


| TAOXAU.INP | TAOXAU.OUT | Giải thích |
| --- | --- | --- |
| 4 3 KHOA | 5 | Từ xâu KHOA có thể tạo được 5 khóa sau: KHO, KHA, KOA, HOA, KHOA. |

Bài 4. CHỮ SỐ
Xét dãy các số tự nhiên ao, a1,..., an đuợc xây dựng theo quy tắc sau:
ao là một số tự nhiên cho trước có tối đa 10 chữ số.
Số ai (i > 0) là một số tự nhiên nhận được từ ai -1 bằng cách viết tiếp thêm vào sau số ai-1 các chữ số của ai-1 nhưng theo thứ tự ngược lại.

Ví dụ: Với ao = 123
thì a1= 123321, a2 = 123321123321, a3 = 123321123321123321123321
Yêu cầu: Với hai số tự nhiên n và m cho trước, hãy tìm chữ số thứ m của an. Dữ liệu: Vào từ file CHUSO.INP gồm hai dòng:
Dòng thứ nhất: chứa số ao.
Dòng thứ hai: chứa hai số tự nhiên n và m (1 ≤ n ≤ 25, 1 ≤ m ≤ 109)
Kết quả: Ghi ra file CHUSO.OUT chữ số thứ m tìm được. Nếu không tìm được ghi
-1.


| CHUSO.INP | CHUSO.OUT |
| --- | --- |
| 123 2 5 | 2 |

THCS Kon Tum 2023-2024
Bài 1. Số nhỏ nhất
Cho số nguyên dương n.
Yêu cầu: Hãy tìm số nguyên dương m nhỏ nhất sao cho tổng các chữ số của m đúng bằng n và các chữ số của m phân biệt (không có chữ số nào xuất hiện nhiều hơn 1 lần).
Dữ liệu: Vào từ file văn bản SONN.INP gồm một dòng chứa số nguyên dương n (1
≤ n ≤ 45).
Kết quả: Ghi ra file văn bản SONN.OUT số nguyên dương m tìm được.
Ví dụ:


| SONN.INP | SONN.OUT |
| --- | --- |
| 25 | 1789 |
| 44 | 23456789 |
| 11 | 29 |

Bài 2. Đội hình biểu diễn
Học sinh trường XYZ vinh dự được chọn tham gia biểu diễn trong lễ khai mạc Hội khỏe Phù Đổng tỉnh ZZZ. Để đội hình biểu diễn đồng đều, đẹp, Ban tổ chức muốn chọn những em học sinh có chiều cao bằng nhau trong n học sinh của trường XYZ.
Yêu cầu: Hãy giúp Ban tổ chức chọn ra một nhóm học sinh có chiều cao bằng nhau với số lượng nhiều nhất, nếu có nhiều nhóm có số lượng bằng nhau thì chọn nhóm có chiều cao lớn nhất.
Dữ liệu: Vào từ file văn bản DOIHINH.INP gồm:
Dòng 1: Số nguyên n (1 ≤ n ≤ 105) là số lượng học sinh của trường XYZ.

Dòng 2: Chứa n số nguyên h1, h2, …, hn (1 ≤ h ≤ 250) là chiều cao của các học sinh trường XYZ, các số cách nhau một khoảng trắng.
Kết quả: Ghi ra file văn bản DOIHINH.OUT hai số nguyên là chiều cao và số lượng học sinh được chọn, hai số cách nhau một khoảng trắng.
Ví dụ:


| DOIHINH.INP | DOIHINH.OUT |
| --- | --- |
| 6 156 161 158 161 159 161 | 161 3 |

Bài 3. Mã số bí ẩn
Bạn Nam rất thích chơi trò tìm số bí ẩn. Mỗi lần cả gia đình Nam phải đi vắng, Nam được giao nhiệm vụ khóa cửa và gửi một dòng tin nhắn hướng dẫn mở khóa cho cả gia đình. Nội dung tin nhắn gồm một xâu kí tự gồm các chữ cái in thường và các chữ số. Mã số bí ẩn để mở khóa chính là số lượng các số nguyên phân biệt xuất hiện trong dòng tin nhắn.
Ví dụ: Dòng tin nhắn gồm 1 xâu ab00012ggg12cvb5xyz12a07bb7 sẽ chứa 3 số nguyên phân biệt 12, 5, 7 (sau khi đã loại bỏ các số 0 ở đằng trước số 00012 và 07). Nên mật mã là 3.
Yêu cầu: Em hãy viết chương trình để giúp gia đình bạn Nam tìm ra mã số bí ẩn. Dữ liệu: Nhập dữ liệu từ file MS.INP một xâu (độ dài xâu ≤ 100) gồm các chữ số và các kí tự in thường.
Kết quả: Ghi ra file MS.OUT một số nguyên duy nhất là kết quả bài toán.
Ví dụ:


| MS.INP | MS.OUT |
| --- | --- |
| zz12bbblc2d3 | 4 |
| ss00013ab13xx23bb09cc9 | 3 |

Bài 4. Sắp xếp
Đầu mỗi năm mới, trường XYZ tổ chức Hội chợ xuân với rất nhiều trò chơi. Trò chơi i có thời gian bắt đầu b, và thời gian kết thúc kị. An muốn sắp xếp thời gian để có thể tham gia nhiều trò chơi nhất có thể mà không trùng về mặt thời gian.
Yêu cầu: Xác định số lượng trò chơi nhiều nhất mà An có thể tham gia.
Dữ liệu: Vào từ file văn bản SAPXEP.INP gồm n+1 dòng:
Dòng đầu ghi một số nguyên n (1 ≤ n ≤ 1000) là số lượng trò chơi.
Dòng thứ i trong n dòng tiếp theo chứa 2 số nguyên bị, ki (1≤bi < k ≤ 109) là thời điểm bắt đầu và thời điểm kết của trò chơi thứ i (1≤ i≤ n), hai số cách nhau một khoảng trắng.
Kết quả: Ghi ra file văn bản SAPXEP.OUT số nguyên là số lượng trò chơi nhiều nhất mà An có thể tham gia.

Ví dụ:


| SAPXEP.INP | SAPXEP.OUT | Giải thích |
| --- | --- | --- |
| 6 4	9 7	8 5	9 3	4 9	12 7	13 | 3 | Đầu tiên An tham gia trò chơi thứ 4, sau đó tham gia trò chơi thứ 2 và cuối cùng tham gia trò chơi thứ 5. |

THCS Lâm Đồng 2022-2023
Bài 1. Tính tổng
Yêu cầu: cho số tự nhiên n. Viết chương trình tính tổng:
1 . 2 . 3 + 2 . 3 . 4 + 3 . 4. 5 + … + (n – 1) . n . (n + 1)
Input: ghi số tự nhiên n (2 ≤ n ≤ 1020)
Output: ghi số nguyên duy nhất là kết quả cần tìm.


| CAU1.INP | CAU1.OUT | Giải thích |
| --- | --- | --- |
| 3 | 30 | 1.2.3 + 2.3.4 = 30 |
| 5 | 210 | 1.2.3 + 2.3.4 + 3.4.5 + 4.5.6 = 210 |

Bài 2. Giả thuyết goldbach
Giả thuyết Goldbach do nhà toán học người Đức Christian Goldbach (1690 – 1764) nêu ra vào năm 1742 trong một lá thư gửi tới Leonhard Euler, là một trong những bài toán lâu đời và nổi tiếng còn chưa giải được trong lý thuyết số nói riêng và toán học nói chung.
Giả thuyết phỏng đoán rằng: “Mỗi số tự nhiên chẵn lớn hơn 2 có thể biểu diễn bằng tổng của hai số nguyên tố”
Yêu cầu: viết chương trình để kiểm tra kết quả phỏng đoán của Goldbach.
Input
Dòng đầu tiên ghi số tự nhiên n (n ≤ 200) là số test cần kiểm tra.
n dòng tiếp theo, mỗi dòng ghi một số tự nhiên chẵn k (2 ≤ k ≤ 1012)
Output: gồm n dòng, mỗi dòng ứng với một test. Trên mỗi dòng, ghi hai số nguyên tố có tổng bằng số đã cho tương ứng, hai số ghi theo thứ tự tăng dần và cách nhau một khoảng trắng, nếu có nhiều kết quả thì ghi hai số có giá trị tuyệt đối của hiệu lớn nhất hoặc ghi “NO” nếu không tìm được.
Ví dụ:


| CAU2.INP | CAU2.OUT | Giải thích |
| --- | --- | --- |
| 2 14 24 | 3 11 5 19 | 14 = 3 + 11 = 7 + 7 24 = 5 + 19 = 7 + 17 = 11 + 13 |


Bài 3. DS Dãy số
Cho dãy số A gồm N phần tử là các số nguyên dương a1, a2, …, aN. Thực hiện lần lượt Q thao tác trên dãy số đó, thao tác thứ i sẽ có một trong hai loại như sau:
Loại 1: 1 pi mi xi tăng giá trị phần tử tại vị trí pi tới vị trí mi của dãy số A thêm xi đơn vị.
Loại 2: ui vi, tính tổng các phần tử của dãy số A từ vị trí ui tới vị trí vi.
Yêu cầu: Viết chương trình thực hiện Q thao tác và ghi ra kết quả của các thao tác Loại 2.
Input:
Dòng đầu tiên ghi hai số nguyên dương N, Q (0 < N, Q ≤ 105)
Dòng thứ hai là một dãy số gồm N số nguyên dương ai (0 < ai ≤ 1012), các số nằm trên một dòng và cách nhau một khoảng trắng.
Q dòng tiếp theo (từ dòng thứ 3 trở đi): với dòng thứ i số đầu tiên là 1 hoặc 2.
Nếu số 1 thì theo sau là 3 số nguyên dương pi mi và xi (1 ≤ pi ≤ mi ≤ N; 1 ≤ xi ≤ 109). Các số nằm trên một dòng và cách nhau một khoảng trắng.
Nếu số 2 thì theo sau là 2 số nguyên dương ui vi (1 < ui ≤ vi ≤ N). Các số nằm trên một dòng và cách nhau một khoảng trắng.
Output: gồm nhiều dòng, mỗi dòng ghi kết quả tương ứng với thao tác loại 2.
Ví dụ:


| CAU3.INP | CAU3.OUT |
| --- | --- |
| 8 4 5 6 9 1 2 1 10 15 1 4 7 15 2 3 8 1 2 5 17 2 1 6 | 98 137 |

Bài 4. Chương trình nghệ thuật
Trong một chương trình nghệ thuật diễn ra liên tục trong n giờ. Công ty X có danh sách của m nghệ sĩ khác nhau có thể thuê để biểu diễn. Thời điểm bắt đầu biểu diễn được tính bằng 0.
Để đơn giản trong quản lí và sắp xếp, các nghệ sĩ được đánh số theo thứ tự từ 1 tới m, nghệ sĩ thứ i (với i = 1, 2, …, m) biểu diễn trong thời điểm si đến thời điểm ti (0 ≤ si < ti ≤ n) với tiền công là ci (0 ≤ ci ≤ 106)
Yêu cầu: viết chương trình thuê các nghệ sĩ để bất cứ thời điểm nào cũng luôn có ít nhất một nghệ sĩ biểu diễn đồng thời chi phí thuê là nhỏ nhất.
Input
Dòng đầu tiên chứa 2 số nguyên n và m (1 ≤ n, m ≤ 400)
m dòng tiếp theo, mỗi dòng chứa ba số nguyên không âm si, ti và ci.

Output: một số nguyên là chi phí thuê nhỏ nhất (dữ liệu được cho đảm bảo luôn có kết quả)
Ví dụ:


| CAU4.INP | CAU4.OUT |
| --- | --- |
| 9 5 0 5 25 1 3 18 3 7 21 4 6 38 7 9 20 | 66 |

THCS Lào Cai 2022-2023
Bài 1. Độ đẹp
Một số tự nhiên N có càng nhiều ước số tự nhiên thì càng đẹp, em hãy tính độ đẹp của một số tự nhiên 𝑁 bất kì.
Dữ liệu vào: Đọc từ tệp bai1.inp ghi duy nhất một số tự nhiên 𝑁, biết 𝑁 ≤ 1014.
Kết quả: Ghi ra tệp bai1.out một số duy nhất là số ước của N
Ví dụ:


| bai1.inp | bai1.out | Giải thích |
| --- | --- | --- |
| 4 | 3 | Số 4 có 3 ước là: 1, 2, 4 |
| 1234 | 4 | Số 1234 có các ước là: 1, 2, 617, 1234 |

Có 85% test chấm bài có 1 ≤ 𝑁 < 108;
Có 15% test chấm bài có 109 ≤ 𝑁 ≤ 1014.
Bài 2.
Một số tự nhiên gọi là đối xứng khi viết các chữ số của nó theo chiều ngược lại thì ta vẫn thu được chính nó. Ví dụ như các số 66, 121 là số đối xứng.
Một số được coi là số đẹp nếu nó là số đối xứng và có từ 3 ước số nguyên tố khác nhau trở lên. Ví dụ: số 282 là số đẹp vì nó đối xứng và có 3 ước là số nguyên tố khác nhau là: 2, 3, 47. Hoặc số 858 cũng là số đẹp vì nó đối xứng và có 4 ước nguyên tố khác nhau là: 2, 3, 11, 13.
Yêu cầu: Cho hai số nguyên dương a, b. Đưa ra số lượng số đẹp trong đoạn từ a đến b.
Dữ liệu vào: Đọc vào từ tệp bai2.inp là hai số nguyên dương 𝑎, 𝑏 (1 < 𝑎 < 𝑏 ≤ 107)
Kết quả: Ghi kết quả ra tệp bai2.out là số lượng số đẹp trong đoạn a đến b.
Ví dụ:


| bai2.inp | bai2.out | Giải thích |
| --- | --- | --- |



| 1 1000 | 25 | Số đẹp trong đoạn 1 đến 1000: 66, 222, 252, 282, 414, 434, 444, 474, 494, 525, 555, 585, 595, 606, 616, 636, 646, 666, 696, 777, 828, 858, 868, 888, 969. |
| --- | --- | --- |

Có 80% số test chấm có: 1 ≤ 𝑁 ≤ 104.
Có 20% số test chấm có: 105 < 𝑁 ≤ 107.
Bài 3.
Cho dãy số tự nhiên gồm N phần tử: 𝑎1, 𝑎2, … 𝑎𝑁 và một số tự nhiên K. Yêu cầu: Đếm số lượng cặp chỉ số (𝑖, 𝑗) mà 𝑖 < 𝑗 và 𝑎𝑖 + 𝑎𝑗 = 𝐾 trong dãy. Dữ liệu vào: Đọc dữ liệu vào từ tệp bai3.inp.
Dòng đầu là hai số nguyên dương 𝑁, 𝐾 (2 ≤ 𝑁 ≤ 3.106; 1 ≤ 𝐾 ≤ 106).
Dòng sau là dãy số: 𝑎1, 𝑎2, … 𝑎𝑁 các số đều không quá 106.
Kết quả: Ghi kết quả ra tệp bai3.out là số lượng cặp 𝑎𝑖, 𝑎𝑗 có tổng bằng K.
Ví dụ:


| bai3.inp | bai3.out | Giải thích |
| --- | --- | --- |
| 5 1 1 5 4 1 2 | 0 | Không có cặp 𝑎𝑖 + 𝑎𝑗  = 1 |
| 4 6 3 2 3 3 | 3 | Có 3 cặp {𝑎1, 𝑎3}; {𝑎1, 𝑎4}; {𝑎3, 𝑎4} có tổng bằng 6 |

Có 80% số test chấm có: 1 ≤ 𝑁 ≤ 103.
Có 20% số test chấm có: 103 < 𝑁 ≤ 3.106.
Bài 4.
Cho một xâu kí tự X gồm các chữ cái in thường từ ‘a’ đến ‘z’. Độ dài của xâu X không quá 106. Người ta mã hóa xâu X thành xâu Y theo cách như sau:
Ban đầu xâu Y rỗng.
Đưa một kí tự trong xâu X vào cuối của xâu Y và lập tức đảo ngược xâu Y. Các kí tự của xâu X cứ đưa lần lượt như thế vào xâu Y.
Em hãy in ra xâu Y cuối cùng nhận được khi đã đưa hết các kí tự của xâu X
vào.
Dữ liệu vào: Đọc vào từ tệp bai4.inp ghi một dòng duy nhất là xâu X
Kết quả: Ghi ra tệp bai4.out ghi một dòng duy nhất là xâu Y
Ví dụ:


| bai4.inp | bai4.out | Giải thích |
| --- | --- | --- |
| abc | cab | Đưa lần lượt các kí tự vào ta được xâu Y như sau: Bước 1: Thêm ‘a’ và đảo ngược ta được Y = a Bước 2: Thêm ‘b’ và đảo ngược ta được Y = ba |



|  |  | Bước 3: Thêm ‘c’ và đảo ngược ta được Y = cab |
| --- | --- | --- |

Có 55% test chấm bài có độ dài xâu X không quá 255;
Có 20% test chấm bài có độ dài xâu X không quá 104;
Có 25% test chấm bài có độ dài xâu X không quá 106.
Bài 5.
Cho dãy gồm 𝑁 số tự nhiên: 𝑎1, 𝑎2, … 𝑎𝑁. Người ta gọi một đoạn gồm các phần tử liên tiếp bất kì trong dãy ban đầu là đoạn con. Hai đoạn con là khác nhau nếu tồn tại ít nhất một phần tử không thuộc vào cả hai đoạn. Ví dụ dãy:
{𝑎1; 𝑎2; 𝑎3; 𝑎4}	thì	có	mười	đoạn	con	là:
{𝑎1}, {𝑎2}, {𝑎3}, {𝑎4}, {𝑎1; 𝑎2}, {𝑎2; 𝑎3}, {𝑎3; 𝑎4}, {𝑎1; 𝑎2; 𝑎3}, {𝑎2; 𝑎3; 𝑎4},
{𝑎1; 𝑎2; 𝑎3; 𝑎4}.
Hãy đếm số đoạn con mà có tổng các lũy thừa bậc 𝑀 của các phần tử của đoạn đó chia hết cho 𝐾.
Dữ liệu vào: Đọc dữ liệu vào từ tệp bai5.inp
Dòng đầu ghi 3 số tự nhiên 𝑁, 𝑀, 𝐾 tương ứng là số phần tử của dãy ban đầu, số mũ, và số K cần chia hết. (1 ≤ 𝑁 ≤ 105; 1 ≤ 𝑀 ≤ 1018; 1 ≤ 𝐾 ≤ 105).
Dòng tiếp theo ghi N số tự nhiên 𝑎1, 𝑎2, … 𝑎𝑁 (các số đều không vượt quá
1050, hay là: 0 ≤ 𝑎𝑖 ≤ 1050 với mọi 𝑖 )
Kết quả: Ghi kết quả ra tệp bai5.out
Ghi số đoạn con mà có tổng các lũy thừa bậc M của các phần tử chia hết cho
K.
Ví dụ:


| bai5.inp | bai5.out | Giải thích |
| --- | --- | --- |
| 4 1 3 3 2 1 5 | 4 | Có các đoạn {3},{2;1}, {1;5}; {3;2;1} vì: 31 ⋮ 3, (21 + 11) ⋮ 3; (11 + 51) ⋮ 3; (31 + 21 + 11) ⋮ 3 |
| 4 2 3 3 2 1 5 | 3 | Có các đoạn {3}, {2;1;5}, {3;2;1;5} vì: 32 ⋮ 3; (22 + 12 + 52) ⋮ 3; (32 + 22 + 12 + 52) ⋮ 3 |

Có 45% test chấm bài có 𝑀 = 1, 𝑁 ≤ 103, 𝑎𝑖 ≤ 106;
Có 30% test chấm bài có 𝑀 ≤ 1000, 𝑁 ≤ 105, 𝑎𝑖 ≤ 109;
Có 25% test chấm bài có 109 ≤ 𝑀 ≤ 1018, 𝑁 ≤ 105, 1030 ≤ 𝑎𝑖 ≤ 1050.
THCS Nam Định 2017-2018
Bài 1. Xâu chuẩn
Cho xâu S chỉ gồm các dấu ngoặc ‘(’ và dấu ngoặc ‘)’ với độ dài tối đa 255
kí tự.
Xâu S được xác định là một xâu chuẩn nếu thỏa mãn các điều kiện sau:
Số dấu ngoặc mở bằng số dấu ngoặc đóng.

Nếu duyệt từ trái sang phải, số lượng dấu ngoặc mở luôn lớn hơn hoặc bằng số lượng dấu ngoặc đóng.
Ví dụ: Xâu ‘( ( ) ( ( ) ) )’ có cách đặt ngoặc đúng là xâu chuẩn. Xâu ‘( ) ( ) ) )’ có cách đặt ngoặc không đúng là xâu không chuẩn.
Yêu cầu: Hãy viết chương trình kiểm tra xâu S có phải là xâu chuẩn hay không?
Dữ liệu: Vào từ tệp văn bản CHUAN.INP chứa xâu S chỉ gồm các dấu ngoặc.
Kết quả: Ghi ra tệp văn bản CHUAN.OUT có nội dung CHUAN hoặc KHONG tương ứng với dữ liệu vào.
Ví dụ:


| CHUAN.INP | CHUAN.OUT | Chú thích |
| --- | --- | --- |
| ( ( ) ( ( ) ) ) | CHUAN | Kết quả phải ghi chữ in hoa |
| ( ) ( ) ) ) | KHONG | Kết quả phải ghi chữ in hoa |

Bài 2. Đoạn con dài nhất
Cho dãy N số nguyên (0 < N ≤ 105) và số nguyên dương K.
Yêu cầu: Hãy tìm đoạn con dài nhất các phần tử liên tiếp nhau cùng chia hết cho K.
Dữ liệu: Vào từ tệp văn bản DAYCON.INP
Dòng thứ nhất ghi 2 số nguyên N và K cách nhau một dấu cách.
Dòng thứ hai ghi N số nguyên dương ai (ai ≤ 109, i ≤ N), mỗi số cách nhau một dấu cách.
Kết quả: Ghi ra tệp văn bản DAYCON.OUT gồm một số nguyên duy nhất là độ dài của đoạn con tìm được.
Ví dụ:


| DAYCON.INP | DAYCON.OUT |
| --- | --- |
| 4 6 6 14 6 24 | 2 |

Bài 3. Xe buýt
Trên những con đường nối liền các huyện, thành phố của tỉnh Nam Định, các chuyến xe buýt được tổ chức theo cách sau đây: Xe buýt có thể chạy không dừng theo các đoạn 1, 2, 3, …, 9 km. Với mỗi đoạn trong 9 đoạn này có giá vé cố định cho trong một bảng.
Ví dụ như bảng giá vé sau:


| Độ dài đoạn đường đi | Giá vé |
| --- | --- |
| 1 km | 12 |
| 2 km | 19 |
| 3 km | 31 |
| 4 km | 40 |
| 5 km | 61 |



| 6 km | 65 |
| --- | --- |
| 7 km | 69 |
| 8 km | 79 |
| 9 km | 90 |

Một hành khách muốn đi N km bằng xe buýt (1 ≤ N ≤ 1000).
Yêu cầu: Hãy viết chương trình để hành khách có thể chọn những khoảng cách dừng xe hợp lý để hành trình phải trả tiền ít nhất.
Dữ liệu: Vào từ tệp văn bản BUS.INP
Dòng đầu tiên ghi số N.
Dòng thứ hai ghi 9 số nguyên dương là giá tiền tương ứng của các đoạn 1, 2,
…, 9 km.
Kết quả: Ghi ra tệp văn bản BUS.OUT gồm một số nguyên duy nhất là số tiền ít nhất phải trả.
Ví dụ:


| BUS.INP | BUS.OUT |
| --- | --- |
| 5 12 19 31 40 61 65 69 79 90 | 50 |

Bài 4. Xếp gạch
Có N đống gạch được xếp thành một hàng, đống thứ i có ai viên gạch. Người ta có thể ghép hai đống gạch kề nhau thành một đống và mất một chi phí thời gian có giá trị bằng tổng số viên gạch của hai đống gạch đó (để ghép đống gạch thứ i thì mất ai đơn vị thời gian).
Yêu cầu: Hãy viết chương trình để ghép N đống gạch trên thành một đống sao cho tổng thời gian là lớn nhất.
Dữ liệu: Vào từ tệp GACH.INP
Dòng đầu tiên ghi số N (1 < N ≤ 100) là số đống gạch.
Dòng thứ hai ghi N số nguyên dương ai, với ai là số viên gạch của đống thứ i (ai ≤ 1000; 1 ≤ i ≤ N).
Kết quả: Ghi ra tệp GACH.OUT gồm một số nguyên duy nhất là tổng thời gian lớn nhất tìm được.
Ví dụ:


| GACH.INP | GACH.OUT | Chú thích cho ví dụ bên |
| --- | --- | --- |
| 4 5 2 8 3 | 43 | Bước 1. Ghép đống 2 và đống 3: thời gian là 2+8=10 Bước 2. Ghép đống 1 và đống vừa ghép ở bước 1: thời gian là 5+10 = 15 Bước 3. Ghép đống ở bước 2 với đống |



|  |  | còn lại: thời gian là 15+3 = 18 Tổng thời gian là: 10+15+18=43 |
| --- | --- | --- |

THCS Nam Định 2018-2019
Bài 1. Số tương lai

Số đảo ngược của một số abc là cba , một số được coi là số tương lai nếu ước chung lớn nhất của số đó với số đảo ngược của nó bằng 1. Ví dụ số 23 có số đảo ngược là 32, hai số này có ước chung lớn nhất là 1 nên số 23 là số tương lai và 32 cũng là số tương lai.
Yêu cầu: Cho 2 số tự nhiên a, b (10 < a ≤ b ≤ 105). Đếm xem trong đoạn từ a đến b có bao nhiêu số tương lai.
Dữ liệu: Vào từ file văn bản SOTL.INP gồm một dòng duy nhất chứa hai số a và b.
Kết quả: Đưa ra file văn bản SOTL.OUT số lượng số tương lai trong đoạn [a;b].
Ví dụ: a =19, b = 29 có các số tương lai là: 19, 23, 25, 29.


| SOTL.INP | SOTL.OUT |
| --- | --- |
| 19 29 | 4 |

Bài 2. Hộp quà
Có N hộp quà được đánh số từ 1 đến N, hộp quà thứ i (i = 1, 2,.., N) có giá trị thẩm mỹ là mi. Nếu xếp lần lượt các hộp qùa theo số thứ tự 1, 2,…, N thì giá trị thẩm mỹ của N hộp qùa là m1 + m2 + ... + mN + max(0, m2 - m1) + max(0, m3 - m2) + ... + max(0, mN - mN - 1). Học sinh An được giao nhiệm vụ là tìm ra cách xếp N hộp quà sao cho giá trị thẩm mỹ của N hộp quà là lớn nhất.
Yêu cầu: Cho N và mi, i = 1, 2,.., N. Xác định giá trị thẩm mỹ lớn nhất của N hộp quà.
Dữ liệu: Vào từ file văn bản HOPQUA.INP gồm:
Dòng đầu tiên chứa số nguyên N (1≤ N≤105).
Dòng thứ 2 chứa N số nguyên m1, m2, . . ., mn (1 ≤ mi ≤ 10000). Các số ghi cách nhau một dấu cách.
Kết quả: Đưa ra file văn bản HOPQUA.OUT giá trị thẩm mỹ lớn nhất của N hộp quà.
Ví dụ:


| HOPQUA.INP | HOPQUA.OUT |
| --- | --- |
| 5 5 3 1 7 10 | 39 |

Bài 3. Tìm kho báu
Trong trò chơi tìm kho báu của mụ phù thủy, chỉ có một con đường duy nhất để tìm ra kho báu. Trên con đường có một hàng N cây, cây thứ i có độ cao là Hi. Để

tìm được kho báu Hoàng được mụ phù thủy đưa cho một khóa K. Nhiệm vụ của cậu ta là phải đánh dấu được nhiều cây nhất, các cây được đánh dấu là các cây có độ chêch lệch về chiều cao không vượt quá khóa K.
Yêu cầu: Cho N, K và Hi, i = 1, 2,..N. Xác đinh số lượng cây nhiều nhất và chiều cao của các cây mà Hoàng đánh dấu.
Dữ liệu: Vào từ file văn bản KHOBAU.INP gồm:
Dòng đầu tiên chứa 2 số nguyên N và K. (1≤ N≤2.104, 1 ≤ K ≤ 109)
Dòng thứ 2 chứa N số nguyên H1, H2,.., Hn (1 ≤ Hi ≤ 109, i = 1, 2..N). Các số viết cách nhau một dấu cách.
Kết quả: Đưa ra file văn bản KHOBAU.OUT gồm:
Dòng đầu tiên chứa số lượng cây nhiều nhất mà Hoàng cần đánh dấu
Dòng thứ 2 chứa chiều cao của các cây. Nếu không có thì in ra -1
Ví dụ:


| KHOBAU.INP | KHOBAU.OUT |
| --- | --- |
| 8 10 10 5 90 6 20 9 16 100 | 5 10 5 6 9 16 |

Bài 4. Số đối xứng
Số nguyên không âm được gọi là số palindrome nếu trong biểu diễn hệ 10 (không có số 0 không có nghĩa) đọc từ trái sang phải cho kết quả giống như đọc từ phải sang trái.
Ví dụ: Các số sau là palindrome: 5, 343, 66811866.
Yêu cầu: Cho số nguyên không âm X (X có không quá 10000 chữ số). Hãy tìm một số palindrome lớn nhất có trong X.
Dữ liệu: Vào từ file văn bản PALIND.INP gồm duy nhất một số nguyên X.
Kết quả: Đưa ra file văn bản PALIND.OUT gồm 2 dòng.
Dòng đầu tiên ghi số chữ số của số palindrome lớn nhất có trong X.
Dòng thứ 2 ghi số palindrome lớn nhất có trong X.
Ví dụ:


| PALIND.INP | PALIND.OUT |
| --- | --- |
| 21314 | 3 131 |
| 2131451516 | 3 515 |

THCS Nam Định 2021-2022 Bài 1. ĐẾM ƯỚC
Nếu số tự nhiên a chia hết cho số tự nhiên b thì ta nói b là ước số của a. Ví

dụ: 20 có các ước số là 1, 2, 4, 5, 10, 20; số lượng ước của 20 là 6. Như vậy 20 có số lượng ước là chẵn.
Yêu cầu: Cho số tự nhiên n và dãy số tự nhiên x1, x2,…,xn. Đếm xem có bao nhiêu số có số lượng các ước là chẵn, bao nhiêu số có số lượng các ước là lẻ.
Dữ liệu: Vào từ tệp văn bản DEMUOC.INP gồm:
Dòng 1: ghi số tự nhiên n (1≤ n≤ 100).
n dòng tiếp theo: mỗi dòng ghi một số tự nhiên xi (1≤ xi ≤ 1018).
Kết quả: Đưa ra tệp văn bản DEMUOC.OUT gồm 2 dòng:
Dòng 1: ghi số lượng các số có số ước là chẵn.
Dòng 2: ghi số lượng các số có số ước là lẻ.
Ví dụ:


| DEMUOC.INP | DEMUOC.OUT | Giải thích |
| --- | --- | --- |
| 4 2 3 4 5 | 3 1 | có 3 số có số lượng ước chẵn là 2, 3, 5; và 1 số có số lượng ước lẻ là 4 |

Bài 2. SỐ ĐẸP
Số nguyên dương N được gọi là đẹp nếu thỏa mãn hai điều kiện sau:
N là số lẻ.
N và 𝑁+1 là số nguyên tố.
2
Ví dụ: N = 5 là số đẹp vì 5 là số lẻ, N = 5 và 𝑁+1 = 3 là số nguyên tố.
2
Yêu cầu: Cho Q câu hỏi, câu hỏi thư i gồm hai số nguyên Li, Ri, cho biết có bao nhiêu số đẹp trong các số từ Li đến Ri
Dữ liệu: Vào từ tệp văn bản SODEP.INP
Dòng 1 chứa số nguyên Q (1≤ Q ≤ 105).
Q dòng sau: dòng thứ i gồm hai số nguyên Li, Ri (1≤ Li ≤ Ri ≤106)
Kết quả: Đưa ra tệp văn bản SODEP.OUT gồm Q dòng, dòng thứ i là kết quả câu hỏi thứ i.
Ví dụ:


| SODEP.INP | SODEP.OUT |
| --- | --- |
| 2 3 7 9 10 | 2 0 |

Bài 3. ĐÁ QUÝ
Công ty kinh doanh đá quý DQ có 26 loại đá quý khác nhau. Mỗi loại được

kí hiệu bằng một chữ cái viết hoa trong bảng chữ cái tiếng Anh. Từ các loại đá trên người ta tạo ra các chuỗi đá quý khác nhau và lưu cấu trúc của chúng vào máy tính. Vì mỗi chuỗi có thể rất dài nên để tiết kiệm không gian lưu trữ người ta nén chuỗi như sau:
Đọc lần lượt các kí tự trong chuỗi từ trái sang phải, nếu xâu con X có độ dài m xuất hiện liên tiếp k lần trong chuỗi thì thay bằng 3 giá trị: m, X, k.
Ví dụ: chuỗi MMPNQPNQABABM có thể nén lại như sau:
4 1 M 2 3 PNQ 2 2 AB 2 1 M 1
Khi đọc lần lượt các kí tự từ trái sang phải: chuỗi gồm 4 đoạn, đoạn có độ dài 1 là M lặp lại 2 lần, đoạn có độ dài 3 là PNQ lặp lại 2 lần, đoạn có độ dài 2 là AB lặp lại 2 lần, đoạn có độ dài 1 là M lặp lại 1 lần.
Vì chuỗi hạt hình tròn nên có thể bắt đầu từ một vị trí bất kì theo hướng bất kì. Ta có thể có nhiều cách ghi khác nhau đối với mỗi chuỗi. Chuỗi trên cũng có thể được viết là MMMBABAQNPQNP và được nén như sau: 3 1 M 3 2 BA 2 3 QNP
2
Yêu cầu: Cho 2 dòng mô tả chuỗi đá quý đã được nén. Kiểm tra 2 dòng này có mô tả cùng một chuỗi hay không?
Dữ liệu: Vào từ tệp văn bản DAQUY.INP gồm 2 dòng, mỗi dòng là mô tả về một chuỗi đá quý đã nén. Các phần trên 1 dòng cách nhau bởi 1 dấu cách, dữ liệu vào đảm bảo chiều dài của chuỗi ban đầu không quá 104 kí tự.
Kết quả: Ghi vào tệp văn bản DAQUY.OUT gồm 2 dòng:
Dòng 1: ghi xâu kí tự ‘CO’ nếu hai dòng mô tả cùng một chuỗi đá quý, ngược lại thì ghi xâu kí tự ‘KHONG’.
Dòng 2: đưa ra độ dài của 2 chuỗi sau khi đã giải nén theo thứ tự đọc vào, mỗi số cách nhau 1 dấu cách.
Ví dụ:


| DAQUY.INP | DAQUY.OUT |
| --- | --- |
| 4 1 M 2 3 PNQ 2 2 AB 2 1 M 1 3 1 M 3 2 BA 2 3 QNP 2 | CO 13 13 |
| 2 2 XY 3 1 K 6 1 2 CB 5 | KHONG 12 10 |

Bài 4. SOẠN VĂN BẢN
Đúng lúc An hào hứng làm bài tập tin học nhất thì bàn phím lại bị hỏng: chỉ gõ được các ký tự chữ cái. Nhiệm vụ của An là soạn thảo một văn bản chỉ sử dụng
𝒏 từ trong một danh sách cho trước. An quyết định vẫn làm bài tập trên máy của mình, sau đó copy sang máy của một bạn khác trong lớp và chèn thêm dấu cách vào giữa các từ, giữa hai từ sẽ chèn đúng một dấu cách. Như vậy ít ảnh hưởng đến thời gian sử dụng máy của bạn nhất.
Ví dụ: với n = 5 và danh sách các từ cho trước là an, anh, han, tin, hoc; An

soạn sẵn dòng anhanhoctin, sau đó mang sang máy của bạn và chèn thêm dấu cách thành anh an hoc tin.
Tuy nhiên khi bắt tay vào chèn dấu cách, An mới nhận thấy rằng vấn đề cũng không đơn giản vì có thể có nhiều cách, thậm chí có thể không có cách chèn nếu gõ văn bản sai.Ví dụ: với dòng anhanhoctin ta có một cách đặt dấu cách khác thỏa mãn là: an han hoc tin.
Yêu cầu: Cho 𝒏, danh sách các từ được sử dụng (mỗi từ có thể được sử dụng trong văn bản nhiều lần hoặc không dùng lần nào) và văn bản không có dấu cách. Hãy xác định số cách chèn kí tự trắng (dấu cách) để được một văn bản chỉ gồm các từ có trong 𝒏 từ đã cho.
Dữ liệu: Vào từ tệp văn bản VANBAN.INP:
Dòng đầu tiên chứa số nguyên n (1 < n ≤ 100).
𝒏 dòng sau: mỗi dòng chứa một từ được sử dụng (mỗi từ không quá 20 ký tự, các từ khác nhau từng đôi một).
Dòng cuối cùng chứa văn bản An đã gõ chứa không quá 100 kí tự.
Kết quả: Đưa ra tệp văn bản VANBAN.OUT một số nguyên xác định số cách chèn dấu cách.
Ví dụ:


| VANBAN.INP | VANBAN.OUT |
| --- | --- |
| 5 anh an han hoc tin anhanhoctin | 2 |

(Giải thích: Hai cách đặt dấu cách là: anh an hoc tin; an han hoc tin)
THCS Nam Định 2022-2023
Bài 1. Mua bánh
Trong một đợt khảo sát để thu nhận thông tin từ phía học sinh, cơ sở kinh doanh ABC có ý định tặng quà cho những học sinh tham gia khảo sát. Nhân viên A dự định mua bánh để tặng cho học sinh. A nhận thấy là cần mua tối thiểu n chiếc bánh để tặng cho học sinh. Tại cửa hàng bán bánh, biết đơn giá mỗi chiếc bánh là m đồng. Nếu mua từ k chiếc bánh trở lên thì được giảm giá 20% (Có thể mua được nhiều hơn n chiếc bánh mà chi phí ít tiền hơn).
Yêu cầu: Cho biết n - số bánh A cần mua tối thiểu, m - giá của một chiếc bánh và k – số lượng bánh được áp giảm giá. Hãy xác định số tiền tối thiểu A cần dùng mua bánh để tặng học sinh?
Dữ liệu vào: Từ tệp văn bản BANH.INP, chứa duy nhất một dòng có ba số nguyên

n, m và k. (1 ≤ n ≤ 100; 1 ≤ m ≤ 10000; 1 ≤ k ≤ 100)
Kết quả: Đưa ra tệp văn bản BANH.OUT, chứa một số nguyên là kết quả tìm được theo yêu cầu (nếu kết quả không là số nguyên thì chỉ giữ lại phần nguyên).
Ví dụ:


| BANH.INP | BANH.OUT |
| --- | --- |
| 10 1000 5 | 8000 |

Bài 2. Số chính phương lẻ
Trong một đợt khảo sát, cơ sở kinh doanh ABC có ý định tặng quà cho những học sinh tham gia. Nhân viên B có phát ra các phiếu khảo sát gắn số hiệu. Do kinh phí tặng quà có hạn nên B chỉ lựa chọn tặng quà cho những học sinh có phiếu với số hiệu là số chính phương lẻ. (Số chính phương là số bằng bình phương đúng của một số nguyên; ví dụ: số 4 và số 9 là số chính phương, số 9 là số chính phương lẻ).
Yêu cầu: Cho số tự nhiên n. Hãy xác định số lượng các số chính phương lẻ trong khoảng từ 1 đến n và tổng của chúng?
Dữ liệu vào: Từ tệp văn bản CPL.INP, chứa duy nhất số n (0 < n < 109).
Kết quả: Đưa ra tệp văn bản CPL.OUT, gồm 2 dòng:
Dòng 1: chứa một số là số lượng các số chính phương lẻ.
Dòng 2: chứa một số là tổng của các số chính phương lẻ theo yêu cầu.
Ví dụ:


| CPL.INP | CPL.OUT |
| --- | --- |
| 9 | 2 10 |

Bài 3. Sắp xếp phiếu
Trong một đợt khảo sát thu nhận thông tin từ khách hàng của cơ sở kinh doanh ABC, nhân viên B có phát ra n phiếu (các phiếu được ghi số hiệu không trùng nhau). Sau khảo sát nhận về đủ n phiếu đó nhưng số hiệu các phiếu có thể chưa đúng thứ tự tăng. B làm theo các đợt lựa chọn các phiếu để xếp lại thứ tự. Mỗi đợt lựa chọn thực hiện: mở phiếu nhận về từ đầu đến cuối, chọn phiếu số hiệu phù hợp tiếp theo.
Ví dụ: có 5 phiếu nhận về có thứ tự số hiệu: 3, 1, 4, 2 và 5. Đợt 1 chọn phiếu có số hiệu 1 và 2; đợt 2 chọn phiếu có số hiệu 3, 4 và 5. (đầu tiên phải chọn phiếu số hiệu 1, tiếp theo là phiếu số hiệu 2...; nếu cần k đợt thì phiếu số hiệu n chọn cuối cùng của đợt k).
Yêu cầu: Cho biết số hiệu của n phiếu nhận về. Hãy xác định số đợt lựa chọn ít nhất nhân viên cần thực hiện để nhận được các phiếu có số hiệu theo thứ tự tăng?
Dữ liệu vào: Từ tệp văn bản PHIEU.INP gồm hai dòng:
Dòng 1: chứa số nguyên dương n, là số lượng phiếu (1 < n < 107).
Dòng 2: chứa n số nguyên dương, số thứ i là Ai – số hiệu của của phiếu số i (Ai ≤ n).

Kết quả: Đưa ra tệp văn bản PHIEU.OUT, chứa một số nguyên là kết quả tìm được theo yêu cầu.
Ví dụ:


| PHIEU.INP | PHIEU.OUT |
| --- | --- |
| 5 3 1 4 2 5 | 2 |

Bài 4. Khảo sát TB
Cơ sở kinh doanh ABC nhận về n phiếu của đợt khảo sát. Nhân viên T cần phân tích dữ liệu dựa vào các phiếu khảo sát đó. Mỗi phiếu đã được tính điểm và ghi nhận lại theo cách của T. Điểm của phiếu số i là Ai (với i ≠ j thì Ai ≠ Aj). Nếu 3 phiếu số i, j và k thỏa mãn điều kiện: Ai + Aj = 2*Ak (với i ≠ j, j ≠ k và i ≠ k) thì 3 phiếu đó có tính chất TB. T cần xác định số cặp phiếu có tính chất TB.
Yêu cầu: Cho biết điểm của n phiếu. Hỏi có bao nhiêu cặp 3 phiếu có tính chất TB?
Dữ liệu vào: Từ tệp văn bản TB.INP gồm hai dòng:
Dòng 1: chứa số nguyên dương n, là số lượng phiếu (2 < n ≤ 104).
Dòng 2: chứa n số nguyên, số thứ i là Ai – điểm của phiếu số i (|Ai | ≤ 106).
Kết quả: Đưa ra tệp văn bản TB.OUT, chứa một số nguyên là kết quả tìm được theo yêu cầu.
Ví dụ:


| TB.INP | TB.OUT |
| --- | --- |
| 5 2 3 1 5 6 | 2 |

Bài 5. Khảo sát TBZ
Cơ sở kinh doanh ABC nhận về n phiếu của đợt khảo sát. Nhân viên TZ cần phân tích dữ liệu dựa vào các phiếu khảo sát đó. Mỗi phiếu đã được TZ tính điểm và ghi nhận thành dãy số A. Dãy A có n số nguyên, điểm của phiếu số i là Ai.
Gọi dãy B là dãy con của A có tính chất TBZ nếu thỏa mãn cả ba điều kiện:
+ Điều kiện 1: k là số phần tử thuộc B thì k phải lớn hơn 1.
+ Điều kiện 2: Tồn tại giá trị i (0 < i ≤ n-k+1) sao cho: Ai=B1; Ai+1=B2; …; Ai+k-1=Bk.
+ Điều kiện 3: Tổng các phần tử của B bằng 0.
TZ cần xác định số dãy con của A có tính chất TBZ.
Yêu cầu: Cho biết thông tin của dãy A. Hỏi A có bao nhiêu dãy con có tính chất TBZ?
Dữ liệu vào: Từ tệp văn bản TBZ.INP có cấu trúc như sau:
Dòng 1: chứa số nguyên dương n là số lượng phiếu (1 < n ≤ 107).
Dòng 2: chứa n số, số thứ i là Ai – điểm của phiếu số i (|Ai| ≤ 109).

Kết quả: Đưa ra tệp văn bản TBZ.OUT, chứa một số nguyên là kết quả tìm được theo yêu cầu.
Ví dụ:


| TBZ.INP | TBZ.OUT | Giải thích: Có 2 dãy thỏa mãn Dãy 1: 2 -3	1 Dãy 2: 1	5	-6 |
| --- | --- | --- |
| 5 2 -3 1 5 -6 | 2 | Giải thích: Có 2 dãy thỏa mãn Dãy 1: 2 -3	1 Dãy 2: 1	5	-6 |

Chú ý: Các số trên cùng một dòng trong tệp dữ liệu vào hoặc kết quả, cách nhau ít nhất một dấu cách.
THCS Nam Định 2023-2024
Bài 1. Số đặc biệt
Nhân một ngày nghỉ, Sơn ngồi học toán và nghĩ ra một số có tính chất đặc biệt: số chỉ có đúng 3 ước. Ví dụ số 25 có 3 ước là 1, 5, 25.
Yêu cầu: Cho số tự nhiên n (n  109), hãy kiểm tra n có là số đặc biệt không?
Dữ liệu vào: Từ tệp văn bản SOHOC.INP chứa số n.
Kết quả: Đưa ra tệp văn bản SOHOC.OUT số 1 nếu n là số đặc biệt hoặc số 0 nếu n không là số đặc biệt.
Ví dụ:


| SOHOC.INP | SOHOC.OUT |
| --- | --- |
| 25 | 1 |

Bài 2. Nhầm lẫn
Nam được bố mẹ tặng cho chiếc điện thoại mới, do dùng điện thoại quá nhiều nên bây giờ mắt của Nam nhìn không rõ và chỉ nhầm hai số 5 và 6, đôi khi chép nhầm 5 thành 6 và ngược lại. Ví dụ số 25 có thể ghi thành số 26. Do đó, nếu đầu bài cho 12 + 25 thì Nam có thể cho kết quả là 37 hoặc 38.
Yêu cầu: Cho 2 số nguyên dương a và b. Hãy xác định tổng nhỏ nhất và lớn nhất của hai số a, b mà ta có thể chờ đợi ở Nam.
Dữ liệu vào: Từ tệp văn bản MISTAKE.INP gồm một dòng chứa 2 số nguyên dương a và b (a<109, b<109).
Kết quả: Đưa ra tệp văn bản MISTAKE.OUT trên một dòng gồm 2 số nhỏ nhất và lớn nhất có thể nhận được.
Ví dụ:


| MISTAKE.INP | MISTAKE.OUT |
| --- | --- |
| 12 25 | 37 38 |

Bài 3. Số bảy hai không
Cho số nguyên dương N, hãy tìm số nguyên S thoả mãn:

S  N và S là số nhỏ nhất,
S chia hết cho N,
Trong hệ thập phân, S chỉ chứa các chữ số trong tập {7, 2, 0,}
S ≤ 109.
Dữ liệu vào: Từ tệp văn bản BHK.INP chứa duy nhất một số nguyên dương N (N500000).
Kết quả: Đưa ra tệp văn bản BHK.OUT chứa một số nguyên S tìm được, hoặc là số 0 nếu không tồn tại S.
Ví dụ:


| BHK.INP | BHK.OUT |
| --- | --- |
| 3 | 27 |

Bài 4. Tặng quà
Jame có N món quà, món quà thứ i có giá trị là Ai. Jame muốn tặng N món quà này cho hai bạn sao cho độ chênh lệch giữa tổng giá trị các món quà mà mỗi bạn nhận được là nhỏ nhất.
Yêu cầu: Tìm độ chênh lệch nhỏ nhất giữa tổng giá trị các món quà mà mỗi bạn nhận được.
Dữ liệu vào: Từ tệp GIFT.INP gồm:
Dòng 1: Chứa số nguyên dương N là số món quà (N ≥ 2).
Dòng 2: Chứa N số nguyên dương Ai là giá trị của món quà thứ i.
Kết quả: Đưa ra tệp văn bản GIFT.OUT độ chênh lệch nhỏ nhất giữa tổng giá trị các món quà mà mỗi bạn nhận được.
Ví dụ:


| GIFT.INP | GIFT.OUT |
| --- | --- |
| 7 6 25 41 10 35 27 16 | 4 |

Ràng buộc:
Các test tương ứng với 50% số điểm có n ≤ 102, Ai ≤ 103
Các test tương ứng với 50 % số điểm n ≤ 104, Ai ≤ 105
Bài 5. Làm bánh
Nhân dịp con trai đạt kết quả cao trong kì thi học sinh giỏi, Ông Jasson đã nghĩ ra món quà đặc biệt tặng con trai. Đó là chiếc bánh do chính tay ông tự làm, thành phần của bánh là bánh mì (B), xúc xích (X) và pho mát (P) tạo thành từng lớp. Các lớp bánh đi từ dưới lên trên, ví dụ như công thức “BXPBX” là miếng bánh gồm bánh mì, xúc xích, pho mát, bánh mì và xúc xích. Ông Jasson đang có m miếng bánh mì, n miếng xúc xích và k miếng pho mát. Giá mua thêm mỗi thành phần như sau: mỗi miếng bánh mì là t1 đồng, mỗi miếng xúc xích là t2 đồng và mỗi miếng pho mát là t3 đồng.

Yêu cầu: Hãy xác định số bánh ông có thể làm được nhiều nhất với chi phí mua thêm các thành phần không quá r đồng.
Dữ liệu vào: Từ tệp văn bản HUMBERGER.INP gồm nhiều bộ dữ liệu (số bộ dữ liệu không quá 107), mỗi bộ dữ liệu cho trên một nhóm 4 dòng:
Dòng 1: Chứa một xâu (độ dài lớn hơn 0 và không quá 100) chỉ chứa các ký tự ‘B’, ‘X’, ‘P’ thể hiện công thức làm một chiếc bánh của Jasson.
Dòng 2: Chứa ba số tự nhiên m, n, k.
Dòng 3: Chứa ba số nguyên dương t1, t2, t3.
Dòng 4: Chứa 1 số nguyên dương r.
Kết quả: Đưa vào tệp văn bản HUMBERGER.OUT tương ứng với mỗi bộ dữ liệu là số lượng bánh tối đa ông có thể được làm.
Ví dụ:


| HUMBERGER.INP | HUMBERGER.OUT |
| --- | --- |
| BBBXXP 6 4 1 1 2 3 4 BBP 1 10 1 1 10 1 21 | 2 7 |

Giải thích: có 4 đồng sẽ mua 1 miếng pho mát hết 3 đồng. Tổng cộng có 6 miếng bánh mỳ, 4 miếng xúc xích, và 2 miếng pho mát. Nên có thể làm được 2 chiếc bánh.
Ràng buộc:
Các test tương ứng với 50% có m, n, k, t1, t2, t3  103; r  1012
Các test tương ứng với 50% có m, n, k, t1, t2, t3  109; r  1012
Chú ý: Các số trên cùng một dòng tệp dữ liệu vào hoặc kết quả cách nhau ít nhất một dấu cách.
THCS Nghệ An 2020-2021 Bảng A
nghean2021a - Bài 1. Đếm số ước dương
Cho số nguyên dương N. Hãy đếm số lượng các ước dương của N. Dữ liệu cho trong tệp văn bản DemUoc.Inp gồm một số nguyên dương N. Kết quả ghi ra tệp văn bản DemUoc.Out là số lượng các ước dương của N. Ví dụ:

| demuoc.inp | demuoc.out | Giải thích |
| --- | --- | --- |
| 6 | 4 | 6 có các ước dương: 1, 2, 3, 6. → Số lượng các ước dương là 4. |


Giới hạn:
Có 75% số test ứng với 75% số điểm thỏa mãn 1 ≤N ≤ 106;
Có 25% số test ứng với 25% số điểm thỏa mãn 106 <N≤1012
nghean2021a - Bài 2. Khảo sát giá
Trong dịp cuối năm 2020, một đội khảo sát giá ở tỉnh Nghệ An đã tiến hành khảo sát giá bán của N(1≤N≤26) mặt hàng đang được bán tại nhiều cửa hàng trên toàn tỉnh.
Tên của mỗi mặt hàng được đặt bằng một chữ cái in hoa thuộc tập chữ cái từ ‘A′ đến 'Z' . Giá bán của mỗi mặt hàng là 1 số nguyên từ 1 đến 9.
Để kích thích tiêu dùng, đội khảo sát cần đưa ra cho khách hàng thông tin giá bán thấp nhất của từng mặt hàng được bán trên địa bàn.
Yêu cầu: Bạn hãy giúp đội khảo sát đưa ra giá bán thấp nhất của từng mặt hàng đang được bán tại các cửa hàng và tổng chi phí để mua các mặt hàng với giá thấp nhất đó.
Dữ liệu vào từ tệp văn bản KhaoSatGia.Inp gồm:
Dòng thứ nhất ghi số nguyên dương N (1≤N≤26) là số lượng các mặt hàng được khảo sát giá bán.
N dòng tiếp theo mỗi dòng ghi một xâu kí tự (số lượng kí tự thuộc phạm vi từ 2 đến 255) mô tả thông tin về tên mặt hàng và các giá bán của mặt hàng đó tại một số cửa hàng khác nhau. Ví dụ: xâu A572 nghĩa là tên mặt hàng là A, giá bán tại các cửa hàng lần lượt là 5, 7, 2. Dữ liệu đảm bảo tên của N mặt hàng là khác nhau.
Kết quả ghi ra tệp văn bản KhaoSatGia.Out gồm N + 1 dòng.
N dòng đầu tiên mỗi dòng gồm tên mặt hàng và giá bán thấp nhất của mặt hàng đó (các mặt hàng được đưa ra tương ứng với thứ tự trong tệp dữ liệu vào, tên mặt hàng và giá được ghi liền nhau).
Dòng cuối là tổng chi phí để mua tất cả các mặt hàng với giá bán thấp nhất (mỗi loại mặt hàng chỉ được tính mua một lần với giá thấp nhất).
Ví dụ:


| khaosatgia.inp | khaosatgia.out | Giải thích |
| --- | --- | --- |
| 3 A86722 D765 B2 | A2 D5 B2 9 | Có 3 mặt hàng: Chuỗi kí tự: A86722 mô tả: Tên mặt hàng là: A, các giá bán: 8, 6, 7, 2, 2→ giá thấp nhất là 2. Chuỗi kí tự: D765 mô tả: Tên mặt hàng là: D, các giá bán: 7, 6, 5 → giá thấp nhất là 5. |



|  |  | Chuỗi kí tự: B2 mô tả: Tên mặt hàng là: B, có 1 giá bán: 2 → giá thấp nhất là 2. → Tổng chi phí để mua 3 mặt hàng với giá thấp nhất: 2+5+2=9. |
| --- | --- | --- |

Giới hạn:
Có 20% số test ứng với 20% số điểm thỏa mãn N = 1, tức là chỉ khảo sát 1 mặt hàng;
Có 30% số test ứng với 30% số điểm thỏa mãn mỗi mặt hàng chỉ có 1 giá, tức là chỉ có 1 cửa hàng bán mặt hàng đó;
Có 50% số test ứng với 50% số điểm không có ràng buộc gì thêm.
nghean2021a - Bài 3. Chia kẹo
Có N gói kẹo được đánh số hiệu từ 1 đến N. Gói kẹo thứ i (i = 1,2,3,...,N) có Ai chiếc kẹo. Cần phân chia N gói kẹo thành 3 phần:
Phần 1 gồm các gói kẹo 1, 2, ..., i. Tổng số chiếc kẹo của phần 1 là x= A1+A2+
... + Ai
Phần 2 gồm các gói kẹo i + 1,i+2, ..., j. Tổng số chiếc kẹo của phần 2 là y = Ai+1 + Ai+2 + ... + Aj;
Phần 3 gồm các gói kẹo j+1,j+2, ...,N. Tổng số chiếc kẹo của phần 3 là z = Aj+1+Aj+2+... + AN;
Với l < i < j < N.
Yêu cầu: Tìm cách phân chia N gói kẹo sao cho chênh lệch giữa phần có tổng số kẹo nhiều nhất và phần có tổng số kẹo ít nhất là nhỏ nhất, tức là max(x, y, z) – min(x,y,z) đạt giá trị nhỏ nhất. Ta đặt giá trị T= max(x, y, z) - min(x, y, z).
Dữ liệu cho trong tệp văn bản ChiaKeo.Inp gồm:
Dòng thứ nhất ghi số nguyên dương N là số gói kẹo.
Dòng thứ hai ghi N số nguyên dương A1, A2,…, An (1 ≤ Ai≤103) là số chiếc kẹo của N gói kẹo.
Các số ghi trên một dòng cách nhau bởi dấu cách.
Kết quả ghi ra tệp văn bản ChiaKeo.Out là giá trị nhỏ nhất của T.
Ví dụ:


| chiakeo.inp | chiakeo. out | Giải thích |
| --- | --- | --- |
| 5 1 2 3 4 2 | 3 | Phần 1: Chọn các gói 1, 2: x = A1 + A2 = 1 + 2 = 3. Phần 2: Chọn gói 3: y = A3 = 3. Phần 3: Chọn các gói 4, 5: z = A4 + A5 = 4 + 2 = 6. |



|  |  | → Chênh lệch số kẹo giữa phần nhiều kẹo nhất và phần ít kẹo nhất là 3. Đây là chênh lệch nhỏ nhất có thể phân chia được. |
| --- | --- | --- |

Giới hạn:
Có 50% số test ứng với 50% số điểm thỏa mãn 3 ≤ N ≤ 200;
Có 25% số test ứng với 25% số điểm thỏa mãn 200 < N ≤2000;
Có 25% số test ứng với 25% số điểm thỏa mãn 2000 < N ≤ 2×105.
nghean2021a - Bài 4. Tích ba số nguyên với ba số hạng của dãy
Cho dãy số A gồm N số nguyên A1+A2+ ... + AN (N ≥ 3) và 3 số nguyên x, y,
z. Trong dãy số A, hãy chọn 3 số hạng Ai, Aj,Ak (1≤i<j<k≤N) sao cho S=x × A + y
× Aj+ z × Ak đạt giá trị lớn nhất.
Ví dụ, với dãy A gồm 4 số hạng: [1,3,2,4];x=1,y=1,z = 2, ta có 4 cách chọn 3 số hạng trong dãy A:
Chọn 3 số hạng: A1,A2, A3 = [1, 3, 2] thì tích S=1×1+1×3+2×2=8;
Chọn 3 số hạng: A1, A2, A4=[1, 3, 4] thì tích S=1×1+1×3+2×4 = 12;
Chọn 3 số hạng: A1, A3, A4=[1, 2,4] thì tích S=1×1+1×2+2×4 =11;
Chọn 3 số hạng: A2, A3, A4 [3, 2, 4] thì tích S=1×3+1× 2 + 2 × 4 =
13;
Như vậy giá trị lớn nhất của S có thể đạt được là 13.
Dữ liệu cho trong tệp văn bản TichBaSo.Inp gồm:
Dòng thứ nhất ghi số nguyên dương N là số các số hạng của dãy A.
Dòng thứ hai ghi N số nguyên A, A2, ..., An (|Ai| ≤ 105 với i= 1, 2, 3, ..., N).
Dòng thứ ba ghi 3 số nguyên x,y,z, (|x|, |y|, |z| ≤ 105). Các số ghi trên một dòng được cách nhau bởi dấu cách.
Kết quả: ghi ra file văn bản TichBaSo.Out gồm một số nguyên là giá trị lớn nhất của S có thể đạt được.
Ví dụ:


| tichbaso.inp | tichbaso.out |
| --- | --- |
| 4 1 3 2 4 1 1 2 | 13 |

Giới hạn:
Có 50% số test ứng với 50% số điểm thỏa mãn N ≤ 200;
Có 25% số test ứng với 25% số điểm thỏa mãn 200<N≤2 × 105 và x = y = z;

Có 25% số test ứng với 25% số điểm thỏa mãn 200< N ≤ 2 × 105 và |x|, |y|, |z|
≤ 105.
THCS Nghệ An 2020-2021 Bảng B
nghean2021b - Bài 1. Đếm số ước dương
Cho số nguyên dương N. Hãy đếm số lượng các ước dương của N. Dữ liệu cho trong tệp văn bản DemUoc.Inp gồm một số nguyên dương N. Kết quả ghi ra tệp văn bản DemUoc.Out là số lượng các ước dương của N. Ví dụ:

| DemUoc.Inp | DemUoc.Out | Giải thích |
| --- | --- | --- |
| 6 | 4 | 6 có các ước dương: 1, 2, 3, 6. Số lượng các ước dương là 4. |

Giới hạn:
Có 75% số test ứng với 75% số điểm thỏa mãn 1 ≤ N ≤ 106;
Có 25% số test ứng với 25% số điểm thỏa mãn 106 < N ≤ 1012.
nghean2021b - Bài 2. Dãy hạt Cườm
Bạn Hoa sưu tầm được N hạt Cườm có đủ hai màu: Xanh và Tím. Hiện tại, bạn Hoa đang xếp N hạt Cườm này thành một hàng ngang và màu của chúng thì xuất hiện khá lộn xộn. Hoa muốn các hạt Cườm màu Xanh được xếp về bên trái hàng và các hạt Cườm màu Tím được xếp về bên phải hàng.
Yêu cầu: Hãy giúp Hoa sắp xếp N hạt Cườm thành hàng ngang sao cho các hạt màu Xanh được xếp về bên trái hàng và các hạt màu Tím được xếp về bên phải hàng.
Dữ liệu cho trong tệp văn bản HatCuom.Inp gồm:
Dòng thứ nhất ghi số nguyên dương N(2 ≤ N ≤ 255) là số hạt Cườm.
Dòng thứ hai ghi N kí tự lần lượt mô tả màu của N hạt Cườm. Kí tự ‘X’ mô tả màu Xanh, kí tự ‘T’ mô tả màu Tím. Các kí tự được ghi liền kề nhau.
Dữ liệu đảm bảo luôn có màu Xanh và màu Tím.
Kết quả: ghi ra tệp văn bản HatCuom.Out gồm N kí tự là màu của các hạt Cườm sau khi sắp xếp, hạt màu Xanh được xếp bên trái, hạt màu Tím được xếp bên phải. Các kí tự được ghi liền kề nhau.
Ví dụ:


| hatcuom.inp | hatcuom.out |
| --- | --- |
| 5 XTTXT | XXTTT |

Giới hạn:
Có 30% số test ứng với 30% số điểm thỏa mãn 2 ≤ N ≤ 3;

Có 70% số test ứng với 70% số điểm thỏa mãn 3 ≤ N ≤ 255.
nghean2021b - Bài 3. Chia kẹo
Có N gói kẹo được đánh số hiệu từ 1 đến N. Gói kẹo thứ i (i = 1, 2, 3,..., N)
có Ai chiếc kẹo. Cần phân chia N gói kẹo thành 2 phần:
Phần 1 gồm các gói kẹo 1, 2, ..., i. Tổng số chiếc kẹo của phần 1 là X = A1 + A2 + . . . + Ai;
Phần 2 gồm các gói kẹo i + 1, i + 2, ..., N. Tổng số chiếc kẹo của phần 2 là y = Ai+1 + Ai+2 + … + AN;
Với 1 ≤ i < N.
Yêu cầu: Tìm cách phân chia N gói kẹo sao cho chênh lệch giữa số kẹo của hai phần là nhỏ nhất, tức là |x - y| đạt giá trị nhỏ nhất. Ta đặt giá trị T = \x — y|.
Dữ liệu cho trong tệp văn bản ChiaKeo.Inp gồm:
Dòng thứ nhất ghi số nguyên dương N là số gói kẹo.
Dòng thứ hai ghi N số nguyên dương A1, A2, ...,AN (1 ≤ Ai ≤ 103) là số chiếc kẹo của N gói kẹo.
Các số ghi trên một dòng cách nhau bởi dấu cách.
Kết quả ghi ra tệp văn bản ChiaKeo.Out là giá trị nhỏ nhất của T.
Ví dụ:


| ChiaKeo.Inp | ChiaKeo.Out | Giải thích |
| --- | --- | --- |
| 5 1 2 3 4 3 | 1 | Phần 1: Chọn các gói kẹo 1, 2, 3; X = A1 + A2 + A3 = 1 + 2 + 3 = 6. Phần 2: Chọn các gói kẹo 4, 5; y = A4 + A5 = 4 + 3 = 7. Chênh lệch số kẹo giữa hai phần là 7 - 6 = 1. Đây là chênh lệch nhỏ nhất có thể phân chia được. |

Giới hạn:
Có 50% số test ứng với 50% số điểm thỏa mãn 3 ≤ N ≤ 1000;
Có 50% số test ứng với 50% số điểm thỏa mãn 1000 < N ≤ 105.
nghean2021b - Bài 4. Cặp số hạng nghịch thế
Cho dãy số gồm N số nguyên A1, A2, ...,AN. Ta gọi cặp số hạng Ai và Aj là cặp số hạng nghịch thế nếu thỏa mãn:
1 ≤ i < j ≤ N;
Ai > Aj;
Khi đó, hiệu Ai - Aj được gọi là độ chênh lệch của cặp số hạng nghịch thế Ai
và Aj.
Yêu cầu: Tìm cặp số hạng nghịch thế có độ chênh lệch nhỏ nhất.

Dữ liệu cho trong tệp văn bản NghichThe.inp gồm:
Dòng thứ nhất ghi số nguyên dương N là số các số hạng của dãy.
Dòng thứ hai ghi N số nguyên A1, A2, ...,AN (0 ≤ Ai ≤ 106).
Dữ liệu đảm bảo luôn có ít nhất một cặp số hạng nghịch thế.
Kết quả: ghi ra tệp văn bản NghichThe.Out là độ chênh lệch của cặp số hạng nghịch thế có độ chênh lệch nhỏ nhất.
Ví dụ:


| nghichthe.inp | nghichthe.out | Giải thích |
| --- | --- | --- |
| 4 2 3 1 5 | 1 | Ta có các cặp số hạng nghịch thế: Cặp số hạng: A1 = 2 và A3 = 1; độ chênh lệch 2 - 1 = 1. Cặp số hạng: A2 = 3 và A3 = 1; độ chênh lệch 3 - 1 = 2. Độ chênh lệch của cặp số hạng nghịch thế có độ chênh lệch nhỏ nhất bằng 1. |

Giới hạn:
Có 50% test ứng với 50% số điểm thỏa mãn N ≤ 1000;
Có 50% test ứng với 50% số điểm thỏa mãn 1000 < N ≤ 2 x 105; 0 < Ai ≤ 100 với i = 1, 2,..N.
THCS Nghệ An 2021-2022 Bảng A
nghean2122a - Bài 1. Số ước nguyên tố
Trong buổi ôn tập cho đội tuyển dự thi học sinh giỏi, thầy giáo đã ra cho bạn An một bài tập về số học như sau:
Cho số nguyên dương 𝑛. Hãy tính xem, trong các ước của 𝑛 có bao nhiêu ước là số nguyên tố?
Bạn An đã dễ dàng đưa ra kết quả đúng của bài toán.
Yêu cầu: Hãy đưa ra kết quả mà bạn An tìm được.
Dữ liệu: cho trong tệp văn bản UocNT.Inp gồm một số nguyên dương 𝑛 (2 ≤ 𝑛 ≤ 1012).
Kết quả: ghi ra tệp văn bản UocNT.Out một số duy nhất là số lượng các ước của số
𝑛 là số nguyên tố.
Ví dụ:


| UocNT.Inp | UocNT.Out | Giải thích |
| --- | --- | --- |
| 10 | 2 | 𝑛 = 10 có 4 ước là: 1, 2, 5, 10. Trong đó, có 2 ước: 2 và 5 là các số nguyên tố. |

Giới hạn:

Có 60% số test ứng với 60% số điểm thoả mãn 2 ≤ 𝑛 ≤ 103;
Có 20% số test ứng với 20% số điểm thoả mãn 103 < 𝑛 ≤ 106;
Có 20% số test ứng với 20% số điểm thoả mãn 106 < 𝑛 ≤ 1012.
nghean2122a - Bài 2. Mật khẩu
Bạn An rất đam mê lập trình. Một hôm, An nhận được thông báo nhận thưởng từ công ty phần mềm mà An thường xuyên sử dụng sản phẩm của công ty đó. Phần thưởng là phiên bản mới của phần mềm trò chơi trí tuệ mà An rất yêu thích. Tuy nhiên, để tải phần mềm này về máy tính thì An cần phải nhập mật khẩu. Mật khẩu là một xâu kí tự nhận được khi An giải xong bài toán mà công ty đã gửi cho An như sau:
Cho n xâu kí tự 𝑆1, 𝑆2, . . . , 𝑆𝑛 chỉ chứa các kí tự thuộc tập chữ cái latinh hoa từ ‘𝐴’ đến ‘𝑍’. Với mỗi xâu kí tự 𝑆𝑖, (𝑖 = 1, 2, . . . , 𝑛) có một kí tự xuất hiện 1 lần, các kí tự còn lại xuất hiện ít nhất 2 lần. Mật khẩu là một xâu gồm 𝑛 kí tự, trong đó kí tự thứ 𝑖, (𝑖 = 1, 2, . . . , 𝑛) là kí tự xuất hiện 1 lần trong xâu 𝑆𝑖.
Yêu cầu: Hãy đưa ra mật khẩu mà An cần tìm.
Dữ liệu cho trong tệp văn bản MatKhau.Inp gồm:
Dòng đầu tiên ghi số nguyên dương 𝑛 (1 ≤ 𝑛 ≤ 1000) là số lượng xâu kí tự.
Dòng thứ 𝑖 trong 𝑛 dòng tiếp theo ghi một xâu kí tự 𝑆𝑖 có độ dài không quá 1000.
Kết quả ghi ra tệp văn bản MatKhau.Out gồm một xâu kí tự là mật khẩu tìm được.
Ví dụ:


| MatKhau.Inp | MatKhau.Out | Giải thích |
| --- | --- | --- |
| 3 ACADD FAAA ABBBBAFAAA | CFF | Có 3 xâu kí tự: Xâu “ACADD”: Kí tự C xuất hiện 1 lần. Xâu “FAAA”: Kí tự F xuất hiện 1 lần. Xâu “ABBBBAFAAA”: Kí tự F xuất hiện 1 lần. Ta có mật khẩu là: “CFF”. |

Giới hạn:
Có 60% số test ứng với 60% số điểm thoả mãn 𝑛 = 1 và độ dài của xâu không quá 255;
Có 20% số test ứng với 20% số điểm thoả mãn 𝑛 ≤ 100 và độ dài của mỗi xâu không quá 255;
Có 20% số test ứng với 20% số điểm còn lại không có giới hạn gì thêm.
nghean2122a - Bài 3. Cặp vé trúng thưởng
Công ty xổ số BlueCode phát hành 𝑛 vé số đặc biệt để chào mừng ngày thành lập. Các vé được đánh số thứ tự từ 1 đến 𝑛. Hệ thống quay thưởng sẽ tạo ra ngẫu nhiêu một dãy gồm 𝑛 số nguyên dương 𝑐1, 𝑐2, … , 𝑐𝑛 là mã của 𝑛 vé. Vé thứ 𝑖 (𝑖 = 1, 2, … , 𝑛) có mã là 𝑐𝑖. Cặp vé (𝑖, 𝑗) với 1 ≤ 𝑖 < 𝑗 ≤ 𝑛, sẽ trúng thưởng nếu trong

hai mã của hai vé đó là 𝑐𝑖 và 𝑐𝑗 sẽ có một số bằng số lớn nhất, số còn lại bằng số nhỏ nhất trong các số 𝑐𝑖, 𝑐𝑖+1, … , 𝑐𝑗. Tức là khi đặt 𝑥 = 𝑚𝑖𝑛(𝑐𝑖, 𝑐𝑖+1, … , 𝑐𝑗); 𝑦 =
𝑚𝑎𝑥 (𝑐𝑖, 𝑐𝑖+1, … , 𝑐𝑗) thì trong hai số 𝑐𝑖 và 𝑐𝑗 sẽ có một số bằng 𝑥, số còn lại bằng 𝑦.
Công ty muốn biết có bao nhiêu cặp vé sẽ trúng thưởng nên đã nhờ bạn An lập trình để tính số cặp vé trúng thưởng.
Yêu cầu: Cho biết dãy gồm 𝑛 số nguyên dương 𝑐1, 𝑐2, … , 𝑐𝑛, hãy đưa ra số cặp vé trúng thưởng.
Dữ liệu cho trong tệp văn bản TrungThuong.Inp gồm:
Dòng 1 ghi số nguyên dương 𝑛 (2 ≤ 𝑛 ≤ 2 × 105).
Dòng 2 ghi 𝑛 số nguyên dương 𝑐1, 𝑐2, … , 𝑐𝑛 (1 ≤ 𝑐𝑖 ≤ 108, 𝑖 = 1, 2, … , 𝑛).
Các số ghi trên một dòng được phân cách nhau bởi dấu cách trống.
Kết quả ghi ra tệp văn bản TrungThuong.Out một số nguyên duy nhất là số cặp vé trúng thưởng.
Ví dụ:


| TrungThuong.Inp | TrungThuong.Out |
| --- | --- |
| 5 3 3 1 6 5 | 5 |

Giải thích: Ta có 5 cặp vé trúng thưởng


| Cặp vé (𝑖, 𝑗) | 𝑐𝑖 | 𝑐𝑗 | 𝑥 = 𝑚𝑖𝑛(𝑐𝑖, … , 𝑐𝑗) | 𝑦 = 𝑚𝑎𝑥(𝑐𝑖, … , 𝑐𝑗) | 𝑐𝑖 = 𝑥 và 𝑐𝑗 = 𝑦; hoặc 𝑐𝑖 = 𝑦 và 𝑐𝑗 = 𝑥; |
| --- | --- | --- | --- | --- | --- |
| 𝑖 = 1; 𝑗 = 2 | 3 | 3 | 3 | 3 | 𝑐𝑖 = 𝑥; 𝑐𝑗 = 𝑦 |
| 𝑖 = 2; 𝑗 = 3 | 3 | 1 | 1 | 3 | 𝑐𝑖 = 𝑦; 𝑐𝑗 = 𝑥 |
| 𝑖 = 3; 𝑗 = 4 | 1 | 6 | 1 | 6 | 𝑐𝑖 = 𝑥; 𝑐𝑗 = 𝑦 |
| 𝑖 = 4; 𝑗 = 5 | 6 | 5 | 5 | 6 | 𝑐𝑖 = 𝑦; 𝑐𝑗 = 𝑥 |
| 𝑖 = 1; 𝑗 = 3 | 3 | 1 | 1 | 3 | 𝑐𝑖 = 𝑦; 𝑐𝑗 = 𝑥 |

Giới hạn:
40% số test ứng với 40% số điểm thỏa mãn 2 ≤ 𝑛 ≤ 200;
40% số test ứng với 40% số điểm thỏa mãn 200 < 𝑛 ≤ 2000;
20% số test ứng với 20% số điểm thỏa mãn 2000 < 𝑛 ≤ 2 × 105; 1 ≤ 𝑐𝑖 ≤ 3; 𝑖 = 1, 2, . . . , 𝑛.
nghean2122a - Bài 4. Chọn sách

Thư viện trường học của bạn An có 𝑛 quyển sách, mỗi quyển sách có dạng hình chữ nhật. Các quyển sách được đánh số thứ tự từ 1 đến 𝑛. Quyển sách thứ 𝑖 (𝑖 = 1, 2, . . . , 𝑛) có chiều dài là 𝑑𝑖, chiều rộng là 𝑟𝑖 (đơn vị độ dài). Bạn An muốn chọn một số quyển sách trong 𝑛 quyển sách để xếp thành một chồng sao cho quyển
sách được xếp ở trên có kích thước nhỏ hơn quyển sách được xếp ở dưới, tức là nếu quyển sách 𝑖 được xếp trên quyển sách 𝑗 thì 𝑑𝑖 < 𝑑𝑗 và 𝑟𝑖 < 𝑟𝑗.
Yêu cầu: Hãy đưa ra số sách lớn nhất mà bạn An có thể chọn để xếp được chồng sách theo yêu cầu trên. Ta gọi số quyển sách nhiều nhất có thể chọn được là 𝑆.
Dữ liệu cho trong tệp văn bản ChonSach.Inp gồm:
Dòng đầu tiên ghi số nguyên dương 𝑛 (2 ≤ 𝑛 ≤ 2 × 105) là số lượng quyển sách.
Dòng thứ 𝑖 trong 𝑛 dòng tiếp theo ghi 2 số nguyên dương 𝑑𝑖 và 𝑟𝑖 (1 ≤ 𝑑𝑖, 𝑟𝑖 ≤ 108) tương ứng là chiều dài và chiều rộng của quyển sách thứ 𝑖.
Kết quả ghi ra tệp văn bản ChonSach.Out số nguyên 𝑆 tìm được.
Ví dụ:


| ChonSach.Inp | ChonSach.Out | Hình minh họa | Hình minh họa |
| --- | --- | --- | --- |
| 2 6 3 5 3 | 1 | Chỉ có thể chọn được 1 quyển sách (quyển 1 hoặc quyển 2) | Quyển 1 |
| 5 | 3 | Chọn được nhiều nhất 3 |  |
| 3 2 4 1 |  | quyển sách: Có thể chọn quyển 1, 3, | Quyển 1 |
| 10 6 |  | 5. | Quyển 5 |
| 8 4 7 5 |  | Cách xếp theo thứ tự từ trên xuống dưới: | Quyển 3 |
|  |  | Quyển 1 → Quyển 5 → |  |
|  |  | Quyển 3. |  |
| 2 | 2 | Chọn được 2 quyển sách: |  |
| 5 4 3 1 |  | quyển 1 và quyển 2. Cách xếp theo thứ tự từ trên xuống dưới: | Quyển 2 Quyển 1 |
|  |  | Quyển 2 → Quyển 1. |  |

Giới hạn:
Có 25% số test ứng với 25% số điểm thỏa mãn 2 ≤ 𝑛 ≤ 200 và 𝑆 ≤ 2;
Có 25% số test ứng với 25% số điểm thỏa mãn 2 ≤ 𝑛 ≤ 2 × 103; 𝑑𝑖 ≠ 𝑑𝑗 và
𝑟𝑖 ≠ 𝑟𝑗 với mọi cặp 𝑖 ≠ 𝑗; 1 ≤ 𝑖, 𝑗 ≤ 𝑛;
Có 25% số test ứng với 25% số điểm thỏa mãn 2 × 103 < 𝑛 ≤ 2 × 105; 𝑑𝑖 ≠
𝑑𝑗 và 𝑟𝑖 ≠ 𝑟𝑗 với mọi cặp 𝑖 ≠ 𝑗; 1 ≤ 𝑖, 𝑗 ≤ 𝑛;

Có 25% số test ứng với 25% số điểm còn lại thỏa mãn 2 × 103 < 𝑛 ≤ 2 × 105.
THCS Nghệ An 2022-2023
nghean2223 - Bài 1. Cặp số nguyên tố cùng nhau
Tuấn là một học sinh rất yêu thích Tin học. Ước mơ của cậu sau này là trở thành một lập trình viên tài năng. Tuấn thường xuyên tìm hiểu các thông tin, sự kiện liên quan đến Công nghệ. Một sự kiện công nghệ nổi tiếng trên toàn thế giới trong thời gian gần đây là sự ra mắt robot thông minh ChatGPT của công ty công nghệ OpenAI. Tuấn cũng rất tò mò về ChatGPT nên đã sử dụng để giải bài toán. Bài toán mà Tuấn đưa cho ChatGPT như sau:
Cho số nguyên dương n. Tìm số lượng các số nguyên dương X nhỏ hơn n thỏa mãn: X và n là hai số nguyên tố cùng nhau (tức là ước chung lớn nhất của X và n bằng 1).
Thật là thú vị, khi Tuấn nhập n = 5. ChatGPT đưa ra kết quả là: Có 4 số, cụ thể là các số: 1, 2, 3, 4.
Tuấn muốn các bạn lập trình giải bài toán này để cùng kiểm tra kết quả của ChatGPT nhé.
Dữ liệu cho trong tệp văn bản NTCN.Inp gồm một số nguyên dương n (2 ≤ n ≤ 2 x 109).
Kết quả ghi ra tệp văn bản NTCN.Out gồm một số nguyên duy nhất là số lượng các số nguyên dương x, nhỏ hơn n và nguyên tố cùng nhau với n.
Ví dụ:


| ntcn.inp | ntcn.out | Giải thích |
| --- | --- | --- |
| 5 | 4 | n = 5, trong 4 số 1, 2, 3, 4 nhỏ hơn n. Có 4 số thỏa mãn: x = 1,2,3,4 là các số nguyên tố cùng nhau với n. |
| 10 | 4 | n = 10, trong 9 số: 1, 2, 3, 4, 5, 6, 7, 8, 9 nhỏ hơn n. Có 4 số thỏa mãn: x = 1,3,7,9 là các số nguyên tố cùng nhau với n. |

Giới hạn:
Có 50% số test ứng với 50% số điểm thỏa mãn: 2 ≤ n ≤ 2000.
Có 40% số test ứng với 40% số điểm thỏa mãn: 2000 < n ≤ 2 x 106.
Có 10% số test ứng với 10% số điểm thỏa mãn: 2 x 106 < n ≤ 2 x 109.
nghean2223 - Bài 2. Hàng cây sân trường
Ngôi trường của Tuấn chuẩn bị kỉ niệm ngày thành lập trường. Nhà trường đã trồng một hàng cây xanh trông rất đẹp. Hàng cây gồm n cây xanh được đánh số thứ tự từ 1 đến n (theo hướng từ trái sang phải) và cách đều nhau, tức là khoảng cách giữa hai cây kề nhau là không đổi.


(Hình minh họa cho hàng cây xanh)
Để tưới nước cho cây, nhà trường có kế hoạch lắp đặt m (1 ≤ m ≤ n) vòi tưới nước tự động. Vòi nước thứ i (i = 1, 2, 3,...,m) được lắp tại vị trí cây thứ Xi thì có thể tưới nước cho cây thứ Xi và Ri cây liền kề bên trái và Ri cây liền kề bên phải vòi nước đó, tức là vòi thứ i sẽ tưới nước được cho cây thứ j nếu |j - xi| ≤ Ri. Ri được gọi là bán kính tưới nước của vòi thứ i.
Cho biết vị trí lắp m vòi nước tại m cây có số thứ tự là X1, X2, . . ., Xm (1 ≤ X1
< X2 < … < Xm ≤ n) và các bán kính tưới nước là R1, R2 Rm, . . ., Rm (1 ≤ Ri , R2, . . ., Rm ≤ 100).
Yêu cầu: Tính xem, có bao nhiêu cây được tưới nước khi lắp m vòi nước tự động như trên. Một cây được tưới nước nếu có ít nhất một vòi nước có thể tưới nước cho cây đó.
Dữ liệu cho trong tệp văn bản HangCay.Inp gồm:
Dòng 1 ghi hai số nguyên dương n và m (2 ≤ n ≤ 2000; 1 ≤ m ≤ n) tương ứng là số cây và số vòi nước.
m dòng tiếp theo, dòng thứ i (i = 1, 2, . . ., m) ghi hai số nguyên Xi, Ri. Trong đó Xi là số thứ tự của cây đặt vòi nước thứ i, Ri là bán kính tưới nước.
Kết quả: ghi ra tệp văn bản HangCay.Out gồm một số nguyên duy nhất là số cây được tưới nước.
Ví dụ:


| hangcay.inp | hangcay.out | Giải thích |
| --- | --- | --- |
| 8 2 2 2 5 1 | 6 | Vòi nước 1 đặt tại cây thứ 2, có thể tưới nước cho các cây thứ: 1, 2, 3, 4. Vòi nước 2 đặt tại cây thứ 5, có thể tưới nước cho các cây thứ: 4, 5, 6. Vậy có 6 cây được tưới nước. |

Giới hạn:
Có 30% số test ứng với 30% số điểm thỏa mãn 2 ≤ n ≤ 200; m = 1.
Có 30% số test ứng với 30% số điểm thỏa mãn 2 ≤ n ≤ 200; 2 ≤ m ≤ n; không có hai vòi nước trở lên có thể cùng tưới nước cho 1 cây.
Có 40% số test ứng với 40% số điểm thỏa mãn 200 < n ≤ 2000; 2 ≤ m ≤ n.

nghean2223 - Bài 3. Trò chơi chọn bóng
Ngày thành lập Đoàn 26/3 sắp đến. Tuấn cùng nhóm bạn của mình được giao thiết kế một trò chơi trí tuệ dành cho các đoàn viên trong trường. Sau một thời gian tìm hiểu và nghiên cứu, nhóm của Tuấn đã xây dựng một trò chơi có nội dung như sau:
Một rổ bóng có n quả bóng. Các quả bóng được đánh số từ 1 đến n. Quả bóng thứ i có màu được mã hóa bởi một số nguyên dương ci (1 ≤ ci ≤ k), trong đó k là số màu khác nhau trong n quả bóng. Mỗi lần chơi, người chơi sẽ chọn hai quả bóng khác màu trong rổ bóng và đưa hai quả bóng này ra khỏi rổ. Người chơi sẽ dừng lại khi trong rổ không còn quả bóng nào hoặc không có hai quả bóng khác màu. Số bóng được lấy ra khỏi rổ là số điểm của người chơi.
Tuấn cùng nhóm bạn muốn biết người chơi có thể đạt được điểm lớn nhất là bao nhiêu? Bạn hãy lập trình để tìm kết quả này nhé.
Yêu cầu: Đưa ra số điểm lớn nhất mà người chơi có thể nhận được.
Dữ liệu cho trong tệp văn bản ChonBong.Inp gồm:
Dòng 1 ghi hai số nguyên n và k (2 ≤ k ≤ n ≤ 2 x 105) tương ứng là số quả bóng trong rổ và số màu khác nhau của n quả bóng.
Dòng 2 ghi n số nguyên dương c1, c2, . . .  , cn (1 ≤ ci ≤ k) tương ứng là mã màu của n quả bóng.
Kết quả ghi ra tệp văn bản ChonBong.Out gồm một số nguyên duy nhất là số điểm lớn nhất mà người chơi có thể nhận được.
Ví dụ:


| chonbong.inp | chonbong.out | Giải thích |  |
| --- | --- | --- | --- |
| 6 2 1 2 2 1 1 1 | 4 | Lần 1: Chọn quả bóng thứ 1 và thứ 2 với mã màu tương ứng là 1 và 2. Lần 2: Chọn quả bóng thứ 3 và thứ 4 với mã màu tương ứng là 2 và 1. Trong rổ bóng lúc này còn 2 quả thứ 5, 6 đều có mã màu bằng 1. Trò chơi kết thúc và người chơi được 4 điểm. Đây là số điểm cao nhất mà người chơi có thể nhận được. |  |
| 4 3 3 3 1 2 | 4 | Lần 1: Chọn quả bóng thứ 1 và thứ 3 với mã màu tương ứng là 3 và 1. Lần 2: Chọn quả bóng thứ 2 và thứ 4 với mã màu tương ứng là 3 và 2. |  |



|  |  | Trong rổ bóng lúc này không còn quả bóng nào. Trò chơi kết thúc và người chơi được 4 điểm. Đây là số điểm cao nhất mà người chơi có thể nhận được. |  |
| --- | --- | --- | --- |

Giới hạn:
Có 20% số test ứng với 20% số điểm thỏa mãn 2 ≤ n ≤ 2000; k=2.
Có 30% số test ứng với 30% số điểm thỏa mãn 3 ≤ n ≤ 2000; k=3.
Có 30% số test ứng với 30% số điểm thỏa mãn 4 ≤ n ≤ 2000; 3 < k ≤ n.
Có 20% số test ứng với 20% số điểm thỏa mãn 2000 < n ≤ 2 x 105 ; 3 < k ≤ n.
nghean2223 - Bài 4. Mật độ xuất hiện cao
Trò chơi chọn bóng mà nhóm của Tuấn thiết kế được bạn bè và giáo viên trong trường đánh giá rất cao. Sau thành công này, Tuấn cùng nhóm bạn tập trung học tập để thi vào lớp chuyên tin của một trường chuyên danh giá trong tỉnh. Những bài tập mà Tuấn làm đều yêu cầu kỹ năng thiết kế thuật toán chuyên nghiệp. Một trong các bài tập mà bạn ấy đang xây dựng thuật toán có nội dung như sau:
Cho chuỗi kí tự S chỉ gồm các kí tự chữ cái latinh thường từ 'a',...,'z'. Một chuỗi con X (gồm các kí tự ở vị trí liên tiếp) của S được gọi là một chuỗi có mật độ xuất hiện cao nếu trong chuỗi X có một kí tự mà số lần xuất hiện của kí tự đó nhiều hơn số các kí tự còn lại trong chuỗi X.
Ví dụ: chuỗi S = “abbbabced", chuỗi con X = “abbbabc" là một chuỗi có mật độ xuất hiện cao, vì có kí tự ‘b’ xuất hiện 4 lần, số các kí tự còn lại bằng 3. Nếu X
= “abbbabce", kí tự xuất hiện nhiều lần nhất 4 lần (kí tự ‘b’) và số kí tự còn lại là
4. Do vậy chuỗi X = “abbbabce" không phải là một chuỗi có mật độ xuất hiện cao.
Yêu cầu: Tìm một chuỗi con X (gồm các kí tự ở vị trí liên tiếp) của S là một chuỗi có mật độ xuất hiện cao và độ dài lớn nhất.
Tuấn cũng đã có thuật toán của mình, còn bạn thì sao? Hãy lập trình giải bài toán trên để đối chiếu kết quả nhé.
Dữ liệu cho trong file văn bản MatDo.Inp gồm một chuỗi kí tự S chỉ gồm các kí tự chữ cái latinh thường và có độ dài không lớn hơn 2 x 105.
Kết quả ghi ra file văn bản MatDo.Out gồm một số nguyên duy nhất là độ dài của chuỗi X tìm được.
Ví dụ:


| matdo.inp | matdo.out | Giải thích |
| --- | --- | --- |
| abbbabced | 7 | Ta có thể chọn chuỗi X thỏa mãn là: X = “abbbabc" hoặc X = “bbbabce". |
| ababab | 5 | Ta có thể chọn chuỗi X thỏa mãn là: |



|  |  | X = “ababa" vì kí tự ‘a’ xuất hiện 3 lần, số các kí tự còn lại là 2. hoặc X = “babab" vì kí tự ‘b’ xuất hiện 3 lần, số các kí tự còn lại là 2. |
| --- | --- | --- |
| abc | 1 | Ta có thể chọn chuỗi X thỏa mãn là: X = “a" vì kí tự ‘a’ xuất hiện 1 lần, số các kí tự còn lại là 0. hoặc X = “b", X = “c" đều thỏa mãn. |

Giới hạn:
Có 30% số test ứng với 30% số điểm thỏa mãn: Chuỗi S chỉ gồm các kí tự thuộc tập 3 kí tự {‘a’, ‘b’, ‘c’} và độ dài chuỗi S không quá 2 x 103.
Có 30% số test ứng với 30% số điểm thỏa mãn: Chuỗi S chỉ gồm các kí tự chữ cái latinh thường và độ dài chuỗi S không quá 2 x 103.
Có 40% số test ứng với 40% số điểm thỏa mãn: Chuỗi S chỉ gồm các kí tự chữ cái latinh thường và độ dài chuỗi S không quá 2 x 105.
THCS Nghệ An 2023-2024
nghean2324 - Bài 1. Hình Chữ Nhật Đẹp
Trong giờ hình học, An được thầy giáo dạy về công thức tính diện tích của hình chữ nhật và hình vuông. An thấy hình vuông rất đẹp nên cậu định nghĩa một hình chữ nhật “đẹp” là hình chữ nhật có các đặc điểm sau:
Độ dài hai cạnh là các số nguyên dương.
Diện tích bằng diện tích của một hình vuông có độ dài cạnh là một số nguyên dương.
An đã phát biểu định nghĩa này trước lớp và thách đố bài toán như sau:
“Cho số nguyên dương 𝑥. Tìm số nguyên dương 𝑦 nhỏ nhất để 𝑥 và 𝑦 là độ dài hai cạnh của một hình chữ nhật “đẹp”.”
Yêu cầu: Giúp cả lớp tìm số nguyên dương 𝑦 thỏa mãn bài toán của An.
Dữ liệu: Nhập từ tệp văn bản B1.INP, gồm một dòng duy nhất chứa số nguyên dương 𝑥.
Kết quả: Ghi ra tệp văn bản B1.OUT, gồm một dòng duy nhất chứa số nguyên dương 𝑦.
Ví dụ:


| B1.INP | B1.OUT |
| --- | --- |
| 4 | 1 |
| 6 | 6 |
| 8 | 2 |

Giới hạn:

90% số test tương ứng với 90% số điểm thỏa mãn 1 ≤ x ≤ 106;
10% số test tương ứng với 10% số điểm thỏa mãn 106 < 𝑥 ≤ 1012.
nghean2324 - Bài 2. Bốc Số
Nhân dịp năm mới Giáp Thìn, An tham gia lễ hội đầu năm thường niên của làng. Lễ hội có nhiều trò chơi thú vị thu hút sự chú ý của An, cậu chơi trò chơi đầu tiên là “Bốc số”.
Luật chơi của trò chơi rất đơn giản: ở mỗi lượt chơi, An bốc từ thùng một lá thăm, mỗi lá thăm gồm 2 phần:
Phần đầu lá thăm là một dãy có độ dài 𝑁 kí tự gồm các chữ số từ 1 đến 9.
Phần sau lá thăm ghi số 0 hoặc 1, cách phần đầu một khoảng trống.
Công việc của An là xóa đi một hoặc một vài kí tự của phần đầu lá thăm sau đó viết các kí tự còn lại theo đúng thứ tự ban đầu (từ trái qua phải) để thu được một số nguyên dương lớn nhất thỏa mãn:
Chia hết cho 5 nếu phần sau lá thăm là 0.
Chia hết cho 3 nếu phần sau lá thăm là 1.
Yêu cầu: Hãy giúp An hoàn thành trò chơi.
Dữ liệu: Nhập từ tệp B2.INP có cấu trúc như sau:
Dòng 1: Ghi số nguyên dương 𝑡 là số lần bốc thăm của An (1 ≤ 𝑡 ≤ 100).
𝑡 dòng tiếp theo, dòng thứ 𝑖 ghi một dãy có độ dài 𝑁 (1 ≤ 𝑁 ≤ 100) kí tự gồm các chữ số từ 1 đến 9 và một số 𝑘 (phân biệt bằng dấu cách trống) đại diện cho lá thăm thứ 𝑖.
Kết quả: Ghi ra tệp B2.OUT gồm 𝑡 dòng, dòng thứ 𝑖 chứa kết quả của lần bốc thăm thứ 𝑖 (dữ liệu đầu vào luôn đảm bảo có kết quả).
Ví dụ:


| B2.INP | B2.OUT |
| --- | --- |
| 4 2433514 0 5295284 0 12324524 1 5321 1 | 24335 5295 1324524 531 |

Giới hạn:
60% số test tương ứng 60% số điểm thoả mãn k = 0;
20% số test tương ứng 20% số điểm thoả mãn 1 ≤ N ≤ 18;
20% số test tương ứng 20% số điểm không có ràng buộc gì thêm.

nghean2324 - Bài 3. Xếp Gạch
Sau khi tham gia trò chơi “Bốc số”, An tiếp tục tham gia trò chơi “Xếp gạch”. Ban tổ chức cho trước 𝑛 chồng gạch được xếp thành một hàng ngang và đánh số từ 1 đến 𝑛. Số viên gạch ở các chồng lần lượt là 𝑎1, 𝑎2, … , 𝑎𝑛.
An cần thực hiện 𝑚 lượt chơi tương ứng với dãy số nguyên dương
𝑏1, 𝑏2, … , 𝑏𝑚 đã biết trước. Ở lượt thứ 𝑖 (1 ≤ 𝑖 ≤ 𝑚), An được quyền thực hiện chỉ một trong hai lựa chọn:
Bỏ qua không sử dụng giá trị 𝑏𝑖.
Xếp thêm 𝑏𝑖 viên gạch lên chồng gạch thứ 𝑗 (1 ≤ 𝑗 ≤ 𝑛) nếu tất cả các chồng gạch thứ 𝑗, 𝑗 + 1, 𝑗 + 2, … , 𝑛 chưa từng được xếp thêm viên gạch nào trong các lượt trước đó.
Trò chơi dừng lại khi hết lượt hoặc An đã thực hiện xếp thêm gạch ở chồng thứ 𝑛. Khi đó ban tổ chức sẽ đếm số gạch ở mỗi chồng và lấy số gạch ở chồng ít nhất làm điểm số của An.
Cách chơi của An là tối ưu nhất nên cậu đã đạt được số điểm tối đa của trò
chơi.
Yêu cầu: Hãy tìm ra số điểm An đạt được.
Dữ liệu: Nhập từ tệp B3.INP gồm 3 dòng:
Dòng 1: ghi hai số nguyên dương 𝑛 và 𝑚 lần lượt là số chồng gạch ban đầu và số lượt chơi của An.
Dòng 2: ghi 𝑛 số nguyên không âm 𝑎1, 𝑎2, … , 𝑎𝑛 (𝑎𝑖 ≤ 108) mô tả số gạch ở các chồng ban đầu.
Dòng 3: ghi 𝑚 số nguyên dương 𝑏1, 𝑏2, … , 𝑏𝑚 (𝑏𝑖 ≤ 108) mô tả các giá trị của ban tổ chức đưa trước cho An, 𝑏𝑖 là giá trị được sử dụng ở lượt thứ 𝑖.
Kết quả: Ghi ra tệp B3.OUT gồm 1 dòng chứa số điểm An đạt được.
Ví dụ:


| B3.INP | B3.OUT | GIẢI THÍCH |
| --- | --- | --- |
| 5 3 2 5 1 4 6 1 3 4 | 4 | An bỏ qua lượt 1; An xếp 3 viên gạch vào chồng gạch thứ nhất ở lượt 2; An xếp 4 viên gạch vào chồng gạch thứ ba ở lượt 3. Khi đó số gạch ở các chồng gạch lần lượt là 5;5;5;4;6 nên số điểm đạt được là 4. |

Giới hạn:
40% số test tương ứng 40% số điểm thoả mãn 𝑚 = 1, 1 ≤ 𝑛 ≤ 102;
30% số test tương ứng 30% số điểm thoả mãn 𝑚 = 2 và 102 < 𝑛 ≤ 103;
30% số test tương ứng 30% số điểm thoả mãn 103 < 𝑛, 𝑚 ≤ 105.
nghean2324 - Bài 4. Thẻ Bài

Sau khi hoàn thành 2 trò chơi thú vị của lễ hội, An cảm thấy rất hứng thú và cậu quyết định chơi trò chơi cuối trước khi về. An chọn trò chơi có thưởng của lễ hội do một ông giáo về hưu trong làng chủ trì.
Ông giáo xếp các ống tre gồm hai màu xanh hoặc đỏ thành một hoặc hai hàng ngang.
Ông giáo có 106 thẻ bài được xếp thành một chồng, được đánh số từ 1 đến 106 theo thứ tự từ trên xuống dưới. Bắt đầu trò chơi, An bốc lần lượt các thẻ bài từ trên xuống dưới của chồng bài và chọn không bỏ thẻ bài này vào bất kì ống tre nào (kể cả trong những lượt bốc sau) hoặc bỏ thẻ bài đó vào một ống tre thỏa mãn các yêu cầu:
Mỗi ống tre chứa đúng một thẻ bài duy nhất.
Thẻ số chẵn chỉ được bỏ vào ống màu xanh, thẻ số lẻ chỉ được bỏ vào ống màu đỏ.
Chỉ được bỏ thẻ bài vào ống tre thứ 𝑖 khi các ống tre 1, 2, … , 𝑖 − 1 của hàng đó đã được bỏ thẻ bài.
Trò chơi kết thúc khi An đã bỏ thẻ bài vào tất cả các ống tre mà ông giáo xếp ra. Điểm thưởng của An đạt được là số thẻ bài còn lại trong chồng bài ban đầu.
Với sự thông minh của mình thì trò chơi của ông giáo đã không làm khó được An và cậu đã đạt được số điểm cao nhất của trò chơi.
Yêu cầu: Hãy tìm số điểm mà An đạt được.
Dữ liệu: Nhập từ tệp B4.INP có cấu trúc:
Dòng 1: Ghi số 𝑘 bằng 1 hoặc 2 thể hiện số lượng hàng ngang ông giáo xếp ra.
Dòng 2: Ghi một chuỗi có độ dài không quá 5000 kí tự, gồm hai loại kí tự B và R (B tương ứng với ống tre màu xanh và R tương ứng với ống tre màu đỏ) mô tả hàng ống tre thứ nhất.
Dòng 3: tùy vào giá trị của 𝑘, cụ thể:
𝑘 = 1: bỏ trống
𝑘 = 2: ghi một chuỗi có độ dài không quá 5000 kí tự, gồm hai loại kí tự B và R (B tương ứng với ống tre màu xanh và R tương ứng với ống tre màu đỏ) mô tả hàng ống tre thứ hai.
Kết quả: Ghi ra tệp B4.OUT gồm 1 dòng chứa số điểm cao nhất có thể đạt được.
Ví dụ:


| B4.INP | B4.OUT | GIẢI THÍCH |
| --- | --- | --- |
| 1 BRR | 999995 | An bỏ các thẻ theo thứ tự là 2;3;5 nên số điểm của An là 106 − 5 = 999995. |
| 2 BRR | 999992 | An bỏ các thẻ ở hai hàng theo thứ tự là 2;3;5 và 4;6;8  nên  số  điểm  của  An  là	106 − 8 = |



| BBB |  | 999992. |
| --- | --- | --- |
| 2 BRBRB RBRB | 999990 | An bỏ các thẻ ở hai hàng theo thứ tự là 2;3;6;7;10 và 1;4;5;8 nên số điểm của An là 106 − 10 = 999990. |

Giới hạn:
20% số test tương ứng 20% số điểm thoả mãn 𝑘 = 1;
30% số test tương ứng 30% số điểm thoả mãn 𝑘 = 2 và dòng 2 có các kí tự giống nhau;
50% số test tương ứng 50% số điểm thoả mãn 𝑘 = 2 và không ràng buộc gì thêm.
THCS Phú Thọ 2022-2023
Bài 1. Tính tổng
Cho số nguyên dương 𝑛. Hãy tính tổng 𝑆 = −1 + 2 − 3 + ⋯ + 𝑛. (−1)𝑛.
Dữ liệu vào: nhập từ bàn phím số nguyên 𝑛 (1 ≤ 𝑛 ≤ 1012).
Kết quả: in ra màn hình kết quả tìm được.
Ví dụ:


| Dữ liệu vào | Dữ liệu ra |
| --- | --- |
| 4 | 2 |

Ràng buộc:
Có 75% số test tương ứng với 75% số điểm của câu có 𝑛 ≤ 106;
Có 25% số test tương ứng với 25% số điểm của câu có 𝑛 ≤ 1012.
Câu 2: Đếm ước
Số tự nhiên 𝑎 chia hết cho tự nhiên 𝑥 thì 𝑥 được gọi là ước của 𝑎. Nếu 𝑥 < 𝑎
thì 𝑥 được gọi là ước thực sự của 𝑎.
Cho số tự nhiên 𝑛 (1 ≤ 𝑛 ≤ 106). Tìm số tự nhiên nhỏ hơn 𝑛 có nhiều ước thực sự nhất.
Dữ liệu vào: nhập vào từ bàn phím số nguyên 𝑛 (1≤ 𝑛 ≤ 106).
Kết quả: in ra màn hình kết quả của bài toán. Nếu có nhiều số thỏa mãn bài toán thì in ra số bé nhất trong số chúng.
Ví dụ:


| Dữ liệu vào | Dữ liệu ra |
| --- | --- |
| 7 | 6 |

Ràng buộc:
Có 50% số test tương ứng với 50% số điểm của câu có 𝑛 ≤ 104;

Có 50% số test tương ứng với 50% số điểm của câu có 𝑛 ≤ 106.
Bài 3. Số chính phương
Số chính phương là số tự nhiên mà có thể viết dưới dạng bình phương của một số tự nhiên khác. Ví dụ: 0, 1, 4, 9, 16, 25, … là các số chính phương, còn các số 2, 3, 5, … không là số chính phương.
Cho dãy gồm 𝑛 số nguyên 𝑎1, 𝑎2, … , 𝑎𝑛. Tìm số chính phương nhỏ nhất không xuất hiện trong dãy số đã cho.
Dữ liệu vào: nhập từ bàn phím:
Dòng đầu tiên chứa số nguyên 𝑛 (1 ≤ 𝑛 ≤ 106);
Dòng thứ hai chứa 𝑛 số nguyên 𝑎1, 𝑎2, … , 𝑎𝑛 (0 ≤ 𝑎𝑖 ≤ 1012, 𝑖 = 1, 2, … , 𝑛), các số cách nhau một dấu cách.
Kết quả: in ra màn hình kết quả tìm được.
Ví dụ:


| Dữ liệu vào | Dữ liệu ra |
| --- | --- |
| 8 0 3 4 2 1 4 16 25 | 9 |

Ràng buộc:
Có 50% số test tương ứng với 50% số điểm của câu có 1 ≤ 𝑛 ≤ 103, 0 ≤
𝑎𝑖 ≤ 104;
Có 30% số test tương ứng với 30% số điểm của câu có 103 < 𝑛 ≤ 106, 0 ≤ 𝑎𝑖 ≤ 106;
Có 20% số test tương ứng với 20% số điểm của câu có 0 ≤ 𝑎𝑖 ≤ 1012.
Bài 4. Khách hàng may mắn
Nhân dịp năm mới, để thu hút khách hàng đến mua sắm, siêu thị Hùng Vương tổ chức chương trình khách hàng may mắn: mỗi khách hàng đến siêu thị đều nhận được một số may mắn, khách hàng thứ 𝑖 nhận số may mắn là số nguyên 𝑎𝑖 được tạo tự động bằng máy tính. Kết thúc chương trình có 𝑛 khách hàng nhận được số may mắn. Ban tổ chức tiến hành quay số trúng thưởng, những khách hàng may mắn sẽ
nhận được phần thưởng của siêu thị. Để đảm bảo tính khách quan Ban tổ chức nhờ một khách hàng bắt thăm ngẫu nhiên hai số nguyên 𝑥, 𝑦 (1 ≤ 𝑥, 𝑦 ≤ 𝑛) sau đó sử dụng một chương trình máy tính để tìm ra hai số 𝑢, 𝑣 (0 < 𝑢 ≤ 𝑣 ≤ 106) thỏa các điều kiện sau:
Số lượng người có số may mắn 𝑎𝑖 thỏa mãn 𝑢 ≤ 𝑎𝑖 ≤ 𝑣 tối thiểu là 𝑥.
Số lượng người có số may mắn 𝑎𝑗 thỏa mãn 𝑢 ≤ −𝑎𝑗 ≤ 𝑣 tối thiểu là 𝑦.
Hiệu 𝑣 – 𝑢 là nhỏ nhất.
Sau khi tìm được hai số 𝑢, 𝑣 thỏa mãn các điều kiện trên khách hàng có số may mắn 𝑎𝑖 thỏa mãn 𝑢 ≤ |𝑎𝑖| ≤ 𝑣 sẽ được nhận phần thưởng của siêu thị.

Yêu cầu: hãy giúp Ban tổ chức tìm hai số 𝑢, 𝑣 thỏa mãn các điều kiện trên.
Dữ liệu vào: nhập từ bàn phím (các số cách nhau một dấu cách):
Dòng đầu tiên chứa ba số nguyên dương 𝑛, 𝑥, 𝑦 ( 1 ≤ 𝑛 ≤ 2.105; 𝑥, 𝑦 ≤ 𝑛).
Dòng thứ hai chứa 𝑛 số nguyên 𝑎1, 𝑎2, . . , 𝑎𝑛 (0 < |𝑎1| < |𝑎2| < ⋯ < |𝑎𝑛| < 106).
Kết quả: in ra màn hình một dòng duy nhất là hai số 𝑢, 𝑣 tìm được (các số cách nhau một dấu cách). Nếu có nhiều cặp số (𝑢, 𝑣) thỏa mãn bài toán thì in ra cặp số (𝑢, 𝑣) có 𝑢 nhỏ nhất; nếu không tìm được 𝑢, 𝑣 thỏa mãn yêu cầu thì in ra −1.
Ví dụ:


| Dữ liệu vào | Dữ liệu ra | Giải thích |
| --- | --- | --- |
| 4 1 2 1 -2 -3 4 | 1 3 | * Có 3 cặp số 𝑢, 𝑣 thỏa mãn các điều kiện: Cặp {𝑢 = 1, 𝑣 = 4} có 𝑣 − 𝑢 = 3 Cặp {𝑢 = 1, 𝑣 = 3} có 𝑣 − 𝑢 = 2 Cặp {𝑢 = 2, 𝑣 = 4} có 𝑣 − 𝑢 = 2 * Cặp {𝑢 = 1, 𝑣 = 3} có 𝑣 − 𝑢 = 2 nhỏ nhất và (𝑢, 𝑣) có 𝑢 nhỏ nhất. |

Ràng buộc:
Có 50% số test tương ứng 50% số điểm của bài có 𝑛 ≤ 2. 102, |𝑎𝑖| ≤ 102;
Có 30% số test tương ứng 30% số điểm của bài có 2. 102 < 𝑛 ≤ 2.103, |𝑎𝑖| ≤ 104;
Có 20% số test tương ứng 20% số điểm của bài có 2. 103 < 𝑛 ≤ 2.105,
|𝑎𝑖| ≤ 106.
THCS Quảng Nam 2019-2020
Bài 1. Trực nhật
An và Bình là đôi bạn thân học chung lớp. Trong lớp học thì tất cả các bạn đều phải trực nhật và cứ sau một số x ngày nhất định thì bạn đó mới phải trực nhật lại. Biết rằng, ban đầu An và Bình đều trực nhật ngày đầu tiên, và 2 bạn muốn biết sau bao nhiêu ngày thì 2 bạn lại trực nhật chung với nhau và khi đó mỗi bạn đã trực nhật bao nhiêu lần.
Yêu cầu: Em hãy lập trình để trả lời câu hỏi của An và Bình nhé.
Dữ liệu vào: đọc từ file TN.INP gồm:
1 dòng chứa 2 số nguyên x1, x2 (2 ≤ x1, x2 ≤ 109) lần lượt là số ngày mà sau đó An và Bình mới phải trực nhật lại;
Kết quả: ghi ra file TN.OUT gồm:
Dòng đầu tiên ghi ra số ngày An và Bình cùng nhau trực nhật lại;
Dòng thứ 2 chứa 2 số lần lượt là số lần một bạn đã trực nhật cho tới lúc 2 bạn cùng trực nhật.

Ví dụ:


| TN.INP | TN.OUT |
| --- | --- |
| 6 4 | 12 2 3 |

Bài 2. Diện tích hình chữ nhật
Là một học sinh thông minh, nên An luôn tìm được những cách giải hay cho những bài toán lạ. Và bạn ấy vừa giải quyết xong bài toán tìm diện tích chung của 2 hình chữ nhật, tuy nhiên, An lại gặp khó khăn với việc sử dụng ngôn ngữ lập trình để giải quyết bài toán này. Cụ thể bài toán như sau: Cho 2 hình chữ nhật trên mặt phẳng 2D với tọa độ đỉnh trái dưới và đỉnh phải trên, tìm diện tích phần chung của 2 hình chữ nhật này?
Yêu cầu: Em hãy lập trình để giúp bạn An giải quyết bài toán này nhé. Dữ liệu vào: đọc từ file HCN.INP gồm:
Dòng 1 ghi 4 số nguyên x1, y1, x2, y2 tương ứng là tọa độ đỉnh trái dưới và đỉnh phải trên của hình chữ nhật thứ nhất;
Dòng 2 ghi 4 số nguyên u1, v1, u2, v2 tương ứng là tọa độ đỉnh trái dưới và đỉnh phải trên của hình chữ nhật thứ hai;
Trong đó: x1 < x2, y1 < y2, u1 < u2, v1 < v2 và (-109 < x1, y1, x2, y2 , u1, v1, u2, v2 < 109 ).
Kết quả: ghi ra file HCN.OUT số nguyên duy nhất là diện tích phần chung của 2 hình chữ nhật.
Ví dụ:


| HCN.INP | HCN.OUT |
| --- | --- |
| 1 1 3 3 2 0 4 4 | 2 |

Bài 3. Xin chào
An là người thích chat với bạn bè trên Internet. Cậu ấy đã lập ra một phòng chat với điều kiện rằng trước khi vào phòng chat, mọi người phải chào hỏi nhau trước.
Một câu chào được định nghĩa rằng, câu chào đó phải là một xâu kí tự, chỉ gồm các chữ cái, không chứa kí tự trắng, sao cho khi xóa đi một số chữ cái, nó sẽ trở thành một xâu từ khóa Key cho trước, tất nhiên là sẽ không được phép tráo đổi vị trí các chữ cái, mà chỉ được xóa bớt một số chữ cái.
Ví dụ: Với từ khóa key là “xinchao”; khi Bình muốn vào phòng chat, Bình gõ "choxiancaihao" thì hệ thống sẽ xem xét xâu này và sẽ tự động loại bỏ các chữ cái để trở thành từ "xinchao". Như vậy Bình được vào phòng chat.
Nhưng khi Bình gõ "choxian", hệ thống không thể làm cách nào xóa bớt chữ cái để trở thành từ " xinchao" được. Như vậy, Bình không được vào phòng chat.

Yêu cầu: Cho từ khóa Key và N câu chào, em hãy xác định xem câu chào nào được chấp nhận?
Dữ liệu vào: Đọc từ file XINCHAO.INP gồm:
Dòng thứ nhất chứa số nguyên dương N (N ≤ 100)
Dòng thứ hai chứa từ khóa Key (có độ dài ≤ 104)
N dòng tiếp theo, mỗi dòng chứa xâu chữ cái mà Bình định gõ (có độ dài ≤ 106).
Kết quả: Ghi ra file XINCHAO.OUT gồm:
N dòng, mỗi dòng tương ứng với câu chào, câu chào được đồng ý thì xuất "YES", nếu không đồng ý thì xuất "NO" (viết hoa và không chứa dấu ngoặc kép).
Ví dụ:


| XINCHAO.INP | XINCHAO.OUT |
| --- | --- |
| 4 hello ahhellllloou hlelo helhcludoo HelhcLudoo | YES NO YES NO |

Ràng buộc:
Có 60% số test ứng với 60% số điểm có xâu chữ cái ≤ 104;
Có 40% số test còn lại ứng với 40% số điểm có có xâu chữ cái 𝜖 (104, 106].
Bài 4: Mua quà lưu niệm
An là một học sinh tham dự cuộc thi Học sinh giỏi lớp 9. Sau khi thi xong, An cùng các bạn được nhà trường đưa đi tham quan nhiều danh lam thắng cảnh và cửa hàng lưu niệm tại thành phố Tam Kỳ. An muốn mua quà lưu niệm tặng các bạn thân ở nhà.
Khi đến một cửa hàng lưu niệm ở trung tâm thành phố, An được chủ cửa hàng giới thiệu giá của n (3≤ n ≤ 105) món quà, món quà thứ i (1 ≤ i ≤ n) có giá tiền là ai ( 1≤ ai ≤104). An muốn chọn mua m (1 ≤ m ≤ n) món quà sao cho chênh lệch giá tiền giữa món quà có giá trị lớn nhất và nhỏ nhất là ít nhất có thể.
Yêu cầu: Em hãy lập trình giúp An mua các món quà tặng thỏa mãn yêu cầu.
Dữ liệu vào: Đọc từ file MUAQUA.INP, gồm 02 dòng:
Dòng 1: ghi hai số nguyên m và n, cách nhau bởi dấu cách;
Dòng 2: ghi n số nguyên a1, a2,… ,an và đặt cách nhau bởi dấu cách.
Kết quả: Ghi ra file MUAQUA.OUT, gồm 01 dòng ghi duy nhất số k là độ chênh lệnh giá trị nhỏ nhất cần tìm.

Ví dụ:


| MUAQUA.INP | MUAQUA.OUT | Giải thích |
| --- | --- | --- |
| 4 6 10 12 10 5 7 22 | 5 | An có thể mua các món quà có giá trị: 10, 12, 10, 7. |

Ràng buộc:
Có 50% số test ứng với 50% số điểm có 0<N, M ≤ 105; ai ≤ 103;
Có 30% số test ứng với 30% số điểm có 0<N, M ≤ 105; 103 < ai ≤ 104.
THCS Quảng Nam 2020-2021
Bài 1. Chia quà
Nhân dịp đi siêu thị cùng mẹ, Hằng đã mua M quả táo về làm quà cho hai người bạn thân là Nga và Trang. Mỗi quả táo có trọng lượng là 100g hoặc 200g. Hằng muốn chia đều M quả táo trên thành hai phần có trọng lượng bằng nhau để chia cho hai bạn vì khi mua Hằng quên kiểm tra điều này.
Yêu cầu: Theo em, Hằng có thể chia M quả táo trên thành hai phần có trọng lượng bằng nhau được không?
Dữ liệu vào: Từ tệp văn bản CHIAQUA.INP gồm:
Dòng thứ nhất là số nguyên M (1 ≤ M ≤ 106);
Dòng thứ hai gồm M số nguyên a1, a2, …, aM là trọng lượng của các quả táo mà Hằng đã mua và mỗi số nguyên ai cách nhau một khoảng trắng (dữ liệu vào đảm bảo chỉ có hai trường hợp ai = 100 hoặc ai = 200).
Kết quả: Ghi ra tệp văn bản CHIAQUA.OUT
Nếu Hằng có thể chia được thì thông báo là YES, còn nếu không chia được thì thông báo là NO.
Ví dụ:


| CHIAQUA.INP | CHIAQUA.OUT |
| --- | --- |
| 3 100 200 100 | YES |



| CHIAQUA.INP | CHIAQUA.OUT |
| --- | --- |
| 4 100 100 100 200 | NO |

Bài 2. Mã số nhân viên
Tổng Giám đốc công ty Hoa Hồng nổi tiếng là người rất cẩn trọng. Ông ta thực hiện việc quản lí nhân viên bằng cách gán cho mỗi nhân viên một mã số. Công ty có N nhân viên thì mỗi nhân viên i (i = 1, 2, …, N) đều có một mã số hoàn toàn khác nhau. Do bận đi công tác một thời gian dài nên ông ta giao lại quyền quản lí cho trợ lý của ông. Khi ông trở về, công ty đã có sự thay đổi số lượng nhân viên. Vì

vậy, khi tiếp nhận thêm nhân viên mới, ông ta muốn biết mã số lớn nhất để gán cho nhân viên mới.
Yêu cầu: Hãy tìm mã số lớn nhất chưa xuất hiện trong N mã số đã cho.
Dữ liệu vào: Từ tệp văn bản CODE.INP gồm:
Dòng thứ nhất ghi số nguyên dương N là số lượng nhân viên (1 < N ≤ 106);
N dòng tiếp theo, dòng thứ i ghi số ai (i = 1, 2, ..., N; |ai| ≤ 109).
Kết quả: Ghi ra tệp văn bản CODE.OUT gồm một số duy nhất là mã số tìm được.
Ví dụ:


| CODE.INP | CODE.OUT |
| --- | --- |
| 6 7 4 2 6 1 3 | 5 |

Ràng buộc:
Sub1: Có 50% test tương ứng 50% số điểm của bài với N ≤ 100 và |ai| ≤ 103;
Sub2: Có 30% test tương ứng 30% số điểm của bài với N ≤ 1000 và |ai| ≤ 106;
Sub3: Có 20% test tương ứng 20% số điểm còn lại của bài với N ≤ 106 và |ai| ≤ 109.
Bài 3. Xâu đối xứng
Cho một xâu ST (độ dài không quá 2x103 kí tự ) chứa ít nhất một chữ cái in hoa (‘A’… ‘Z’) hoặc một chữ cái thường (‘a’… ‘z’) hoặc chữ số (‘0’...‘9’).
Yêu cầu: Hãy tìm độ dài của xâu con đối xứng dài nhất.
Một xâu được gọi là đối xứng nếu nó không có ít hơn một kí tự và nếu đọc từ trái sang phải hay từ phải sang trái đều giống nhau.
Ví dụ:	‘B’; ‘TOT’; ‘BAILIAB’ là các xâu đối xứng. ‘HOCBAI’ là xâu không đối xứng.
Dữ liệu vào: Từ tệp văn bản XAUDX.INP gồm một xâu ST.
Kết quả: Ghi ra tệp văn bản XAUDX.OUT gồm một số duy nhất là độ dài của xâu con đối xứng dài nhất.
Ví dụ:


| XAUDX.INP | XAUDX.OUT |
| --- | --- |
| ABFGHIKLMLKIHGH | 11 |


Ràng buộc: Với N là độ dài của xâu ST
Sub1: Có 60% test tương ứng 60% số điểm của bài với N < 255;
Sub2: Có 40% test khác tương ứng 40% số điểm còn lại của bài với N ≤ 2x103.
Bài 4. Ốc sên ăn rau
Một khu vườn hình chữ nhật có kích thước NxM (N dòng, M cột). Ta đánh số các dòng từ 1 đến N theo chiều từ trên xuống dưới và các cột từ 1 đến M theo chiều từ trái sang phải để chia khu vườn thành các ô. Trong các ô đó, ngoài những ô là đất để người nông dân trồng rau vẫn có những ô là đá không thể trồng rau được. Một chú ốc sên xuất phát tại ô (x, y) (x là vị trí dòng, y là vị trí cột). Nếu ô xuất phát là đất, chú ốc sên có thể di chuyển sang 4 ô kề cạnh với ô đó (bên trái, bên phải, bên trên, bên dưới) và đương nhiên không thể di chuyển vào ô đá được. Trường hợp ô xuất phát là đá thì chú ốc sên không thể di chuyển đến ô nào khác.
Yêu cầu: Hãy tính xem chú ốc sên có thể di chuyển đến nhiều nhất là bao nhiêu ô để ăn rau?
Dữ liệu vào: Từ tệp văn bản OCSEN.INP gồm:
Dòng thứ nhất gồm 4 số nguyên N, M, X, Y (mỗi số cách nhau một khoảng trắng) (1 ≤ X ≤ N ≤ 2000, 1 ≤ Y ≤ M ≤ 2000);
Trong N dòng tiếp theo, mỗi dòng gồm M số nguyên 0 hoặc 1 (mỗi số cách nhau một khoảng trắng). Số 0 nghĩa là ô trồng rau, số 1 nghĩa là ô đá.
Kết quả: Ghi ra tệp văn bản OCSEN.OUT gồm một số nguyên là số lượng ô lớn nhất mà chú ốc sên có thể di chuyển đến để ăn rau. Nếu chú ốc sên không ăn được ô rau nào thì ghi kết quả là -1.
Ví dụ:


| OCSEN.INP | OCSEN.OUT |
| --- | --- |
| 4 5 2 4 0 0 1 0 0 0 1 0 0 1 1 0 0 0 0 0 1 0 0 1 | 10 |

Ràng buộc:
Sub1: Có 50% test tương ứng 50% số điểm của bài với N, M < 10;
Sub2: Có 30% test tương ứng 30% số điểm của bài với N, M ≤ 100;
Sub3: Có 20% test khác tương ứng 20% số điểm còn lại của bài với N, M ≤ 2x103.
THCS Quảng Nam 2021-2022
Bài 1. Tổng và lũy thừa
Cho hai số tự nhiên a và n (1 ≤ a, n ≤ 109).
Yêu cầu: Gọi S là tổng của a và n, T là lũy thừa an. Hãy tính S và T.

Dữ liệu vào: Từ tệp văn bản SPOW.INP gồm một dòng chứa 2 số a và n (các số cách nhau ít nhất một dấu cách).
Kết quả: Ghi ra tệp văn bản SPOW.OUT gồm hai dòng: Dòng thứ nhất là S và dòng thứ hai là T (do S và T có thể lớn nên kết quả của bài toán chia dư cho 109+7).
Ví dụ:


| SPOW.INP | SPOW.OUT |
| --- | --- |
| 2 3 | 5 8 |

Ràng buộc:
Có 80% test tương ứng 80% số điểm với a và n ≤ 106;
Có 20% test còn lại tương ứng 20% số điểm với 106 < a và n ≤ 109.
Bài 2. Xâu đối xứng
Cho một xâu S chứa ít nhất một chữ cái in hoa (‘A’.. ‘Z’) hoặc một chữ cái thường (‘a’.. ‘z’) hoặc một chữ số (‘0’.. ‘9’). Một xâu kí tự được gọi là xâu đối xứng nếu ta đọc xâu này từ trái sang phải hoặc từ phải sang trái là như nhau.
Ví dụ: Xâu ‘aBa’, ‘abba’, ‘ccccc’ là xâu đối xứng. Còn những xâu ‘acba’, ‘abA’, ‘lop09’ không phải là xâu đối xứng.
Yêu cầu: Cho xâu S (với |S| là độ dài của xâu), hãy cho biết xâu S có đối xứng không? Nếu có thì ghi “YES” ngược lại thì ghi là “NO” .
Dữ liệu vào: Từ tệp văn bản PALIN.INP gồm:
Dòng đầu tiên chứa một số nguyên dương T (T ≤ 104) là số lượng xâu S;
T dòng tiếp theo, mỗi dòng chứa một xâu S.
Kết quả: Ghi ra tệp văn bản PALIN.OUT gồm T dòng, mỗi dòng là kết quả tương ứng với mỗi xâu S, ghi ra “YES” nếu là xâu đối xứng hoặc “NO” nếu không phải là xâu đối xứng.
Ví dụ:


| PALIN.INP | PALIN.OUT |
| --- | --- |
| 2 aBa acba | YES NO |

Ràng buộc:
Có 60% test tương ứng 60% số điểm với |S| ≤ 255;
Có 40% test còn lại tương ứng 40% số điểm với |S| ≤ 1000.
Bài 3. Đếm giá trị
Hưng có người bạn thân tên Hà. Hưng đang tìm cách giải một bài toán liên quan đến số tự nhiên và cần sự giúp đỡ của Hà. Thử thách lần này là một dãy gồm

N số tự nhiên bất kỳ nằm trong đoạn từ 0 tới 107. Vấn đề đặt ra của bài toán là đếm số lượng giá trị khác nhau có trong dãy số và đưa ra số lần lặp của giá trị xuất hiện nhiều nhất. Vì số lượng các số tự nhiên trong dãy số đã cho có thể lên tới 107 phần tử nên không thể đếm thủ công mà cần thuật toán để cài đặt vào máy tính và nhờ máy tính làm giúp.
Ví dụ, dãy gồm 8 số: 2, 3, 1, 3, 5, 2, 2, 8 thì dãy có 5 giá trị khác nhau và số lần lặp của giá trị xuất hiện nhiều nhất trong dãy là 3.
Yêu cầu: Cho một dãy A gồm N số tự nhiên. Gọi Q là số lượng giá trị khác nhau có trong dãy và P là số lần lặp của giá trị xuất hiện nhiều nhất trong dãy A. Hãy tìm Q và P.
Dữ liệu vào: Từ tệp văn bản COUNT.INP gồm:
Dòng 1: chứa số nguyên N (1 ≤ N ≤ 107);
Dòng 2: chứa N số tự nhiên A1, A2,..., AN (0 ≤ Ai ≤ 107; i  1, N và các số cách nhau ít nhất một dấu cách).
Kết quả: Ghi ra tệp văn bản COUNT.OUT gồm:
Dòng 1: ghi số Q;
Dòng 2: ghi số P.
Ví dụ:


| COUNT.INP | COUNT.OUT |
| --- | --- |
| 8 2 3 1 3 5 2 2 8 | 5 3 |

Ràng buộc:
Có 70% test tương ứng 70% số điểm với N và Ai ≤ 104;
Có 30% test còn lại tương ứng 30% số điểm với N và Ai ≤ 107.
Bài 4. Siêu thị
Trong siêu thị có n gói hàng. Với mỗi i (1 ≤ i ≤ n), gói hàng thứ i có trọng lượng là Wi (1 ≤ Wi ≤ 100) và giá trị Vi (1 ≤ Vi ≤ 100). Chị Hoa vào siêu thị để mua sắm đồ dùng gia đình nhưng sức của chị không thể mang được trọng lượng gói hàng vượt quá M (1 ≤ M ≤ 100). Hỏi chị Hoa sẽ mua được những gói hàng nào để được tổng giá trị lớn nhất.
Yêu cầu: Em hãy giúp chị Hoa tìm tổng giá trị lớn nhất của các gói hàng được chọn để mang đi.
Dữ liệu vào: Từ tệp văn bản MARKET.INP gồm:
Dòng đầu tiên chứa hai số nguyên dương n và M ;
n dòng tiếp theo, mỗi dòng chứa hai số nguyên dương Wi và Vi (các số cách nhau ít nhất một dấu cách).
Kết quả: Ghi ra tệp văn bản MARKET.OUT gồm một số duy nhất cần tìm. Trường

hợp không chọn được gói hàng nào thì ghi kết quả là -1.
Ví dụ:


| MARKET.INP | MARKET.OUT |
| --- | --- |
| 3 8 3 30 4 50 5 60 | 90 |

Giải thích: Gói hàng thứ 1 và thứ 3 sẽ được chọn để mang đi. Vì chúng có tổng khối lượng không quá 8 và có giá trị lớn nhất là 90.
Ràng buộc:
Có 80% test tương ứng 80% số điểm với n ≤ 30;
Có 20% test còn lại tương ứng 20% số điểm với n ≤ 100.
THCS Quảng Nam 2022-2023 Bài 1. THẦN TƯỢNG
Trong vòng chung kết cuộc thi “THẦN TƯỢNG ÂM NHẠC”, mỗi thí sinh được đánh số báo danh khác nhau là một số nguyên dương có giá trị không vượt quá 1000. Khán giả xem truyền hình có thể bình chọn bằng cách nhắn tin số báo danh thí sinh mình yêu thích qua điện thoại di động.
Ban tổ chức nhận được tin nhắn hợp lệ của N khán giả (các khán giả được đánh số từ 1 đến N), khán giả thứ i bình chọn cho thí sinh mang số báo danh ai.
Yêu cầu: Hãy đưa ra số báo danh của thí sinh được khán giả bình chọn nhiều nhất. (Nếu nhiều thí sinh có cùng số lượng khán giả bình chọn nhiều nhất thì liệt kê các số báo danh đó theo thứ tự tăng dần).
Dữ liệu vào từ file văn bản THANTUONG.INP:
Dòng 1: Ghi số nguyên dương N là số lượng khán giả có tin nhắn bình chọn hợp lệ (N ≤ 106)
N dòng tiếp theo, dòng thứ i ghi số nguyên dương ai là số báo danh của thí sinh mà khán giả thứ i bình chọn.
Dữ liệu ra file văn bản THANTUONG.OUT:
Danh sách các thí sinh được khán giả bình chọn nhiều nhất theo thứ tự số báo danh tăng dần, mỗi số trên một dòng.
Ví dụ:


| THANTUONG.INP | THANTUONG.OUT |
| --- | --- |
| 5 3 1 3 2 | 2 3 |



| 2 |  |
| --- | --- |

Ràng buộc:
Có 50% test tương ứng 50% số điểm với N  1000.
Có 50% test tương ứng 50% số điểm với 1000 < N ≤ 106.
Bài 2. SỐ ĐẸP
Số đẹp là số nguyên tố mà khi ta xóa đi một số tuỳ ý các chữ số bên phải của số đó thì phần còn lại vẫn tạo thành một số nguyên tố.
Ví dụ:
- Số 7331 là một số đẹp có 4 chữ số vì 7331, 733, 73, 7 đều là các số nguyên

tố.

- Số 5 là một số đẹp có 1 chữ số vì số 5 là số nguyên tố.
Cho dãy A gồm N số nguyên dương: A1, A2,…, AN (1  Ai  1015).

Yêu cầu: Hãy liệt kê tất cả các số đẹp có trong dãy trên.
Dữ liệu vào từ file văn bản SODEP.INP:
Dòng 1: Ghi số nguyên dương N (1  N  1000).
Dòng 2: Ghi N số nguyên dương của dãy A.
Các số được ghi cách nhau một dấu cách.
Dữ liệu ra file văn bản SODEP.OUT:
Gồm nhiều dòng, mỗi dòng ghi một số đẹp tìm được.
Nếu không tìm được số đẹp trong dãy thì ghi ra file một số: 0.
Ví dụ:


| SODEP.INP | SODEP.OUT |
| --- | --- |
| 5 2 13 7 123 53 | 2 7 53 |

Ràng buộc:
Có 70% số test ứng với 70% số điểm của bài có Ai < 105.
Có 30% số test ứng với 30% số điểm của bài có 105 <= Ai <= 1015.
Bài 3. LÌ XÌ ĐẦU NĂM
Nhân dịp đầu năm mới, một ngân hàng ABC tổ chức chương trình lì xì khách hàng gửi tiết kiệm với hình thức sau: Khi khách hàng đến gửi tiền tiết kiệm thì sẽ được cấp hai số may mắn n và k là các số nguyên không âm, ngân hàng sẽ lì xì cho người đó một số tiền tương ứng với số nhận được sau khi xóa đúng k chữ số ở bất kỳ vị trí nào của số n.
Lan vừa đi gửi tiết kiệm đầu năm và được cung cấp hai số n và k, bạn hãy giúp Lan xóa đi k chữ số của số n để số tiền lì xì nhận được là lớn nhất.

Dữ liệu vào file văn bản LIXI.INP:
Dòng 1: Ghi số n (số chữ số của n ≤ 105)
Dòng 2: Ghi số k (k nhỏ hơn số chữ số của n)
Kết quả ra file văn bản LIXI.OUT:
Một dòng duy nhất ghi số lớn nhất nhận được sau khi xóa đi k chữ số của n.
Ví dụ:


| LIXI.INP | LIXI.OUT |
| --- | --- |
| 58816 2 | 886 |
| 2357111317192329 6 | 7317192329 |

Ràng buộc:
Có 30% số test ứng với 30% số điểm của bài có số chữ số của n ≤ 100.
Có 30% số test ứng với 30% số điểm của bài có 100 < số chữ số của n ≤ 200.
Có 40% số test ứng với 40% số điểm của bài có 200 < số chữ số của n ≤ 105.
THCS Quảng Nam 2023-2024
Bài 1. Số nguyên tố Q
Cho một số nguyên dương N (N ≤ 5x1017). Tìm chữ số nhỏ thứ Q trong N và kiểm tra nó có phải là số nguyên tố hay không.
Dữ liệu vào: Từ file văn bản SONTTQ.INP gồm:
Dòng đầu tiên chứa số N;
Dòng thứ hai chứa số Q (0 < Q ≤ 9).
Kết quả: Ghi ra file văn bản SONTTQ.OUT gồm số nhỏ thứ Q và từ “Yes” nếu là số nguyên tố hoặc từ “No” nếu không phải là số nguyên tố. Trường hợp không tìm thấy chữ số nhỏ thứ Q thì ghi -1 (các giá trị cách nhau một khoảng trắng).
Ví dụ:


| SONTTQ.INP | SONTTQ.OUT |
| --- | --- |
| 924567 5 | 7 Yes |
| 5568924 4 | 6 No |
| 55557 5 | -1 |

Ràng buộc:
Có 60% test tương ứng 60% số điểm của bài với 0<N ≤ 106;
Có 30% test tương ứng 30% số điểm của bài với 106 < N ≤ 109;
Có 10% test tương ứng 10% số điểm của bài với 109 < N ≤ 5x1017.

Bài 2. Sức mạnh
Để tạo sân chơi bổ ích cũng như tìm kiếm nguồn nhân tài cho cuộc thi lập trình game tại Ấn Độ sẽ diễn ra trong năm tới, ở vòng thi sơ loại, ban tổ chức mô phỏng trò chơi khá hấp dẫn. Yêu cầu trò chơi được ghi cụ thể như sau:
Trò chơi này chỉ dành cho một người tham gia, mà trong đó người chơi phải trải qua q lượt chơi khác nhau để tiêu diệt hết các con thú. Lượt chơi thứ i sẽ xuất hiện con thú thứ i có giá trị ai và có chỉ số sức mạnh bằng tổng các ước nguyên dương của ai (1 ≤ i ≤ q).
Là người đam mê lập trình, bạn hãy tính sức mạnh của q con thú đã xuất hiện trong trò chơi trên.
Dữ liệu vào: Từ file văn bản SMTHU.INP gồm:
Dòng thứ nhất chứa duy nhất số q;
Dòng thứ hai lần lượt chứa q số: a1, a2, …, aq.
Kết quả: Ghi ra file văn bản SMTHU.OUT gồm q số, số thứ i thể hiện sức mạnh của con thú thứ i (các giá trị cách nhau một khoảng trắng).
Ví dụ:


| SMTHU.INP | SMTHU.OUT |
| --- | --- |
| 3 2 4 5 | 3 7 6 |
| 4 10 34 16 45 | 18 54 31 78 |

Giải thích test 1:
Gọi G(x) là tổng các ước của x.
G(2) = 1+2 =3; G(4) = 1 + 2 + 4 = 7; G(5) = 1+5 = 6.
Ràng buộc:
Có 50% test tương ứng 50% số điểm của bài với 𝑞 ≤ 104; 𝑎i ≤ 103 (1 ≤ 𝑖 ≤
𝑞);
Có 50% test tương ứng 50% số điểm của bài với 𝑞 = 10; 𝑎i≤ 109 (1 ≤ 𝑖 ≤
𝑞).
Bài 3. Mật mã
Trong cuộc chiến tranh chống Mỹ của Việt Nam, tổng chỉ huy quân sự Mỹ truyền đi bảng mật mã và đã bị quân ta lấy được. Mật mã của chúng là xâu ký tự bao gồm các chữ cái, chữ số (không phân biệt chữ hoa, chữ thường) và các khoảng trắng.
Cấp trên yêu cầu cho quân đội ta phải nhanh chóng dịch ra mật mã để phá huỷ kế hoạch tác chiến của địch. Mật mã sau khi chuyển đổi bao gồm:
Khoá mở hòm tài liệu là tổng các chữ số trong bảng mật mã;
Thông tin triển khai kế hoạch tác chiến của địch là dãy các từ sau khi đảo

ngược các ký tự trong mỗi từ (không chứa ký tự số).
Dữ liệu vào: Từ file văn bản MATMA.INP gồm một dòng chứa xâu s cho trước (s không quá 106 ký tự, giữa các từ có thể cách nhau một hoặc nhiều khoảng trắng).
Kết quả: Ghi ra file văn bản MATMA.OUT là mật mã sau khi chuyển đổi gồm khoá mở hòm tài liệu và thông tin triển khai kế hoạch tác chiến. (các giá trị cách nhau một khoảng trắng).
Ví dụ:


| MATMA.INP | MATMA.OUT |
| --- | --- |
| 4ob43 hn54ib0 | 20 bo binh |
| n6a5t02 gn6oc4 h3n2ahn | 28 tan cong nhanh |

Ràng buộc:
Có 60% test tương ứng 60% số điểm của bài với độ dài xâu s không quá 255 ký tự;
Có 40% test tương ứng 40% số điểm của bài với độ dài xâu s không quá 106 ký tự.
Bài 4. Thành tích
Đầu tháng ba, Sở GDĐT tỉnh S có tổ chức giải thể thao năm học 2023 - 2024 cho học sinh phổ thông trên toàn tỉnh, nhằm tìm ra những học sinh có năng khiếu thể thao tạo nguồn tham gia Hội khoẻ Phù Đổng toàn quốc sắp đến. Tại cuộc thi, vì có rất nhiều đơn vị tham dự ở nhiều bộ môn nên có các đơn vị có thành tích bằng nhau.
Giả sử đơn vị A thi n môn, đơn vị B thi m môn, ban tổ chức quy định thành tích bằng nhau của hai đơn vị A, B khi và chỉ khi tích điểm n môn thi của đơn vị A tương ứng là a1, a2,.., an bằng tích điểm m môn thi của đơn vị B tương ứng là b1, b2,.., bm.
Yêu cầu: Với khả năng lập trình của bạn, hãy giúp Sở GDĐT tỉnh S kiểm tra thành tích của hai đơn vị cho trước có bằng nhau hay không.
Dữ liệu vào: Từ file văn bản TTICH.INP gồm:
Dòng đầu tiên chứa số nguyên t là số bộ test cần kiểm tra;
Tiếp theo là t nhóm dòng, mỗi nhóm dòng mô tả một bộ test bao gồm:
Dòng đầu tiên chứa hai số nguyên n và m (1 ≤ n, m ≤ 100);
Dòng thứ hai chứa n số nguyên dương a1, a2, …, an (1 ≤ ai <107);
Dòng thứ ba m số nguyên dương b1, b2, …, bm (1 ≤ bi < 107).
Kết quả: Ghi ra file văn bản TTICH.OUT gồm t dòng, dòng thứ i ghi từ “YES” nếu thành tích hai đội bằng nhau, ngược lại ghi từ “NO” tương ứng bộ test thứ i.
Ví dụ:


| TTICH.INP | TTICH.OUT |
| --- | --- |
| 2 | YES |



| 2 3 9 3 3 3 3 3 3 5 4 2 2 3 5 | NO |
| --- | --- |

Ràng buộc:
Có 60% test tương ứng 60% số điểm của bài với t ≤ 10, 1 ≤ n, m ≤ 10, 1≤ ai, bi
≤ 102;
Có 40% test tương ứng 40% số điểm của bài với t =5, 1≤ n, m ≤ 50, 1≤ ai, bi
<107.
THCS Quảng Ninh 2022-2023
Bài 1. Màn hình
Một công ty lớn đã quyết định đưa ra một loại màn hình có đúng n điểm ảnh được xếp thành các hàng và các cột.
Nhiệm vụ của bạn là xác định số hàng điểm ảnh a và số cột điểm ảnh b sao

cho:

Có đúng n điểm ảnh trên màn hình, tức là a X b = n;
Số hàng điểm ảnh không vượt quá số cột điểm ảnh, tức là a < b;
Sự khác biệt b – a càng nhỏ càng tốt.

Dữ liệu: Vào từ tệp văn bản DISP.INP gồm một dòng chứa số nguyên n (1≤n≤109).
Kết quả: Ghi ra tệp văn bản DISP.OUT hai số nguyên tương ứng là số hàng và số cột điểm ảnh cần tìm của màn hình.
Ví dụ:


| DISP.INP | DISP.OUT |
| --- | --- |
| 8 | 2 4 |
| 25 | 5 5 |

Ràng buộc:
Có 30% số test ứng với 30% số điểm thỏa mãn: 1≤ n ≤103;
30% số test khác ứng với 30% số điểm thỏa mãn: 1 ≤n≤107;
40% số test còn lại ứng với 40% số điểm: Không có thêm ràng buộc nào.
Bài 2. Dãy số tăng
Dãy số a1, a2,…, an được gọi là tăng nếu a1 < a2 < ...< an
Bạn được cho một dãy số b1, b2, ..., bn và một số nguyên dương d. Trong mỗi lần thao tác, bạn chọn một phần tử của dãy số và cộng thêm d vào nó. Số thao tác ít nhất là bao nhiêu để biến đổi dãy số đã cho trở thành dãy số tăng.

Dữ liệu: Vào từ tệp văn bản INCR.INP:
Dòng đầu tiên chứa hai số nguyên n và d (1≤ n ≤105; 1 ≤ d ≤109).
Dòng thứ hai chứa n số nguyên tương ứng là dãy số b1,b2,...,bn (1 ≤ bi ≤ 109).
Kết quả: Ghi ra tệp văn bản INCR.OUT một số nguyên là số thao tác ít nhất để biến đổi dãy số đã cho trở thành dãy số tăng.
Ví dụ:


| INCR.INP | INCR.OUT |
| --- | --- |
| 4 2 1 3 3 2 | 3 |

Trong ví dụ trên, ta có dãy số b là: 1,3,3, 2 và d = 2. Số thao tác ít nhất để biến đổi dãy số trở thành dãy số tăng là 3 và một trong các cách thực hiện như sau:
Thao tác thứ nhất: Cộng thêm d vào phần tử thứ ba, dãy số trở thành: 1,3,5,
2;
Thao tác thứ hai: Cộng thêm d vào phần tử thứ tư, dãy số trở thành: 1,3,5,4;
Thao tác thứ ba: Cộng thêm d vào phần tử thứ tư, dãy số trở thành: 1,3,5, 6
và là dãy số tăng.
Ràng buộc:
Có 30% số test ứng với 30% số điểm thỏa mãn: 1 ≤ n, d, bi ≤ 102;
30% số test khác ứng với 30% số điểm thỏa mãn: 1 ≤ n ≤ 103 và 1 ≤ d, bi ≤ 106;
40% số test còn lại ứng với 40% số điểm: Không có thêm ràng buộc nào.
Bài 3. Bánh mì và bánh rán
Mẹ của An đã lên lên kế hoạch ăn sáng bằng bánh mì hoặc bánh rán cho An trong n ngày (được đánh số từ 1 đến n). Mẹ của An viết một xâu s độ dài n, trong đó kí tự thứ i (1 ≤ i ≤ n) là ‘0” hoặc “1” biểu thị ngày thứ i sẽ ăn bánh mì hoặc bánh rán tương ứng.
An thích ăn bánh rán hơn bánh mì, nên anh ta muốn chọn một đoạn gồm k ký tự liên tiếp trong xâu s và thay đổi mỗi kí tự ‘0’ trong đoạn này thành ‘1”. Gọi time là số ngày liên tiếp dài nhất mà An ăn bánh rán. Bạn hãy giúp An tìm giá trị time lớn nhất mà anh ta có thể đạt được bằng cách chọn một đoạn hợp lý.
Dữ liệu: Vào từ tệp văn bản DONU.INP:
Dòng đầu tiên chứa hai số nguyên n và k (1 ≤ k ≤ n ≤ 106).
Dòng thứ hai chứa xâu s độ dài n, chỉ gồm các ký tự ‘0’ và ‘1’.
Kết quả: Ghi ra tệp văn bản DONU.OUT một số nguyên là giá trị time lớn nhất.
Ví dụ:


| DONU.INP | DONU.OUT |
| --- | --- |



| 13 2 0101110000101 | 5 |
| --- | --- |
| 6 3 100001 | 4 |

Trong ví dụ thứ nhất, An cần chọn đoạn ký tự từ thứ 2 đến thứ 3 là “10”, sau đó thay đổi kí tự thứ 3 trong s thành “1” và time là 5 ngày: từ ngày thứ 2 đến ngày thứ 6.
Trong ví dụ thứ hai, An cần chọn đoạn ký tự từ thứ 2 đến thứ 4 là “000”, sau đó thay đổi tất cả các kí tự trong đoạn này từ “0” thành ‘1’ và time là 4 ngày: từ ngày thứ 1 đến ngày thứ 4.
Ràng buộc:
Có 30% số test ứng với 30% số điểm thỏa mãn: 1≤k<N≤102;
30% số test khác ứng với 30% số điểm thỏa mãn: 1 ≤ k ≤ n≤103;
40% số test còn lại ứng với 40% số điểm: Không có thêm ràng buộc nào.
Bài 4. Giờ học giáo dục thể chất
Trước giờ học giáo dục thể chất, một lớp gồm n học sinh xếp thành một hàng. Tất cả học sinh trong lớp đều có chiều cao khác nhau. Vị trí thứ i (i = 1, 2, ...,) tính từ đầu bên trái của hàng là học sinh có chiều cao p (1 ≤ pi ≤ N).
Khi bắt đầu giờ học, thầy giáo có thể thay đổi thứ tự học sinh trong hàng. Để làm điều này, thầy giáo có thể thực hiện thao tác sau đúng một lần: chọn một đoạn từ vị trí 1 đến vị trí r (1 ≤ l ≤ r ≤ n) và sắp xếp các học sinh trong đoạn này theo chiều cao tăng dần từ trái sang phải. Ví dụ n = 5, ban đầu học sinh theo thứ tự có chiều cao là 5, 2, 4, 1, 3 và thầy giáo chọn l = 1, r = 4 thì sau khi sắp xếp học sinh sẽ theo thứ tự có chiều cao là 1, 2, 4, 5, 3.
Sử dụng thao tác này, thầy giáo có thể sắp xếp để hai học sinh nào đó cách xa nhau nhất có thể. Khoảng cách giữa hai học sinh bằng sự chênh lệch giữa các vị trí mà hai học sinh đứng. Với mỗi cặp học sinh, thầy giáo tính khoảng cách lớn nhất giữa hai học sinh này sau khi thực hiện đúng 1 thao tác nói trên. Bạn hãy giúp thầy giáo tìm tổng của các giá trị này.
Cụ thể hơn, hãy xét hai học sinh ban đầu ở vị trí i và j (1≤ i< j ≤ n). Gọi d(i,j) là khoảng cách lớn nhất giữa hai học sinh đó mà thầy giáo có thể đạt được bằng cách chọn một đoạn và sắp xếp. Bạn cần tính tổng tất cả các giá trị d(i,j) với mọi i, j thỏa mãn 1 ≤ i < j ≤ n.
Dữ liệu: Vào từ tệp văn bản PHYS.INP:
Dòng đầu tiên chứa một số nguyên n là số học sinh trong lớp (2 ≤ n ≤ 3000).
Dòng thứ hai chứa n số nguyên p1, p2, ..., pn là chiều cao của từng học sinh trong hàng (1 ≤ pi ≤ n). Dữ liệu đảm bảo rằng tất cả các số pi đều phân biệt.
Kết quả: Ghi ra tệp văn bản PHYS.OUT một số nguyên là câu trả lời cho bài toán.
Ví dụ:


| PHYS.INP | PHYS.OUT |
| --- | --- |
| 5 5 2 4 1 3 | 35 |
| 10 2 1 6 8 3 5 9 10 74 | 256 |
| 2 2 1 | 1 |

Trong ví dụ đầu tiên, câu trả lời là tổng của các số sau: d(1,2) = 3, d(1,3)
= 4, d(1, 4) = 4, d(1,5) = 4, d(2,3) = 3, d(2,4) = 3, d(2,5) = 4, d(3,4) = 3, d(3,5) =
3, d(4,5) = 4.
Ví dụ với hai học sinh ban đầu đứng ở vị trí 4 và 5, có chiều cao lần lượt là 1 và 3, thầy giáo có thể chọn đoạn với L = 1 và r = 4. Khi đó dãy học sinh sẽ thay đổi như sau: 5,2,4,1,3 → 1,2,4,5,3 (Đoạn đã chọn được gạch dưới) và khoảng cách giữa hai học sinh này là 4.
Ràng buộc:
Có 20% số test ứng với 20% số điểm thỏa mãn: n ≤ 10;
20% số test khác ứng với 20% số điểm thỏa mãn: n ≤ 50;
20% số test khác ứng với 20% số điểm thỏa mãn: n ≤ 100;
20% số test khác ứng với 20% số điểm thỏa mãn: n ≤ 600;
20% số test còn lại ứng với 20% số điểm: Không có thêm ràng buộc nào.
THCS Quảng Trị 2019-2020
Bài 1. Kiểm tra số nguyên tố
Số nguyên tố là số tự nhiên chỉ có hai ước là 1 và chính nó.
Yêu cầu: Kiểm tra xem số nguyên n có phải là số nguyên tố hay không.
Dữ liệu vào: Đọc từ tệp văn bản CAU1.INP có cấu trúc như sau: dòng đầu ghi T là số lượng các số cần kiểm tra (1 ≤ T ≤ 100), trong T dòng tiếp theo, mỗi dòng ghi một số nguyên n.
Kết quả: Ghi ra tệp văn bản CAU1.OUT gồm T dòng, mỗi dòng ghi kết quả tương ứng của từng số được kiểm tra; nếu n là số nguyên tố thì ghi 1, ngược lại ghi 0.
Ví dụ:


| CAU1.INP | CAU1.OUT |
| --- | --- |
| 2 4 2 | 0 1 |

Ràng buộc:
Có 50% số test 1 ≤ n ≤ 30000;
Có 30% số test 30000 < n ≤ 107;
Có 20% số test |n| ≤ 109.

Bài 2. Tìm mật khẩu
Mật khẩu để mở khóa phần mềm là một dãy gồm 6 kí tự số trong hệ thập phân. Nhà sản xuất đã mã hóa mật khẩu đó thành một xâu kí tự S gồm các kí tự trong bảng mã ASCII. Để xác định mật khẩu này, ta tính tổng các chữ số trong xâu S, nếu tổng này chưa đủ 6 chữ số thì thêm các số 0 vào phía bên trái tổng đó sao cho đủ 6 kí tự.
Yêu cầu: Cho xâu chứa mật khẩu S, hãy xác định mật khẩu tìm được từ trong xâu S.
Dữ liệu vào: Đọc từ tệp văn bản CAU2.INP ghi xâu kí tự S. Kết quả: Ghi ra tệp văn bản CAU2.OUT mật khẩu tìm được. Ví dụ:

| CAU2.INP | CAU2.OUT |
| --- | --- |
| Tin 2019-2020 | 000016 |

Ràng buộc:
Có 80% số test xâu S có không quá 255 kí tự;
Có 20% số test xâu có nhiều hơn 255 và không quá 105 kí tự.
Bài 3. Trò chơi
Khu du lịch có n trò chơi khác nhau được đánh chỉ số từ 1 đến n. Tại mỗi lượt chơi, người chơi được quyền chọn tham gia một hoặc nhiều trò chơi liên tiếp nhau, mỗi trò chơi chỉ được chơi đúng một lần.
Đối với Nam, trò chơi thứ i có độ yêu thích ai (1 ≤ i ≤ n; |ai| ≤ 109). Nam luôn chọn cách chơi sao cho tổng độ yêu thích thu được sau khi kết thúc lượt chơi lớn nhất.
Yêu cầu: Tính tổng độ yêu thích lớn nhất có thể thu được biết rằng Nam chỉ tham gia một lượt chơi và chơi ít nhất một trò chơi.
Dữ liệu vào: Đọc từ tệp văn bản CAU3.INP có cấu trúc như sau:
Dòng đầu tiên ghi số nguyên dương n.
Dòng thứ hai ghi lần lượt a1, a2, …, an, cách nhau một dấu cách.
Kết quả: Ghi ra tệp văn bản CAU3.OUT một số duy nhất là tổng độ yêu thích lớn nhất mà Nam có thể thu được sau khi kết thúc lượt chơi.
Ví dụ:


| CAU3.INP | CAU3.OUT | Giải thích |
| --- | --- | --- |
| 5 2 -5 4 -2 3 | 5 | Nam chọn chơi các trò 3,4,5 có tổng độ yêu thích là 4 + (−2) + 3 = 5 |

Ràng buộc:
Có 50% số test n ≤ 500;
Có 30% số test 500 < n ≤ 5000;

Có 20% số test 5000 < n ≤ 2 × 105.
Bài 4. Tập trận
Trong đợt tập trận trên biển, tàu ngầm GMII thực hiện bắn n quả đạn pháo, quả thứ i (1 ≤ i ≤ n) bắn trúng mục tiêu ở vị trí có tọa độ (xi, yi). Một mục tiêu có thể bị nhiều quả đạn pháo bắn trúng.
Yêu cầu: Xác định số lượng cặp quả đạn pháo cùng bắn trúng một mục tiêu.
Dữ liệu vào: Đọc từ tệp văn bản CAU4.INP có cấu trúc như sau: Dòng đầu ghi số nguyên dương n;
Dòng thứ i trong n dòng tiếp theo ghi hai số nguyên xi, yi cách nhau một dấu cách.
Kết quả: Ghi ra tệp văn bản CAU4.OUT một số duy nhất là số lượng cặp đạn pháo cùng bắn trúng một mục tiêu.
Ví dụ:


| CAU4.INP | CAU4.OUT | Giải thích |
| --- | --- | --- |
| 6 1 1 2 2 1 1 1 1 2 1 2 2 | 4 | Các cặp quả đạn pháo cùng bắn trúng một mục tiêu là: (1,3); (1,4); (3,4) và (2,6). |

Ràng buộc:
Có 50% số test 1 ≤ n ≤ 103; 0 ≤ |xi|, |yi| ≤ 103;
Có 30% số test 103 < n ≤ 105; 0 ≤ |xi|, |yi| ≤ 103;
Có 20% số test 103 < n < 2 × 105; 0 ≤ |xi|, |yi| ≤ 109.
THCS Quảng Trị 2020-2021
Bài 1. Số may mắn
Số may mắn của số nguyên dương M là số có một chữ số được tạo ra từ số M như sau: nếu M chỉ có một chữ số thì số may mắn của nó là chính nó, nếu M có nhiều hơn một chữ số thì nó được thay bằng tổng các chữ số của nó cho đến khi còn đúng một chữ số, số đó chính là số may mắn.
Yêu cầu: Cho T số nguyên dương, hãy tìm các số may mắn tương ứng.
Dữ liệu vào: Đọc từ file văn bản CAU1.INP có cấu trúc như sau:
Dòng đầu ghi số nguyên dương T (T ≤ 10);
T dòng tiếp theo, mỗi dòng ghi một số nguyên dương M.
Kết quả: Ghi ra file văn bản CAU1.OUT gồm T dòng, mỗi dòng ghi một số may mắn tương ứng với số M đã cho.

Ví dụ:


| CAU1.INP | CAU1.OUT |
| --- | --- |
| 2 5 12345 | 5 6 |

Ràng buộc:
Có 80% số test M ≤ 109;
Có 20% số test 109 ≤ M ≤ 1030.
Bài 2. Chọn cây
Trong khuôn viên trường có N cây xanh được đánh số từ 1 đến N, cây thứ i (1 ≤ i ≤ N) có chiều cao Hi và giá trị thẩm mĩ là Ci (1 ≤ Hi , Ci ≤ 109). Nhà trường giao cho mỗi lớp chọn ra 3 cây bất kì để chăm sóc. Lớp 9A muốn chọn 3 cây theo thứ tự i, j, k sao cho có tổng giá trị thẩm mĩ lớn nhất đồng thời thỏa mãn điều kiện 1
≤ i < j < k ≤ N và Hi < Hj < Hk.
Yêu cầu: Xác định tổng giá trị thẩm mĩ lớn nhất mà lớp 9A có thể chọn được.
Dữ liệu vào: Đọc từ file văn bản CAU2.INP có cấu trúc như sau:
Dòng đầu ghi số N;
Dòng thứ 2 ghi N số H1, H2, . . ., HN,
Dòng thứ 3 ghi N số C1, C2,..,CN.
Các số cách nhau một dấu cách.
Kết quả: Ghi ra tệp văn bản CAU2.OUT tổng giá trị thẩm mĩ lớn nhất mà lớp 9A có thể chọn.
Ví dụ:


| CAU2.INP | CAU2.OUT |
| --- | --- |
| 5 2 4 5 4 10 4 3 2 1 5 | 12 |

Ràng buộc:
Có 70% số test N ≤ 500;
Có 30% số test 500 ≤ N ≤ 3000.
Bài 3. Khóa điện tử
Một khách sạn sử dụng thẻ điện tử trong việc quản lý phòng. Nhân viên An được cấp một thẻ riêng để quản lý một số phòng của khách sạn, mã số thẻ của An là một xâu kí tự T gồm các chữ cái và kí tự ‘?’.
Khách sạn có N phòng được đánh số từ 1 đến N. Tại cửa phòng thứ i (1 ≤ i ≤
có một đầu đọc thẻ, mã khóa Ki của phòng là một xâu kí tự S chỉ gồm các chữ cái

được lưu trong đầu đọc thẻ. Khi nhân viên đưa thẻ vào đầu đọc, nếu xâu mã số thẻ phù hợp với xâu mã khóa Ki thì cửa phòng i sẽ được mở. Xâu mã số thẻ T phù hợp với mã khóa S khi thỏa mãn đồng thời các điều kiện:
Số kí tự của T bằng số kí tự của S;
Với mỗi vị trí j tương ứng của hai xâu thì T[j] = S[j] hoặc T[j] là kí tự ‘?’.
Yêu cầu: Cho biết mã số thẻ của An và các mã khóa của N phòng. Hãy kiểm tra xem thẻ của An có thể dùng để mở được những phòng nào trong khách sạn.
Dữ liệu vào: Đọc từ file văn bản CAU3.INP có cấu trúc như sau:
Dòng đầu ghi xâu mã số thẻ T.
Dòng thứ hai ghi số nguyên dương N (N ≤ 500),
N dòng tiếp mỗi dòng ghi một xâu mã khóa Ki. Độ dài mỗi xâu không vượt quá 255 kí tự.
Kết quả: Ghi ra file văn bản CAU3.OUT gồm N dòng tương ứng với khả năng mở khóa của thẻ của An đối với từng phòng; nếu mở được ghi 1, ngược lại ghi 0.
Ví dụ:


| CAU3.INP | CAU3.OUT |
| --- | --- |
| a?aba 2 aaaba abacb | 1 0 |

Ràng buộc:
Có 30% số test xâu T không chứa kí tự ‘?’;
Có 30% số test xâu T có chứa một kí tự ‘?’;
Có 40% số test xâu T chứa nhiều hơn một kí tự ‘?’.
Bài 4. Song nguyên tố
Số song nguyên tố là số có số lượng các ước của nó là một số nguyên tố.
Yêu cầu: Hãy đếm số lượng các số song nguyên tố trong đoạn [a, b].
Dữ liệu vào: Đọc từ tệp văn bản CAU4.INP có cấu trúc như sau:
Dòng đầu ghi số nguyên dương T là số lượng các đoạn cần đếm,
T dòng tiếp theo mỗi dòng ghi hai số nguyên dương a, b (a ≤ b) cách nhau một dấu cách.
Kết quả: Ghi ra tệp văn bản CAU4.OUT gồm T dòng, mỗi dòng ghi kết quả của một đoạn.
Ví dụ:


| CAU3.INP | CAU3.OUT |
| --- | --- |



| 2 2 5 1 100 | 4 32 |
| --- | --- |

Ràng buộc:
Có 30% số điểm 1 ≤ a,b ≤ 200, T ≤ 100;
Có 30% số test 1 ≤ a,b ≤ 2000, T ≤ 1000;
Có 40% số test 1 ≤ a,b ≤ 106, T ≤ 1000;
Có 40% số test 1 ≤ a,b ≤ 106, T ≤ 105.
THCS Quảng Trị 2021-2022
Câu 1: Số đối lập
Ta gọi số ngược của một số là số tạo ra bằng cách viết các chữ số của số đã cho theo chiều từ phải qua trái (ví dụ: số 123 có số ngược là 321).
Một số nguyên X được gọi là số đối lập nếu X cùng với số ngược của nó là những số nguyên tố cùng nhau (tức có ước số chung lớn nhất bằng 1). Ví dụ: số 123 là một số đối lập vì có ước số chung lớn nhất của 123 và 321 bằng 1. Nhiệm vụ của bạn là lập trình để xác định một số nguyên dương đã cho có phải số đối lập hay không?
Dữ liệu vào: tệp văn bản “CAU1.INP”
Dòng 1: Số nguyên dương N (N≤103)
Trong N dòng tiếp theo, mỗi dòng chứa một số nguyên dương ai (ai ≤ 2.109).
Kết quả: ghi vào tệp “CAU1.OUT”
Chứa N dòng, dòng thứ i ghi số 1 nếu số ai tương ứng là số đối lập, ngược lại ghi 0.
Ví dụ:


| CAU1.INP | CAU1.OUT |
| --- | --- |
| 3 123 201 2021 | 1 0 1 |

Ràng buộc:
có 50% số test cho N≤102 và ai≤2.106
có 20% số test cho N≤103 và ai≤2.106
có 30% số test cho N≤103 và ai≤2.109
Câu 2: Giải mật thư
Trong một trò chơi Teambuilding, nhóm của bạn nhận được một bức mật thư, đó là một bảng số có kích thước MxN, trên mỗi ô của bảng số chứa một số nguyên. Cùng với bức mật thư đó bạn cũng nhận được một nét vẽ hình xoắn ốc theo chiều

kim đồng hồ. Bằng phán đoán của mình, bạn cùng nhóm của mình biết rằng để đọc được mật thư đó thì phải sắp xếp lại các ô số trong đó theo thứ tự tăng dần và theo chiều hình xoắn ốc như trong hình vẽ. Nhiệm vụ của bạn là lập trình thực hiện giải bức mật thư để giúp cả nhóm giành chiến thắng.
Dữ liệu vào: tệp văn bản "CAU2.INP"
Dòng 1: Chứa hai số nguyên dương M và N (M, N≤1000).
Trong M dòng tiếp theo, mỗi dòng chứa N số nguyên dương không lớn hơn 1000.
Kết quả: ghi vào tệp văn bản “CAU2.OUT” với cấu trúc như sau:
Gồm M dòng, trên mỗi dòng chứa N số nguyên thể hiện bảng số kết quả giải bức mật thư (các số liền nhau trên cùng dòng được đặt cách nhau một dấu cách).
Ví dụ:


| CAU2.INP | CAU2.OUT | Ghi chú |
| --- | --- | --- |
| 4 5 2 5 1 7 9 1 12 2 5 6 0 3 3 1 8 4 11 4 2 3 | 0 1 1 1 2 5 6 7 8 2 5 12 11 9 2 4 4 3 3 3 |  |

Ràng buộc:
có 30% số test cho M, N≤10
có 40% số test cho M, N≤100
có 30% số test cho M, N≤1000
Bài 3. Số may mắn
Tại một diễn đàn Tin học, để tạo không khí vui vẽ người ta tổ chức cho những người tham gia trò chơi bốc thăm để có cơ hội nhận được những phần quà từ Ban tổ chức, cách thức như sau: Đầu tiên mỗi người tham gia được bốc thăm một mảnh giấy trong đó ghi một số nguyên dương N (N≤10100). Sau đó Ban tổ chức sẽ bốc thăm ngẫu nhiên một con số M (1≤M≤9). Mỗi người chơi sẽ cộng các chữ số của số N để được số N1, tiếp tục cộng các chữ số của N1 để được số N2…quá trình cho đến khi nhận được một số có một chữ số. Nếu kết quả bằng M thì người chơi may mắn nhận được phần quà. Em hãy lập trình để giúp những người chơi xác định ai là người may mắn trúng thưởng.
Dữ liệu vào: tệp văn bản “CAU3.INP”, trong đó:
Dòng đầu tiên chứa hai số K và M cách nhau một dấu cách, trong đó K là số người bốc thăm (K≤1000).
Trong số K dòng tiếp theo, dòng thứ i ghi một số N là con số mà người chơi thứ i bốc được.

Kết quả: ghi vào tệp văn bản “CAU3.OUT”, như sau: gồm K dòng trong đó dòng thứ i ghi số 1 tương ứng với người chơi bốc được số may mắn, ngược lại ghi 0.
Ví dụ:


| CAU3.INP | CAU3.OUT |
| --- | --- |
| 3 6 12345 6 123456789 | 1 1 0 |

Ràng buộc:
có 50% số test cho K≤102 và N≤106
có 20% số test cho K≤103 và N≤109
có 30% số test cho K≤103 và N≤10100
Câu 4: Tích cực đại
Nam rất yêu thích các con số lớn, vì vậy từ những số nguyên N mà Nam gặp, bạn ấy thường tìm cách sinh ra những số nguyên lớn nhất có thể được bằng cách biểu diễn N thành tổng các số hạng sao cho tích M của các số hạng đó là lớn nhất. Em hãy lập trình để giúp Nam tìm ra số nguyên lớn đó.
Dữ liệu vào: cho bởi tệp văn bản “CAU4.INP” gồm 1 dòng chứa số nguyên dương N (N≤10000).
Kết quả: ghi vào tệp văn bản “CAU4.OUT” gồm 1 dòng chứa số M tìm được.
Ví dụ:


| CAU4.INP | CAU4.OUT | Giải thích |
| --- | --- | --- |
| 5 | 6 | 5=2+3; 2*3=6 |
| 9 | 27 | 9=3+3+3; 3*3*3=27 |
| 13 | 108 | 10=3+3+3+4; 3*3*3*4=108 |

Ràng buộc:
có 40% số test cho N≤50
có 30% số test cho N≤100
có 30% số test cho N≤10000
THCS Quảng Trị 2022-2023 Câu 1: CHỮ SỐ TẬN CÙNG
Chữ số tận cùng của một số là chữ số cuối cùng của số đó. Ví dụ: số 123 có chữ số tận cùng là 3; số 5 có chữ số tận cùng là 5.
Yêu cầu: Cho hai số nguyên dương A, N, hãy tìm chữ số tận cùng của AN.
Dữ liệu vào: Đọc từ tệp TANCUNG.INP chỉ có một dòng duy nhất ghi hai số nguyên dương lần lượt là 𝑨 và 𝑵. Các số viết cách nhau một dấu cách.
Kết quả: Ghi ra tệp TANCUNG.OUT một số nguyên duy nhất là chữ số tận cùng

tìm được.
Ví dụ:


| TANCUNG.INP | TANCUNG.OUT | Giải thích |
| --- | --- | --- |
| 2 10 | 4 | 2 x 2 x 2 x 2 x 2 x 2 x 2 x 2 x 2 x 2 = 1024 |
| 12 3 | 8 | 12 x 12 x 12=1728 |

Ràng buộc:
Có 60% số điểm tương ứng với: 1≤A,N≤9;
Có 20% số điểm tương ứng với: 1≤A, N≤15;
Có 20% số điểm tương ứng với: 1≤A,N≤108.
Câu 2: TRỌNG SỐ CỦA XÂU
Trọng số của một xâu 𝑺 là trung bình cộng các chữ số trong xâu 𝑺 đó. Nếu xâu 𝑺 không có chữ số nào thì có trọng số là 𝟎. Ví dụ: Xâu 𝒂𝒃𝟎𝟏𝟏𝒄𝟐 có trọng số là 𝟏.
Yêu cầu: Cho 𝑵 xâu ký tự, hãy tìm xâu có trọng số lớn nhất. Nếu có nhiều xâu có trọng số bằng nhau thì ghi ra xâu đầu tiên tìm được, nếu không tìm thấy xâu có trọng số lớn nhất thì ghi 𝟎.
Dữ liệu vào: Đọc từ tệp TRONGSO.INP có cấu trúc như sau:
Dòng đầu ghi số nguyên 𝑵 là số lượng xâu (𝟏 ≤ 𝑵 ≤ 100);
𝑵 dòng tiếp theo, mỗi dòng ghi một xâu 𝑺.
Kết quả: Ghi ra tệp TRONGSO.OUT kết quả tìm được.
Ví dụ:


| TRONGSO.INP | TRONGSO.OUT | Giải thích |
| --- | --- | --- |
| 3 aaaaaaa 10a3bb2021 100256 | 100256 | 1+0+0+2+5+6=14/6 = 2.33 lớn nhất |

Ràng buộc:
60% số test tương ứng với xâu 𝑺 có độ dài không quá 255;
40% số test tương ứng với xâu 𝑺 có độ dài không quá 1000.
Câu 3: SỐ ĐẶC BIỆT
Một số nguyên dương 𝑿 được gọi là số đặc biệt nếu thỏa mãn hai điều kiện

sau:

𝑿 là số nguyên tố;
Số lượng chữ số chẵn và số lượng chữ số lẻ trong 𝑿 là khác nhau.

Yêu cầu: Cho một dãy số nguyên gồm 𝑵 phần tử 𝑨𝟏, 𝑨𝟐, … , 𝑨𝑵. Hãy đếm số lượng phần tử là số đặc biệt của dãy 𝑨.

Dữ liệu vào: Đọc từ tệp SODB.INP có cấu trúc như sau:
Dòng thứ nhất ghi số nguyên dương 𝑵;
Dòng thứ hai chứa 𝑵 số nguyên 𝑨𝟏, 𝑨𝟐, … , 𝑨𝑵. Các số viết cách nhau một dấu cách.
Kết quả: Ghi ra tệp SODB.OUT một số nguyên duy nhất là số lượng số đặc biệt đếm được.
Ví dụ:


| SODB.INP | SODB.OUT | Giải thích |
| --- | --- | --- |
| 5 121 311 122 23 241 | 2 | Dãy 𝑨 có hai số đặc biệt là 𝟑𝟏𝟏 và 𝟐𝟒𝟏 |

Ràng buộc:
Có 60% số điểm tương ứng với: 1 ≤ 𝑵 ≤ 300; 1 ≤ 𝑨𝒊 ≤ 50000;
Có 20% số điểm tương ứng với: 1 ≤ 𝑵 ≤ 300; |𝑨𝒊| ≤ 1012;
Có 20% số điểm tương ứng với: 1 ≤ 𝑵 ≤ 2 ∗ 106; |𝑨𝒊| ≤ 2 ∗ 106.
Câu 4: TỔNG BẢNG SỐ
An thích học về bảng số. Bạn ấy tạo ra bảng số 𝑨 có kích thước 𝑴 ∗ 𝑵 theo quy luật như sau:
Bảng có 𝑴 dòng đánh số từ 1 đến 𝑴;
Bảng có 𝑵 cột đánh số từ 1 đến 𝑵;
Tại vị trí dòng 𝒊 và cột 𝒋 trên bảng số sẽ được ghi số (𝒊 − 𝟏) ∗ 𝑵 + 𝒋
nếu (𝒊 + 𝒋) là số chẵn, và ghi số 0 nếu (𝒊 + 𝒋) là số lẻ (𝟏 ≤ 𝒊 ≤ 𝑴, 𝟏 ≤
𝒋 ≤ 𝑵).
Yêu cầu: Cho hai số nguyên dương 𝑴, 𝑵. Hãy tính tổng tất cả các số được ghi trên bảng.
Dữ liệu vào: Đọc từ tệp TONGBANG.INP chỉ có một dòng duy nhất ghi hai số nguyên lần lượt là 𝑴 và 𝑵. Các số viết cách nhau một dấu cách.
Kết quả: Ghi ra tệp TONGBANG.OUT một số nguyên duy nhất là tổng các số được ghi trên bảng số. Vì số này có thể rất lớn nên chỉ in ra đáp án sau khi chia lấy dư cho 𝟏𝟓𝟑𝟐𝟎𝟐𝟑.
Ví dụ:


| TONGBANG.INP | TONGBANG.OUT | Giải thích | Giải thích | Giải thích | Giải thích | Giải thích | Giải thích |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 3 4 | 38 | Bảng số được tạo ra như sau: | Bảng số được tạo ra như sau: | Bảng số được tạo ra như sau: | Bảng số được tạo ra như sau: | Bảng số được tạo ra như sau: | Bảng số được tạo ra như sau: |
| 3 4 | 38 |  | 1 | 0 | 3 | 0 |  |
| 3 4 | 38 |  | 0 | 6 | 0 | 8 |  |
| 3 4 | 38 |  | 9 | 0 | 11 | 0 |  |



|  |  | Tổng:	1 + 3 + 6 + 8 + 9 + 11 = 38 |
| --- | --- | --- |

Ràng buộc:
Có 60% số điểm tương ứng với: 1 ≤ 𝑴, 𝑵 ≤ 500;
Có 20% số điểm tương ứng với: 1 ≤ 𝑴, 𝑵 ≤ 105;
Có 20% số điểm tương ứng với: 1 ≤ 𝑴, 𝑵 ≤ 109.
THCS Thanh Hóa 2022-2023 Bài 1. TAM GIÁC
Cho ba số a, b, c. Hãy kiểm tra xem a, b, c có thể là số đo 3 góc của một tam giác không? Nếu có thể là số đo 3 góc của một tam giác thì đó là tam giác nhọn hay tam giác vuông hay tam giác tù?
Dữ liệu vào: Cho trong tệp TAMGIAC.INP có cấu trúc như sau:
Dòng đầu tiên chứa một số nguyên dưởng T <100 là số bộ test.
T dòng sau mỗi dòng gồm 3 số a, b, c.
Kết quả: Ghi ra tệp TAMGIAC.OUT gồm T dòng ứng với T bộ test:
Nếu không thể là số đo 3 góc của một tam giác thì ghi ra số 0.
Nếu có thể là số đo 3 góc của một tam giác thì ghi ra từ NHON hoặc VUONG hoặc TU tùy vào kết quả kiểm tra.
Ví dụ:


| TAMGIAC.INP | TAMGIAC.OUT |
| --- | --- |
| 2 47 43 80 47 53 80 | 0 NHON |

Bài 2. TẶNG QUÀ
Nhân dịp Giáng Sinh đang tới gần, Mandy có chuẩn bị N món quà có giá trị lần lượt là a1, a2,..., an. Em muốn tặng quà cho các bạn, mỗi bạn một món quà và các bạn đều được tặng quà có giá trị như nhau. Để bày tỏ sự thân thiết, em sẽ chỉ tặng những món quà có giá trị lớn nhất trong số những món quà mà mình đã chuẩn bị. Vì Mandy có rất nhiều bạn, hãy giúp em tính xem có thể tặng quà cho tối đa bao nhiêu bạn theo những tiêu chí trên.
Dữ liệu vào: Từ tệp TANG QUA.INP cấu trúc như sau:
Dòng 1: Số nguyên dương N (N ≤ 105).
Dòng 2: Chứa N số nguyên dương a1, a2,..., an ( ai ≤ 109).
Kết quả: Ghi ra tệp TANGQUA.OUT một số nguyên là kết quả tìm được.
Ví dụ:


| TANGQUA.INP | TANGQUA.OUT |
| --- | --- |
| 6 7 3 1 2 4 7 | 2 |

Bài 3. THỪA SỐ NGUYÊN TỐ
Cho số nguyên dương N >1. Hãy phân tích N ra thừa số nguyên tố. Tức là tìm các số nguyên tố p1, p2, ..., Pk đôi một phân biệt và các số nguyên dương a1, a2,..., ak sao cho:
N=p al x p a2 x ... x p ak
Dữ liệu vào: Từ tệp văn bản THUASONT.INP có cấu trúc như sau:
Gồm một dòng duy nhất chứa số nguyên dương N, 1 < N < 1012.
Kết quả: Ghi ra tệp văn bản THUASONT.OUT có cấu trúc như sau:
Dòng đầu ghi số nguyên dương k.
k dòng sau, dòng thứ i ghi hai số pi và ai cách nhau một dấu cách, các số pi được sắp xếp tăng dần.
Ví dụ:


| THUASONT.INP | THUASONT.OUT |
| --- | --- |
| 10 | 2 2 1 5 1 |
| 12 | 2 2 2 3 1 |

Giải thích:
10 = 21 x 51
12 = 22 x 31
Bài 4. TỔNG KHÔNG
Cho số nguyên dương n và dãy số nguyên a1, a2,...,an. Một đoạn con của dãy là một dãy các phần tử liên tiếp aL, ..., aR trong đó 1 ≤ L ≤ R ≤ n. Hãy tính xem trong dãy đã cho có bao nhiêu đoạn con có tổng các phần tử bằng 0.
Dữ liệu vào: Từ tệp văn bản TONG.INP có cấu trúc như sau:
Dòng đầu chứa số nguyên dương n, 1 ≤ n < 105.
Dòng thứ hai chứa n số nguyên a1, a2, ..., an
Kết quả: Ghi ra tệp văn bản TONG.OUT duy nhất một số, là số đoạn con thỏa mãn đề bài.
Ví dụ:


| TONG.INP | TONG.OUT |
| --- | --- |



| 4 3 4 -7 3 | 2 |
| --- | --- |

THCS Thanh Hóa 2023-2024 Bài 1. CHUẨN HOÁ XÂU
Lam đặt tên các biến trong mã nguồn chương trình của mình theo chuẩn PropCase. Chuẩn PropCase quy ước như sau:
Tên biến gồm các chữ cái Latinh ′𝐴′. . ′𝑍′, ′𝑎′. . ′𝑧′ và chữ số ′0′. . ′9′;
Chữ cái đầu tiên của tên biến không bắt đầu bằng chữ số ′0′. . ′9′;
Chữ cái đầu tiên của mỗi từ tiếp theo trong tên biến được viết in hoa;
Ví dụ: DiemTbHk1, lop9A10, ...
Lam muốn tải mã nguồn của mình lên Github với các biến được đặt tên theo chuẩn join_case có quy ước:
Tên biến gồm các chữ cái Latinh ′𝑎′. . ′𝑧′, chữ số ′0′. . ′9′ và dấu gạch nối ′_′;
Không bắt đầu bằng chữ số ′0′. . ′9′ hoặc dấu gạch nối ′_′;
Hai từ trong tên biến được tách nhau bởi dấu ′_′;
Ví dụ: diem_tb_hk1, lop9_a10, ...
Yêu cầu: Hãy giúp Lam đổi tên biến từ chuẩn PropCase sang chuẩn join_case.
Dữ liệu: Vào từ tệp CAU1.INP gồm một xâu độ dài 𝑛 (1 ≤ 𝑛 ≤ 1000) là một tên biến đặt theo chuẩn PropCase.
Kết quả: Ghi ra tệp CAU1.OUT một xâu là tên biến đặt lại theo chuẩn join_case.
Ví dụ:


| CAU1.INP | CAU1.OUT |  | CAU1.INP | CAU1.OUT |
| --- | --- | --- | --- | --- |
| DiemTbHk1 | diem_tb_hk1 |  | lop9A10 | lop9_a10 |

Bài 2. GÀ VÀ CHÓ
Đếm số cách mua một con gà và một con chó sao cho tổng số tiền phải trả để mua cả hai con không vượt quá 𝑛 (3 ≤ 𝑛 ≤ 2 × 109). Biết số tiền mua gà luôn ít hơn số tiền mua chó. Số tiền mua gà và mua chó là các số nguyên dương.
Dữ liệu: Vào từ tệp CAU2.INP gồm một dòng ghi số nguyên dương 𝑛.
Kết quả: Ghi ra tệp CAU2.OUT gồm một dòng ghi một số nguyên là đáp số của bài toán.
Ví dụ:


| CAU2.INP | CAU2.OUT | Giải thích |
| --- | --- | --- |
| 5 | 4 | Có 4 cách mua cặp (gà, chó) phải trả tổng số tiền không quá 5 là: (1,2); (1,3); (1,4); (2,3). |


Ràng buộc:
Có 70% số test ứng với 70% số điểm của bài có 𝑛 ≤ 103;
Có 20% số test ứng với 20% số điểm của bài có 𝑛 ≤ 106;
Có 10% số test ứng với 10% số điểm của bài có 𝑛 ≤ 2 × 109.
Bài 3. SỐ ĐẶC BIỆT
Một số tự nhiên được gọi là số đối xứng nếu viết các chữ số của nó theo chiều ngược lại thì vẫn thu được chính nó. Ví dụ, các số 88, 858 là những số đối xứng.
Một số được coi là số đặc biệt nếu nó là số đối xứng và có từ 3 ước số nguyên tố khác nhau trở lên. Ví dụ: 858 là số đặc biệt vì nó là số đối xứng và có 4 ước nguyên tố khác nhau là 2, 3, 11, 13; còn số 88 không là số đặc biệt vì nó đối xứng nhưng chỉ có 2 ước nguyên tố khác nhau là 2, 11.
Yêu cầu: Cho 2 số nguyên dương 𝑎, 𝑏. Tính tổng các số đặc biệt trong đoạn từ 𝑎 đến 𝑏.
Dữ liệu: Vào từ tệp CAU3.INP chứa hai số nguyên dương (1≤ 𝑎 < 𝑏 ≤ 107).
Kết quả: Ghi ra tệp CAU3.OUT một số duy nhất là tổng tìm được.
Ví dụ:


| CAU3.INP | CAU3.OUT |
| --- | --- |
| 88 858 | 11605 |

Ràng buộc:
Có 60% số test ứng với 60% số điểm của bài có 1 ≤ 𝑎 < 𝑏 ≤ 103;
Có 20% số test ứng với 20% số điểm của bài có 103 < 𝑎 < 𝑏 ≤ 106;
Có 20% số test ứng với 20% số điểm của bài có 106 < 𝑎 < 𝑏 ≤ 107.
Bài 4. ĐƯỜNG THẲNG
Trên cùng một mặt phẳng toạ độ cho 𝑛 đường thẳng phân biệt đánh số từ 1 tới 𝑛. Đường thẳng 𝑖 có dạng 𝑦 = 𝑎𝑖𝑥 + 𝑏𝑖 (1 ≤ 𝑖 ≤ 𝑛).
Yêu cầu: Đếm số cặp đường thẳng song song trong 𝑛 đường thẳng trên.
Dữ liệu: Vào từ tệp CAU4.INP gồm:
Dòng đầu tiên là số nguyên 𝑛 (2 ≤ 𝑛 ≤ 3 × 106);
𝑛 dòng sau, mỗi dòng ghi 2 số nguyên 𝑎𝑖, 𝑏𝑖 biểu diễn đường thẳng thứ 𝑖
(|𝑎𝑖|, |𝑏𝑖| ≤ 109; 1 ≤ 𝑖 ≤ 𝑛).
Kết quả: Ghi ra tệp CAU4.OUT một số nguyên là đáp số của bài.
Ví dụ:


| CAU4.INP | CAU4.OUT |  | CAU4.INP | CAU4.OUT |
| --- | --- | --- | --- | --- |
| 3 1 2 1 -2 | 1 |  | 3 1 2 1 -2 | 3 |



| 0 2 |  |  | 1 -4 |  |
| --- | --- | --- | --- | --- |


Ràng buộc:
Có 50% số test ứng với 50% số điểm của bài có 2 ≤ 𝑛 ≤ 103; |𝑎𝑖|, |𝑏𝑖| ≤ 105;
Có 25% số test ứng với 25% số điểm của bài có 103 < 𝑛 ≤ 105; |𝑎𝑖|, |𝑏𝑖| ≤ 105;
Có	25%	số	test	ứng	với	25%	số	điểm	của	bài	có	105 < 𝑛 ≤ 3 × 106; |𝑎𝑖|, |𝑏𝑖| ≤ 109.
THCS Tp. Hồ Chí Minh 2022-2023
Bài 1: Trung Bình Cộng
Tuấn thường hỗ trợ em An củng cố kiến thức bài học bằng cách cho em làm những bài luyện tập. Để ôn tập những phép tính cơ bản, Tuấn cho An bài toán tính trung bình cộng như sau. Cho một dãy số nguyên A có N phần tử, các phần tử được đánh số từ 1 đến N. An được yêu cầu tạo một dãy số nguyên B có N phần tử và phần tử thứ i của dãy B là trung bình cộng i số đầu tiên của dãy A. Ví dụ với dãy A là: 15, 25, -25, 25, 60 thì dãy B nếu được tạo đúng sẽ là: 15, 20, 5, 10, 20. An cũng thường thử thách anh Tuấn bằng những câu hỏi thú vị. Sau khi giải xong bài toán trung bình cộng của Tuấn, An liền đưa Tuấn đáp án là dãy số B và hỏi lại Tuấn xem anh có thể tạo lại dãy số A ban đầu từ dãy số B không.
Yêu cầu: Hãy viết chương trình giúp Tuấn tìm dãy số A từ dãy số B.
Dữ liệu: Vào từ file văn bản TBC.INP dòng đầu chứa một số nguyên N. Dòng thứ hai chứa N số nguyên Bi (-106 ≤ Bi ≤ 106) lần lượt cho biết giá trị của N phần tử dãy B.
Kết quả: Ghi ra file văn bản TBC.OUT trên một dòng N số nguyên lần lượt là N phần tử của dãy A. Có thể giả sử dữ liệu cho sẽ đảm bảo các giá trị phần tử dãy A là số nguyên.
Ràng buộc:
50% test ứng với 50% số điểm của bài có N ≤ 5
50% test ứng với 50% số điểm của bài có 5< N ≤ 100 000
Ví dụ:


| TBC.INP | TBC.OUT |
| --- | --- |
| 5 15 20 5 10 20 | 15 25 -25 25 60 |

Bài 2: Mật Thư
Khi đang đọc sách về các thuật toán sắp xếp trong một hiệu sách cũ, Tý vô tình phát hiện một mật thư và cả khóa để mở mật thư đó. Mật thư là một chuỗi có N kí tự. M kí tự trong chuỗi đã được mã hóa bằng kí tự ‘#’, các kí tự còn lại là kí tự chữ cái tiếng Anh viết thường. Khóa để mở mật thư là M xâu kí tự có cùng chiều dài K và một số nguyên X. Xâu thứ i cho biết kí tự ‘#’ thứ i trong mật thư có thể được thay thế bằng một trong K kí tự của xâu. Xét danh sách các xâu có thể được tạo sau khi thay M kí tự ‘#’ trong mật thư. Lưu ý những xâu trùng nhau nếu có sau khi thay kí tự ‘#’ cũng được đưa vào danh sách và danh sách này sẽ có KM xâu. Xâu thứ X sau khi sắp xếp các xâu trên tăng dần theo thứ tự từ điển cho ta lời giải của mật thư.
Yêu cầu: Hãy viết một chương trình cho biết lời giải của mật thư.
Dữ liệu: Vào từ file văn bản MATTHU.INP, dòng đầu chứa 4 số nguyên lần lượt là N, M, K, X (1 ≤ N ≤ 500, 1 ≤ M ≤ N, 1 < K ≤ 26, 1 ≤ X ≤ 109). Dòng thứ hai là một xâu có N kí tự cho biết mật thư, xâu này có M kí tự ‘#’ và các chữ cái tiếng Anh viết thường. Dòng thứ i trong M dòng tiếp theo chứa K kí tự cho biết các kí tự có thể thay thế cho kí tự ‘#’ thứ i trong mật thư.
Kết quả: Ghi ra file văn bản MATTHU.OUT một dòng là lời giải của mật thư.
Ràng buộc:
30% test ứng với 30% số điểm của bài có M=1 và 1< K ≤ 3
20% test ứng với 20% số điểm của bài có M=1 và 3 < K ≤ 26
50% test ứng với 50% số điểm của bài có 1 ≤ M ≤ 500 và 1 < K ≤ 26
Ví dụ:

Bài 3: Xổ Số
Hội xuân tại trường năm nay có gian hàng xổ số trúng điểm thưởng. Có N

phiếu, mỗi phiếu có một mặt giống nhau, mặt còn lại ghi một số nguyên không âm ngẫu nhiên. Ban đầu mặt ghi số được đặt úp xuống mặt bàn. Người chơi được chọn K phiếu bất kỳ và nhận được số điểm thưởng là số lớn nhất trong K phiếu trên. Hùng rất hào hứng với trò chơi này và muốn biết tổng điểm thưởng mình được nhận là bao nhiêu nếu Hùng thử hết tất cả các cách chọn.
Gọi S là tổng điểm thưởng được nhận nếu Hùng thử hết tất cả các cách chọn phiếu. Xét ví dụ với N = 4, K = 2 và giá trị của các phiếu lần lượt là 6, 7, 6, 5 thì Hùng có 6 cách chọn và tổng điểm thưởng S là 39, giá trị điểm thưởng của từng cách được cho trong bảng sau:


| Cách | Giá trị của phiếu chọn | Điểm thưởng |
| --- | --- | --- |
| Cách 1: chọn phiếu thứ 1, thứ 2 | 6, 7 | 7 |
| Cách 2: chọn phiếu thứ 1, thứ 3 | 6, 6 | 6 |
| Cách 3: chọn phiếu thứ 1, thứ 4 | 6, 5 | 6 |
| Cách 4: chọn phiếu thứ 2, thứ 3 | 7, 6 | 7 |
| Cách 5: chọn phiếu thứ 2, thứ 4 | 7, 5 | 7 |
| Cách 6: chọn phiếu thứ 3, thứ 4 | 6, 5 | 6 |

Yêu cầu: Hãy viết một chương trình cho biết phần dư khi chia S cho 109+7.
Dữ liệu: Vào từ file văn bản XOSO.INP
Dòng đầu chứa hai số nguyên N và K;
Dòng thứ hai chứa N số nguyên Xi, (0 ≤ Xi ≤ 106) lần lượt cho biết giá trị của N phiếu.
Kết quả: Ghi ra file văn bản XOSO.OUT trên một dòng là phần dư khi chia S cho 109+7.
Ràng buộc:
30% test ứng với 30% số điểm của bài có N ≤ 1000 và 1 ≤ K ≤ 3
20% test ứng với 20% số điểm của bài có N ≤ 25 và 1 ≤ K ≤ 12
50% test ứng với 50% số điểm của bài có N ≤ 100 000 và 1 ≤ K ≤ 50
Ví dụ:


| XOSO.INP |  | XOSO.OUT |
| --- | --- | --- |
| 4 2 6 7 6 5 |  | 39 |

THCS Tuyên Quang 2022-2023 BÀI 1. KHAI CĂN

Trong toán học, khi học về căn bậc hai ta có:
 2 5;
 6 .

Tổng quát:
 x
(Với
x2.y  n
và x lớn nhất có thể).

Yêu cầu: Viết chương trình tìm x và y khi biết giá trị của n.
Dữ liệu vào: Từ bàn phím một số nguyên dương duy nhất n (n  109 ).
Kết quả: Ghi ra màn hình theo một trong ba trường hợp sau:
Giá trị của x và y nếu x 1 và y  1 (giữa hai số cách nhau một khoảng trắng).
Giá trị của x nếu y=1 hoặc giá trị của y nếu x=1.
Ghi số 1 nếu x=1 và y=1.
Ví dụ 1:


| KHAICAN.INP | KHAICAN.OUT |
| --- | --- |
| 20 | 2 5 |

Ví dụ 2:


| KHAICAN.INP | KHAICAN.OUT |
| --- | --- |
| 25 | 5 |

Ví dụ 3:


| KHAICAN.INP | KHAICAN.OUT |
| --- | --- |
| 7 | 7 |

Ràng buộc:
Có 80% số test tương ứng với 80% số điểm của bài thỏa mãn n  103 ;
Có 20% số test tương ứng với 20% số điểm của bài thỏa mãn 103  n  109.
BÀI 2. CẶP SỐ CHẴN
Sau khi học về tính chẵn lẻ của số tự nhiên, thầy giáo đã giao cho các bạn trong lớp về nhà làm bài tập như sau:
Cho một số nguyên dương N. Hãy đếm xem có bao nhiêu cặp số (A, B) thỏa mãn điều kiện sau:
+ 1 ≤ A ≤ B ≤ N;
+ A × B là số chẵn.
Yêu cầu: Viết chương trình đếm số bộ (A,B) giúp cho các bạn.
Dữ liệu vào: Từ bàn phím một số nguyên dương N (N ≤ 109).
Kết quả: Ghi ra màn hình một số nguyên duy nhất là số cặp số thỏa mãn.
Ví dụ:


| CAPSOCHAN.INP | CAPSOCHAN.OUT |
| --- | --- |
| 5 | 9 |


Giải thích:
Các bộ số thỏa mãn: (1,2), (1,4), (2,2), (2,3), (2,4), (2,5), (3,4), (4,4), (4,5)
Ràng buộc:
+ Có 60% số test tương ứng với 60% số điểm của bài thỏa mãn N ≤ 103.
+ Có 40% số test tương ứng với 40% số điểm của bài thỏa mãn N ≤ 109.
BÀI 3. ĐOẠN TĂNG
Cho một dãy số nguyên a gồm N phần tử a1, a2 ,..., aN . Một đoạn con của dãy
số gồm các phần tử liên tiếp nhau trong dãy, độ dài đoạn con là số lượng phần tử trong đoạn con đó.
Yêu cầu: Hãy tìm đoạn con dài nhất trong dãy a thỏa mãn tính chất sau:
+ Đoạn con đó chỉ gồm các phần tử có giá trị chẵn hoặc chỉ gồm các phần tử có giá trị lẻ.
+ Các phần tử có giá trị tăng dần.
Dữ liệu vào: Từ bàn phím gồm:
+ Dòng thứ nhất: Số nguyên N (1≤ N ≤ 106) là số lượng phần tử của dãy a.
+ Dòng thứ hai: N số nguyên a1, a2 ,..., aN ( a  109 với 1  i  N ) . Các số cách nhau một khoảng trắng.
Kết quả: Ghi ra màn hình một số nguyên duy nhất là độ dài của đoạn con tìm được.
Ví dụ:


| DOANTANG.INP | DOANTANG.OUT |
| --- | --- |
| 9 2 1 3 5 5 6 3 7 6 | 3 |

Ràng buộc:
+ Có 80% số test tương ứng với 80% số điểm của bài thỏa mãn N  5000;
+ Có 20% số test tương ứng với 20% số điểm của bài thỏa mãn 5000  N  106.
BÀI 4. CÁI TÚI
Lại nói về câu truyện Cây khế năm ấy, sau khi ăn một quả khế, Đại bàng nói với cậu chủ “Ăn một quả trả một cục vàng, may túi ba gang mang đi mà đựng”. Đại bàng hứa sẽ chở cậu chủ K chuyến đến hòn đảo nhỏ xa xôi, trên hòn đảo có N đồ vật được đánh số từ 1 đến N từ ngoài cửa hang vào trong, đồ vật thứ i có khối lượng ai. Cậu chủ phải lấy lần lượt các đồ vật từ ngoài vào trong. Công việc của cậu chủ là phải may một chiếc túi đựng được tổng khối lượng M càng nhỏ càng tốt sao cho sau K chuyến có thể lấy được hết N đồ vật trên đảo.
Yêu cầu: Hãy tìm giá trị M nhỏ nhất .
Dữ liệu vào: Từ bàn phím gồm hai dòng:

+ Dòng thứ nhất: Hai số nguyên dương N, K , giữa hai số cách nhau một
khoảng trắng (1  N  105; K  N ).
+ Dòng thứ hai: N số nguyên dương a1, a2 ,..., aN (a  109 với 1  i  N ) , các
số cách nhau một khoảng trắng.
Kết quả: Ghi ra màn hình một số nguyên duy nhất là giá trị M nhỏ nhất tìm được
Ví dụ:


| CAITUI.INP | CAITUI.OUT |
| --- | --- |
| 6 3 5 2 3 1 4 2 | 6 |

Ràng buộc:
+ Có 60% số test tương ứng với 60% số điểm của bài thỏa mãn
N  5000; ai  1000;
+ Có 40% số test tương ứng với 40% số điểm của bài không có thêm ràng buộc gì.