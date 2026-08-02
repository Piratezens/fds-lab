#include <iostream>
using namespace std;

int main()
{
    int size, searchItem;

    cout << "Enter number of elements: ";
    cin >> size;

    int numbers[size];

    cout << "Enter sorted elements:\n";
    for (int index = 0; index < size; index++)
        cin >> numbers[index];

    cout << "Enter element to search: ";
    cin >> searchItem;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (numbers[middle] == searchItem)
        {
            cout << "Element found at position " << middle + 1;
            return 0;
        }

        if (searchItem < numbers[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }

    cout << "Element not found.";

    return 0;
}