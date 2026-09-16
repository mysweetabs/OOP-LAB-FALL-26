#include <iostream>
using namespace std;

double calcfee(double lfee, double tfee)
{
    double Tfee = lfee + tfee;
    if (Tfee > 50000)
    {
        cout << "You are eligible for a discount!" << endl;
        cout << "Total Fee: " << Tfee << "\nDiscounted fee: " << Tfee * 0.9 << endl;
    }
    else
        cout << "Total Fee: " << Tfee << endl;
    return Tfee;
}

int main()
{
    double lab_fee;
    double tuition_fee;

    cout << "enter lab fee: " << endl;
    cin >> lab_fee;
    cout << "enter tuition fee: " << endl;
    cin >> tuition_fee;
    calcfee(lab_fee, tuition_fee);
    return 0;
}
