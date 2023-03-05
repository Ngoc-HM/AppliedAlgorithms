#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // thời gian hiện tại tính theo hệ thống
   time_t now = time(0);
   
   // convert sang string
   char* dt = ctime(&now);

   cout << "The current local date and time is: " << dt << endl;

   // convert sang UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The current UTC date and time is:"<< dt << endl;
}