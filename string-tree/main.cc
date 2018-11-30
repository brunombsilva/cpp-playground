#include <iostream>
#include <climits>
#include <vector>

using namespace std;
int main()
{
    string input;

    cout << "Input string: ";
    cin >> input;
    size_t len = input.length();

    for (auto i {0}; i < len; i++) {
        int spaces {static_cast<int>(len - i)};
        for(auto j {0}; spaces > 0 && j <= spaces ; j++) {
            cout << " ";
        }
        for(auto j {0}; j <= i ; j++) {
            cout << input.at(j);
        }
        for(auto j {i-1}; j >= 0 ; j--) {
            cout << input.at(j);
        }
        cout << endl;
    }

    return 0;
}
