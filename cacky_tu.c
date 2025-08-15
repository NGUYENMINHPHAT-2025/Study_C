
// 1. Cú pháp cơ bản
// | Cú pháp            | Tên gọi                  | Tác dụng                                                         |
// | ------------------ | ------------------------ | ---------------------------------------------------------------- |
// | #include <stdio.h> | Thư viện chuẩn nhập xuất | Cho phép sử dụng các hàm `printf`, `scanf` để in và nhập dữ liệu |
// | int main()         | Hàm main                 | Điểm bắt đầu thực thi chương trình                               |
// | { ... }            | Khối lệnh                | Bao quanh các câu lệnh thuộc cùng một phạm vi                    |
// | return 0;          | Trả về giá trị           | Kết thúc hàm `main`, 0 nghĩa là chương trình chạy thành công     |
// | ;                  | Dấu chấm phẩy            | Kết thúc một câu lệnh                                            |
// | //                 | Ghi chú dòng             | Chú thích 1 dòng, không ảnh hưởng code                           |
// | /* ... */          | Ghi chú nhiều dòng       | Chú thích nhiều dòng, không ảnh hưởng code                       |


// 2. Kiểu dữ liệu cơ bản
// | Kiểu dữ liệu | Tên gọi        | Tác dụng                                                  |
// | ------------ | -------------- | --------------------------------------------------------- |
// | `int`        | Số nguyên      | Lưu trữ số nguyên (ví dụ: -10, 0, 100)                    |
// | `short`      | Số nguyên ngắn | Lưu trữ số nguyên nhỏ hơn, chiếm ít bộ nhớ hơn `int`      |
// | `long`       | Số nguyên dài  | Lưu trữ số nguyên lớn hơn `int`                           |
// | `float`      | Số thực        | Lưu trữ số thực có dấu thập phân (4 bytes)                |
// | `double`     | Số thực kép    | Lưu trữ số thực có độ chính xác cao hơn `float` (8 bytes) |
// | `char`       | Ký tự          | Lưu trữ 1 ký tự (1 byte)                                  |
// | `void`       | Trống          | Không trả về giá trị từ hàm                               |


// 3. Toán tử cơ bản
// | Toán tử | Tên gọi         | Tác dụng                                |                                         |                                     |
// | ----- | ----------------- | --------------------------------------- | --------------------------------------- | ----------------------------------- |
// | +     | Cộng              | Cộng hai số                             |                                         |                                     |
// | -     | Trừ               | Trừ hai số                              |                                         |                                     |
// | *     | Nhân              | Nhân hai số                             |                                         |                                     |
// | /     | Chia              | Chia hai số                             |                                         |                                     |
// | %     | Chia lấy dư       | Lấy phần dư của phép chia số nguyên     |                                         |                                     |
// | =     | Gán               | Gán giá trị cho biến                    |                                         |                                     |
// | ==    | So sánh bằng      | Kiểm tra bằng nhau, trả về true/false   |                                         |                                     |
// | !=    | So sánh khác      | Kiểm tra khác nhau                      |                                         |                                     |
// | >     | Lớn hơn           | So sánh                                 |                                         |                                     |
// | <     | Nhỏ hơn           | So sánh                                 |                                         |                                     |
// | >=    | Lớn hơn hoặc bằng | So sánh                                 |                                         |                                     |
// | <=    | Nhỏ hơn hoặc bằng | So sánh                                 |                                         |                                     |
// | &&    | AND logic         | Kết hợp 2 điều kiện, cả 2 đúng mới đúng |                                         |                                     |
// | \     |                   | \                                       | OR logic                                | Kết hợp 2 điều kiện, 1 đúng là đúng |
// | !     | NOT logic         | Phủ định điều kiện                      |                                         |                                     |
// | &     | AND bitwise       | Toán tử bitwise, thao tác trên từng bit |                                         |                                     |
// | \     | \                 | OR bitwise                              | Toán tử bitwise, thao tác trên từng bit |                                     |
// | ^     | XOR bitwise       | Toán tử bitwise, khác bit → 1           |                                         |                                     |
// | ~     | NOT bitwise       | Đảo bit                                 |                                         |                                     |
// | <<    | Dịch trái         | Dịch bit sang trái                      |                                         |                                     |
// | >>    | Dịch phải         | Dịch bit sang phải                      |                                         |                                     |

// 4. Nhập xuất dữ liệu
// | Cú pháp            | Tên gọi             | Tác dụng                                         |
// | ------------------ | ------------------- | ------------------------------------------------ |
// | printf("...", ...) | In ra màn hình      | Hiển thị thông tin, %d, %f, %c dùng để định dạng |
// | scanf("...", &...) | Nhập từ bàn phím    | Nhập dữ liệu, `&` lấy địa chỉ biến               |
// | %d                 | Định dạng số nguyên | Sử dụng với `printf` hoặc `scanf`                |
// | %f                 | Định dạng số thực   | Sử dụng với `printf` hoặc `scanf`                |
// | %c                 | Định dạng ký tự     | Sử dụng với `printf` hoặc `scanf`                |
// | %s                 | Định dạng chuỗi     | Sử dụng với `printf` hoặc `scanf`                |
// | \n                 | Xuống dòng          | In xuống dòng mới                                |
// | \t                 | Tab                 | Thêm khoảng trắng tab                            |
// | \\                 | Dấu \\              | In ra ký tự \                                    |
// | \"                 | Dấu "               | In ra ký tự nháy kép                             |

// Biến, hằng số, kiểu dữ liệu
// int a = 10;        // Số nguyên
// float b = 3.14;    // Số thực
// double c = 2.718;  // Số thực chính xác cao
// char d = 'A';      // Ký tự
// const int x = 100; // Hằng số, không thay đổi được
// 📌 Nguyên tắc:
// Biến: giá trị có thể thay đổi.
// Hằng số: giá trị cố định, khai báo với const.
// Tên biến không được bắt đầu bằng số, không chứa dấu cách.

