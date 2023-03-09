#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> myset;

  myset.insert(3);
  myset.insert(1);
  myset.insert(5);
  myset.erase(5); // Xóa phần tử có giá trị 5 khỏi tập hợp
  auto it = myset.find(5); // Tìm phần tử có giá trị 5 trong tập hợp
  if (it != myset.end()) {
        cout << "Phan tu " << *it << " ton tai trong tap hop" << endl;
    } else {
        cout << "Phan tu khong ton tai trong tap hop" << endl;
    }
    cout << "So luong phan tu trong tap hop: " << myset.size() << endl;

  if (myset.empty()) {
        cout << "Tap hop rong" << endl;
    } else {
        cout << "Tap hop khong rong" << endl;
    }
    myset.clear(); // Xóa tất cả các phần tử trong tập hợp
    cout << "So lan xuat hien cua phan tu 5: " << myset.count(5) << endl;


    // trả về 1 cặp iterator bao gồm đầu tiên và cuối cùng của tất cả các phần tử 
    auto range = myset.equal_range(5);
    cout << "Cac phan tu co gia tri 5 trong tap hop: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    // tìm vị trí của giá trị 5 trong set
    auto itt = std::lower_bound(myset.begin(), myset.end(), 5);
    if (itt != myset.end()) {
        std::cout << "Found value " << *it << " at index " << std::distance(myset.begin(), it) << '\n';
    } else {
        std::cout << "Value not found\n";
    }


    // in ra
  cout << "myset contains:";
  for (auto it = myset.begin(); it != myset.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}
