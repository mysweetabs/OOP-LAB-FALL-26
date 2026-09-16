#include <iostream>
using namespace std;

int main()
{
    double stdmarks[4][34] = {
        {50, 60, 70},
        {60, 70, 80},
        {70, 80, 90},
        {80, 90, 100},
    };
    for (int i = 0; i < 4; i++)
    {
        double sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += stdmarks[i][j];
        }
        cout << "\nTotal marks: " << sum << endl;
        if (sum >= 270)
        {
            cout << "Grade: A" << endl;
        }
        else if (sum >= 240)
        {
            cout << "Grade: B" << endl;
        }
        else if (sum >= 210)
        {
            cout << "Grade: C" << endl;
        }
        else
            cout << "Grade: F" << endl;
    }
    return 0;
}
