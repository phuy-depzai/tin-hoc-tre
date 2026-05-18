
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
