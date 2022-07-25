#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid;

    while (end - start > 1)
    {
        int mid = (start + end) / 2;
        if (v[mid] < target)
            start = mid + 1;
        else
            end = mid;
    }
    if (v[end] == target)
        cout << "Found " << target << " at index " << end << endl;
    else if (v[start] == target)
        cout << "Found " << target << " at index " << start << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}

int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target{};
    cout << "Enter the item to search: ";
    cin >> target;
    binarySearch(v, target);
}