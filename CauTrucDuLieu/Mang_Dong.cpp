#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec; // Khai báo một mảng động chứa các phần tử kiểu int
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    // vec bây giờ chứa {1, 2, 3}

    // xóa phần tử cuối cùng khỏi mảng 
    vec.pop_back();

    // chèn một phần tử vào vị trí bất kì trong mảng 
    vec.insert(vec.begin() + 1, 5); // chèn phần tử 5 vào vị trí thứ 2 trong mảng 

    // xóa một phần tử ở vị trí bất kì trong mảng
    vec.erase(vec.begin() + 1); // xóa phần tử ở vị trí thứ 2 trong mảng

    // xóa tất cả phần tử ra khỏi mảng 
    vec.clear();

    // trả về số lượng phần tử trong mảng 
    int size = vec.size();

    // kiểm tra xem mảng rỗng không
    bool isEmpty = vec.empty();

    // thay đổi kích thước mảng
    vec.resize(5); 
    // nếu kích thước mới lớn hơn kích thước cũ 
    // thì các phần tử mới sẽ được khởi tạo bằng 0
    
    // truy cập phần tử trong mảng bằng cách sử dụng chỉ số 
    int x = vec[0]; // x = 1

    // truy cập phần tử bằng cách sử dụng chỉ số và kiểm trA GIỚI HẠN CHỈ SỐ
    int y = vec.at(0); // y = 1

    // trả về con trỏ đến mảng dữ liệu 
    int* ptr = vec.data();
    // trả về giá trị đầu tiên của mảng 
    int first = vec.front(); // first = 1
    // trả về giá trị cuối cùng của mảng
    int last = vec.back(); // last = 3
    // trả về số lượng phần tử tối đa 
    //int capacity = vec.capacity(); // capacity = 3
    int maxsize = vec.max_size();
    

    return 0;
}