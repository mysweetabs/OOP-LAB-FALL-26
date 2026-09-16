#include <iostream>
using namespace std;

class Data
{
    int id;
    string name;
    int *results;

public:
    Data(int i, string n, int size, int arr[])
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
        
    }
};

int main()
{
    int arr[5] = {1,2,3,4,5};
    Data d1(001, "abde", 5, arr);
    Data d2 = d1; 

    return 0;
}