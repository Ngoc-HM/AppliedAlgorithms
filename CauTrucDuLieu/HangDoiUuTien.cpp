#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Khởi tạo một hàng đợi ưu tiên lưu trữ các số nguyên
    priority_queue<int> pq, pq1, pq2;

    // Thêm các phần tử vào hàng đợi ưu tiên
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Hoán đổi nội dung giữa hai hàng đợi
    pq1.swap(pq2);

    pq.emplace();

    // In ra giá trị của phần tử có độ ưu tiên cao nhất
    cout << "Phần tử có độ ưu tiên cao nhất: " << pq.top() << endl;

    // Lấy phần tử đầu tiên ra khỏi hàng đợi ưu tiên
    pq.pop();

    // In ra giá trị của phần tử có độ ưu tiên cao nhất
    cout << "Phần tử có độ ưu tiên cao nhất sau khi xóa: " << pq.top() << endl;

    // Kiểm tra xem hàng đợi ưu tiên có rỗng hay không
    if (pq.empty()) {
        cout << "Hàng đợi ưu tiên rỗng." << endl;
    } else {
        cout << "Hàng đợi ưu tiên không rỗng." << endl;
    }

    // Lấy kích thước của hàng đợi ưu tiên
    cout << "Kích thước của hàng đợi ưu tiên: " << pq.size() << endl;

    return 0;
}
