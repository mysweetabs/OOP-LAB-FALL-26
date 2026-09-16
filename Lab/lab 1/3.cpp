#include <iostream>
#include <string>
using namespace std;

int main()
{
    double marks[5] = {0};
    double highest = 0;
    double lowest = 0;
    double sum = 0;
    cout << "Enter marks:" << endl;
    cin >> marks[0];
    lowest = marks[0];
    sum = marks[0];
    for (int i = 1; i < 5; i++)
    {
        cin >> marks[i];
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
        sum += marks[i];
    }
    cout << "\nMarks:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }
    cout << "\nhighest: " << highest << endl;
    cout << "lowest: " << lowest << endl;
    cout << "Average: " << (sum / 5) << endl;

    return 0;
}
