#include <iostream>
using namespace std;

int main()
{
    int size, searchItem;

    cout << "Enter number of elements: ";
    cin >> size;

    int numbers[size];

    cout << "Enter elements:\n";
    for (int index = 0; index < size; index++)
        cin >> numbers[index];

    cout << "Enter element to search: ";
    cin >> searchItem;

    for (int index = 0; index < size; index++)
    {
        if (numbers[index] == searchItem)
        {
            cout << "Element found at position " << index + 1;
            return 0;
        }
    }

    cout << "Element not found.";

    return 0;
}