#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    char option{'Q'};
    vector<int> numbers{};

    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the nubers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "Enter your choice: ";
        cin >> option;
        switch (option)
        {
        case 'P':
        case 'p':
            cout << endl;
            if (numbers.size() == 0)
            {
                cout << "[] - the list is empty";
            }
            else
            {
                cout << "[ ";
                for (auto n : numbers)
                {
                    cout << n << " ";
                }
                cout << "]";
            }
            break;
        case 'A':
        case 'a':
        {
            int number{0};
            cout << "Enter an integer to add to the list: ";
            cin >> number;
            numbers.push_back(number);
            cout << number << " added" << endl;
            break;
        }
        case 'M':
        case 'm':
            if (numbers.size() == 0)
            {
                cout << "Unable to calculate mean - no data";
            }
            else
            {
                int sum{0};
                for (auto n : numbers)
                {
                    sum += n;
                }
                cout << "Mean: " << (static_cast<double>(sum) / numbers.size()) << endl;
            }
        case 'S':
        case 's':
            if (numbers.size() == 0)
            {
                cout << "Unable to determine the smallest number -list is empty";
            }
            else
            {
                int min{numbers[0]};
                for (auto n : numbers)
                {
                    if (n < min)
                    {
                        min = n;
                    }
                }
                cout << "The smallest number is " << min << endl;
            }
        case 'L':
        case 'l':
         if (numbers.size() == 0)
            {
                cout << "Unable to determine the largest number -list is empty";
            }
            else
            {
                int max{numbers[0]};
                for (auto n : numbers)
                {
                    if (n > max)
                    {
                        max = n;
                    }
                }
                cout << "The largest number is " << max << endl;
            }
        case 'Q':
        case 'q':
            break;
        default:
            cout << "Unknown selection, please try again." << endl;
        }
        cout << endl;
    } while (option != 'Q' && option != 'q');

    return 0;
}
