#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Khai báo một đối tượng stack
    stack<int> myStack;

    // Thêm các phần tử vào stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Hiển thị kích thước của stack
    cout << "Kich thuoc cua stack: " << myStack.size() << endl;

    // Lấy phần tử ở đầu stack
    cout << "Phan tu o dau stack: " << myStack.top() << endl;

    // Xóa phần tử ở đầu stack
    myStack.pop();

    // Hiển thị kích thước của stack sau khi xóa phần tử đầu tiên
    cout << "Kich thuoc cua stack sau khi xoa phan tu dau tien: " << myStack.size() << endl;

    // Kiểm tra xem stack có rỗng hay không
    if (myStack.empty())
        cout << "Stack rong" << endl;
    else
        cout << "Stack khong rong" << endl;

    return 0;
}
