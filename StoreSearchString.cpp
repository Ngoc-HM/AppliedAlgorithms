#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, bool> database;
    string key;

    while (cin >> key)
    {
        if (key == "*")
            break;
        database[key] = true;
    }

    string cmd;
    while (cin >> cmd >> key)
    {
        if (cmd == "find")
        {
            if (database.find(key) != database.end())
            {
                cout << "1\n"; // check xem giá trị có trong database không
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (cmd == "insert")
        {
            if (database.find(key) != database.end())
            {
                cout << "0\n";
            }
            else
            {
                database[key] = true; // thêm phần tử vào database
                cout << "1\n";
            }
        }
        if (key == "***")
            break;
    }

    return 0;
}
