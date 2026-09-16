#include <iostream>
#include <string>
using namespace std;

class patient
{
    int id;
    string name;
    int *res;
    int n;

public:
    patient(int i, string nm, int s, int arr[])
    {
        id = i;
        name = nm;
        n = s;

        res = new int[n];

        for (int i = 0; i < n; i++)
        {
            res[i] = arr[i];
        }
    }

    void set_res(int i, int v)
    {
        res[i] = v;
    }

    void show()
    {
        cout << "id: " << id << endl;
        cout << "name: " << name << endl;
        cout << "results: ";

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    int arr[] = {1, 2, 3};

    patient p1(001, "abde", 3, arr);

    patient p2 = p1;

    cout << "before update:" << endl;
    p1.show();
    p2.show();

    p1.set_res(1, 50);

    cout << "\nafter updating original:" << endl;
    p1.show();
    p2.show();

    return 0;
}