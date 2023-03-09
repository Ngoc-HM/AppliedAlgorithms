#include <iostream>
#include <map>
#include <string>

int main()
{
    // Tạo một ánh xạ với key là string và value là int
    std::map<std::string, int> my_map;

    // Thêm phần tử vào ánh xạ
    my_map["apple"] = 3;
    my_map["banana"] = 2;
    my_map["orange"] = 5;

    // Truy cập giá trị tương ứng với key
    std::cout << "The value of apple is " << my_map["apple"] << std::endl;
    std::cout << "The value of banana is " << my_map["banana"] << std::endl;
    std::cout << "The value of orange is " << my_map["orange"] << std::endl;

    // Duyệt qua các phần tử của ánh xạ
    for (auto const &pair : my_map)
    {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // Kiểm tra xem key có tồn tại trong ánh xạ không
    if (my_map.count("apple"))
    {
        std::cout << "The key apple exists in the map" << std::endl;
    }

    // Xóa phần tử khỏi ánh xạ
    my_map.erase("banana");

    // Kiểm tra kích thước của ánh xạ
    std::cout << "The size of the map is " << my_map.size() << std::endl;
    /*
    find(key): Tìm kiếm phần tử với khóa key. Nếu tìm thấy, trả về con trỏ đến phần tử đó. Nếu không tìm thấy, trả về con trỏ đến phần tử tiếp theo của phần tử có khóa lớn hơn key.

    count(key): Đếm số phần tử trong ánh xạ có khóa bằng key.

    size(): Trả về số phần tử trong ánh xạ.

    empty(): Kiểm tra xem ánh xạ có rỗng hay không.

    erase(key): Xóa phần tử có khóa key khỏi ánh xạ.

    erase(iterator): Xóa phần tử được trỏ đến bởi iterator.

    clear(): Xóa tất cả các phần tử trong ánh xạ.

    begin(): Trả về con trỏ đến phần tử đầu tiên trong ánh xạ.

    end(): Trả về con trỏ đến phần tử tiếp theo của phần tử cuối cùng trong ánh xạ.

    rbegin(): Trả về con trỏ đến phần tử cuối cùng trong ánh xạ.

    rend(): Trả về con trỏ đến phần tử trước phần tử đầu tiên trong ánh xạ.
    */

    return 0;
}
