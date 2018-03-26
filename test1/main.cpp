#include <iostream>
using namespace std;
int main() {
    int n_elements;
    cout << "Enter number of elements:" << endl;
    cin >> n_elements;
    int* dynamic_array = new int[n_elements];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n_elements; i++)
    {
        cin >> *(dynamic_array + i);
    }

    int new_size = n_elements + 1;
    int* new_dynamicArray = new int[new_size];

    cout << "Previous array is located at: " << dynamic_array
         << endl;
    cout << "New array is located at: "
         << new_dynamicArray << endl;

    for (int i = 0; i < new_size - 1 ; i++)
    {
        new_dynamicArray[i] = dynamic_array[i];
    }
    cout << "Enter new element :" << endl;
    cin >> new_dynamicArray[new_size - 1];
    delete[] dynamic_array;
    dynamic_array = new_dynamicArray;
    for (int i = 0; i < new_size; i++)
    {
        cout << dynamic_array[i] << " , ";
    }
    return 0;
}

