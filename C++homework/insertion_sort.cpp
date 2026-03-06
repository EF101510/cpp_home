#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {6, 93, 7, 66, 6, 20, 5};
    cout << "原始數組：";
    printArr(arr);

    insertionSort(arr);

    cout << "排序後數組：";
    printArr(arr);
}