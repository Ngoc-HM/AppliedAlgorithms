#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    return a > b;
}
int main() {
    // Khởi tạo danh sách liên kết
    std::list<int> mylist;

    // Thêm phần tử vào cuối danh sách liên kết
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    // thêm phần tử vào đầu danh sách liên kết 
    mylist.push_front(10);
    // xóa phần tử cuối cùng trong DSLK 
    mylist.pop_back();
    // xóa phần tử đầu tiên trong DSLK
    mylist.pop_front();
    // trả về số phần tử 
    mylist.size();
    // kiểm tra xem danh sách rỗng hay không 
    bool check = mylist.empty();
    // xóa toàn bộ phần tử trong dslk
    //mylist.clear();
    // truy cập đến phần tử đầu tiên
    cout << *mylist.begin();
    // truy cập đến phần tử cuối cùng
    cout << *mylist.end();
                        //*(--mylist.end())
    // chèn phần tử vào 1 vị trí nhất định
    auto it = mylist.begin();
    it++;
    mylist.insert(it, 100); // chèn 100 vào vị trí thứ 2 
    // xóa phần tử ở vị trí it
    mylist.erase(it);

    // xóa phần tử từ first đến last
    auto first = ++mylist.begin();
    auto last = --mylist.end();
    mylist.erase(first, last);

    // đảo nược thứ tự phần tử 
    mylist.reverse();

    // sắp xếp các phần tử theo thứ tự tăng dần 
    mylist.sort();

    // sắp xếp các phần tử theo thứ tự giảm dần
    mylist.sort(compare);

    // In ra danh sách liên kết
    printf("\n");
    for (auto it = mylist.begin(); it != mylist.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
