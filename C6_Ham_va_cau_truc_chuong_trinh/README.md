# CHƯƠNG 6 - HÀM VÀ CẤU TRÚC CHƯƠNG TRÌNH
## 1. Tổ chức CT thành các Hàm
### Xét bài toán VD_1 
- Chương trình có 2 hàm: main() và max3s()
- Có cấu trúc sau: 
    1. Thư viện
    2. Nguyên mẫu hàm (khai báo kết thúc bằng dấu ; ko có thân hàm)
    3. Hàm main
    4. Định nghĩa hàm max3s
### Qui tắc xây dựng 1 hàm
- Các hàm là độc lập, có vai trò ngang nhau, không xây dựng 1 hàm trong thân 1 hàm khác
- Chú ý: câu lệnh return có thể dùng để thoát hàm và trả về giá trị sau câu lệnh, một hàm có thể dùng đc nhiều câu lệnh có từ khóa return.
### Qui tắc hoạt động của 1 hàm
- Tham số là số được truyền vào hàm (chính xác là truyền cho đối số)
- Khi 1 hàm được gọi thì quá trình diễn ra theo các bước sau:
    1. Cấp phát bộ nhớ cho đối số và biến cục bộ
    2. gán giá trị của tham số cho các đối số
    3. thực hiện các lệnh trong hàm đến cuối hoặc gặp từ khóa return 
    4. nếu trở về bằng return thì giá trị biểu thức sau return sẽ gán cho hàm 
### Cấu trúc tổng quát của 1 chương trình
- #include (khai báo các thư viện)
- #define (định nghĩa các hằng)
- đối tượng dữ liệu ngoài (biến toàn cục, mảng, cấu trúc, hợp,..)
- nguyên mẫu hàm
- hàm main
- định nghĩa các hàm con 
## 2. Xây dựng hàm và sử dụng
Mẫu xây dựng và sử dụng hàm trong một file source main.c
    1. Thư viện
    2. Biến toàn cục 
    3. Nguyên mẫu hàm (các đối số)
    4. Hàm main
        - Lời gọi hàm(truyền tham số thực)
    5. Xây dựng hàm con (đối số)
        
## 3. Con trỏ và địa chỉ 
### CON TRỎ LÀ GI?
    - Con trỏ là một biến lưu chữ giá trị địa chỉ của một biến khác 
    - Khi con trỏ đã trỏ đến biến nào thì có thể thay đổi giá trị của biến đó và sử dụng giá trị đó 
### ĐỊA CHỈ LÀ GÌ
    - Địa chỉ là số thứ tự của byte đầu tiên trong dãy các byte nhớ của biến đó (VD float a có 4 byte nhớ thì số thứ tự của byte đầu tiên là địa chỉ của nó)
    - 2 biến cùng kiểu dự liệu được khai báo liên tiếp nhau sẽ có địa chỉ cách nhau 2 byte . 