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

    for (int current = 1; current < size; current++)
    {
        int currentValue = numbers[current];
        int previous = current - 1;

        while (previous >= 0 && numbers[previous] > currentValue)
        {
            numbers[previous + 1] = numbers[previous];
            previous--;
        }

        numbers[previous + 1] = currentValue;
    }

    cout << "Sorted array:\n";
    for (int index = 0; index < size; index++)
        cout << numbers[index] << " ";

    cout << "\nEnter element to search: ";
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