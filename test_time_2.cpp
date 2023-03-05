#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // thời gian hiện tại tính theo hệ thống
   time_t now = time(0);

   cout << "Number of sec since 1/1/1970:" << now << endl;

   tm *ltm = localtime(&now);

   // in ra các thành phần của cấu trúc tm struct
   cout << "Year: " << 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
}