#include <iostream>
using namespace std;

int main()
{
    int size;

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

    return 0;
}