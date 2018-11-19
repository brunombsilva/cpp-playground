#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    cout << INT16_MAX << endl;
    vector<int> v = {1, 2, 3};

    v.at(2) = 5;

    cout << v.at(2);

    return 0;
}
