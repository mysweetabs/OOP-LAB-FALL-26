#include <iostream>
using namespace std;

class Data
{
    string id;
    string name;
    int *results;

public:
    Data(string i, string n, int arr[], int size)
    {
        id = i;
        name = n;
        results = new int[size];

        for (int i = 0; i < size; i++)
        {
            results[i] = arr[i];
        }
    }

    Data(const Data &obj)
    {
        name = obj.name;
        id = obj.id;
        for (int i = 0; i < 5; i++)
        {
            results[i] = obj.results[i];
        }
    }

    void printDetails(int arr[], int size)
    {
        cout << "\n"
             << id << endl;
        cout << name << endl;
        cout << "results:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void setName(string s) { name = s; }
    void setID(string i) { id = i; }
    void setResults(int tempArr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            results[i] = tempArr[i];
        }
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[6] = {32, 12, 54, 12, 1, 6};
    Data d1("001", "abde", arr, 5);
    Data d2(d1);
    d1.printDetails(arr, 5);
    d2.printDetails(arr, 5);

    // d1.setID("007");
    // d1.setName("nigga");
    // d1.setResults(arr1);
    // d1.printDetails(arr1);
    // d2.printDetails(arr1);

    delete arr;
    arr = nullptr;

    return 0;
}