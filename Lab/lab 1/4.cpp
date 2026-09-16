#include <iostream>
using namespace std;

int main()
{
    int attendence[5] = {119, 110, 84, 78, 18};
    cout << "Attendence:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << attendence[5 - i - 1] << endl;
    }
    cout << "list is in ascending order!" << endl;

    return 0;
}
