#include <iostream>
#include <deque>

int main() {
    std::deque<int> mydeque;

    // Thêm phần tử vào đầu deque
    mydeque.push_front(10);
    mydeque.push_front(20);

    // Thêm phần tử vào cuối deque
    mydeque.push_back(30);
    mydeque.push_back(40);

    // In ra các phần tử trong deque
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it) {
        std::cout << *it << " ";
    }
    // Output: 20 10 30 40

    // Xóa phần tử đầu tiên của deque
    mydeque.pop_front();

    // Xóa phần tử cuối cùng của deque
    mydeque.pop_back();

    // In ra các phần tử trong deque sau khi xóa
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it) {
        std::cout << *it << " ";
    }
    // Output: 10 30
    // trả về phần tử đầu tiên của deque
    std::cout << mydeque.front() << std::endl;

    // trả về phần tử cuối cùng của deque
    std::cout << mydeque.back() << std::endl;

    // kiểm tra deque có rỗng hay không
    bool check = mydeque.empty();

    // trả về số phần tử trong deque
    int size = mydeque.size();

    // xóa toàn bộ phần tử trong deque
    mydeque.clear();

    // Xóa toàn bộ không tử trong deque
    mydeque.erase(mydeque.begin(), mydeque.end());

    // sao chép hàng đợi này sang hàng đợi khác
    std::deque <int> mydeque1(mydeque) ;

    // lấy giá trị phần tử cuối mà ko xóa
    mydeque.back();

    // check xem hàng đợi có rỗng không

    mydeque.empty(); // true nếu rỗng còn false nếu ko rỗng






    return 0;
}
