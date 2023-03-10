#include <iostream>
#include <set>

int main()
{
    std::set<int> my_set;

    // Thêm phần tử vào set
    my_set.insert(3);
    my_set.insert(1);
    my_set.insert(4);

    // Kiểm tra set có rỗng hay không
    if (!my_set.empty())
    {
        std::cout << "Set size: " << my_set.size() << std::endl;
    }

    // Tìm kiếm phần tử trong set
    std::set<int>::iterator it = my_set.find(3);
    if (it != my_set.end())
    {
        std::cout << "Found element: " << *it << std::endl;
    }

    // Xóa phần tử khỏi set
    my_set.erase(3);

    // In ra tất cả các phần tử trong set
    std::cout << "Set elements: ";
    for (auto i = my_set.begin(); i != my_set.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    my_set.begin();
    /*
    insert(val): Thêm phần tử val vào set.
    erase(val): Xóa phần tử val khỏi set.
    find(val): Tìm kiếm phần tử val trong set. Nếu tìm thấy, trả về con trỏ đến phần tử đó, ngược lại trả về con trỏ null.
    size(): Trả về số lượng phần tử trong set.
    empty(): Kiểm tra set có rỗng hay không.
    clear(): Xóa tất cả các phần tử trong set.
    begin(): Trả về con trỏ đến phần tử đầu tiên trong set.
    end(): Trả về con trỏ đến phần tử sau phần tử cuối cùng trong set.
    lower_bound(val): Trả về con trỏ đến phần tử đầu tiên trong set có giá trị lớn hơn hoặc bằng val.
    upper_bound(val): Trả về con trỏ đến phần tử đầu tiên trong set có giá trị lớn hơn val.
    */

    return 0;
}
