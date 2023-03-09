#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    unordered_map<string, bool> database;
    string key;

    while (cin >> key)
    {
        if (key == "*")
            break;
        database[key] = true;
    }
    
    unordered_map<string, int> myMap = {
        {"apple", 3},
        {"banana", 5},
        {"cherry", 1}
    };
    // Thêm một phần tử mới vào unordered_map
    myMap.insert({"orange", 7});
    
    // Xóa một phần tử khỏi unordered_map
    myMap.erase("banana");
    
    // Xóa tất cả các phần tử khỏi unordered_map
    myMap.clear();
    
    // Tìm kiếm phần tử trong unordered_map theo khóa
    if (myMap.find("apple") != myMap.end()) {
        cout << "apple found with value " << myMap["apple"] << endl; // tìm thấy 
    } else {
        cout << "apple not found" << endl; // không tìm thấy
    }
    
    // Truy cập và cập nhật giá trị của phần tử trong unordered_map thông qua khóa
    myMap["cherry"] = 2;
    cout << "cherry has been updated to " << myMap["cherry"] << endl;
    
    // Sử dụng size để lấy số lượng phần tử hiện có trong unordered_map
    cout << "myMap contains " << myMap.size() << " elements" << endl;
    
    // Kiểm tra xem unordered_map có rỗng hay không
    if (myMap.empty()) {
        cout << "myMap is empty" << endl;
    } else {
        cout << "myMap is not empty" << endl;
    }
    
    return 0;
}
