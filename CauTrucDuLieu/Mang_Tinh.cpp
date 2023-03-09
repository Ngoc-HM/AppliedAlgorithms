#include <array>
#include <iostream>

int main() {
    // Khai báo một mảng tĩnh lưu trữ 5 số nguyên
    std::array<int, 5> arr = {1, 2, 3, 4, 5}, arr1,arr2;

    // In ra các phần tử trong mảng
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Gán giá trị mới cho phần tử thứ 3
    arr[2] = 10;
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    // truy cập giá trị của mảng theo vị trí
    int x = arr.at(2); // x = 3
    // truy cập giá trị đầu tiên của mảng
    int y = arr.front(); // y = 1
    // truy cập giá trị cuối cùng của mảng
    int z = arr.back(); // z = 5
    
    // kiểm tra xem mảng có rỗng hay không
    bool isEmpty = arr.empty();

    // trả về số lượng phần tử trong mảng
    int size = arr.size();

    // đổi chỗ 2 mảng 
    arr1.swap(arr2);
    // trả về con trỏ đến phần tử đầu tiên của mảng 
    int* ptr = arr.beign();

    // trả về con trỏ đến vị trí sau phần tử cuối cùng của mảng
    int* ptr = arr.end();
    // trả về con trỏ đến phần tử cuối cùng của mảng 
    int* ptr = arr.rbeign();
    // trả về con trỏ đến vị trí trước phần tử đầu tiên của mảng 
    int* ptr = arr.rend();
    // trả về con trỏ tới dữ liệu của mảng 
    int* ptr = arr.data();
    




    return 0;
}
