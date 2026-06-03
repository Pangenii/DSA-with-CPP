#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int pass = 0; pass < n; pass++)
    {
        for (int i = 0; i < n - pass - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 2, 4, 1};
    bubbleSort(arr);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}