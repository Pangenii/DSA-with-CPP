#include <iostream>
#include <vector>

using namespace std;

void cyclicSort(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    while (i < n)
    {
        int correctIndex = arr[i] - 1;
        if (arr[i] != arr[correctIndex])
        {

            swap(arr[i], arr[correctIndex]);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {3, 2, 1, 4, 6, 7, 5};
    cyclicSort(arr);
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}
