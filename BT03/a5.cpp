#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    bool swapped = true;

    int array[30];
    for (int i = 0; i < 30; i++)
    {
        array[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < 30; i++)
    {
        cout << array[i] << " ";
    }

    for (int i = 0; i < 30 && swapped; i++)
    {
        swapped = false;
        for (int j = i + 1; j < 30; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
                swapped = true;
            }
        }

    }

    cout << endl;
    cout << "Sap xep tang dan:" << endl;

    for (int i = 0; i < 30; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
