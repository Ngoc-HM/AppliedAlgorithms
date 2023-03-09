#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Khai báo một đối tượng queue
    queue<int> myQueue;

    // Thêm các phần tử vào queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Lấy phần tử đầu tiên ra khỏi queue
    cout << "Phan tu dau tien trong queue: " << myQueue.front() << endl;

    // Xóa phần tử đầu tiên ra khỏi queue
    myQueue.pop();
    // lấy phần tử cuối cùng trong hàng đợi 
    myQueue.back();

    // Hiển thị kích thước của queue sau khi xóa phần tử đầu tiên
    cout << "Kich thuoc cua queue sau khi xoa phan tu dau tien: " << myQueue.size() << endl;

    // Kiểm tra xem queue có rỗng hay không
    if (myQueue.empty())
        cout << "Queue rong" << endl;
    else
        cout << "Queue khong rong" << endl;

    return 0;
}
