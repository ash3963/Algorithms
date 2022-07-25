#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r);
void mergeSort(vector<int> &v, int l, int r);
void printArray(vector<int> v, int s);
void binarySearch(vector<int> v, int t);

int main()
{
    vector<int> v{23, 45, 11, 56, 99, 4, 12, 2, 58};
    int s = v.size();
    printArray(v, s);
    cout << "Your Sorted Array is: " << endl;
    mergeSort(v, 0, s - 1);
    printArray(v, s);
    int t =0;
    cout<<"Enter the item you want to search: ";
    cin>>t;
    binarySearch(v,t);
    return 0;
}

void printArray(vector<int> v, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void mergeSort(vector<int> &v, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, r);

        merge(v, l, mid, r);
    }
}
void merge(vector<int> &v, int l, int mid, int r)
{
    int n1 = (mid - l) + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = v[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            v[k] = a[i];
            k++;
            i++;
        }
        else
        {
            v[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        v[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        v[k] = b[j];
        k++;
        j++;
    }
}
void binarySearch(vector<int> v, int t)
{
    int l = 0;
    int r = v.size() - 1;
    int mid = 0;
    while (r - l > 1)
    {
        mid=(l+r)/2;
        if(v[mid]<t)
            l=mid+1;
        else
            r=mid;

    }
    if(v[l]==t)
        cout<<"Found item "<<t<<" at index: "<<l<<endl;
    else if(v[r]==t)
        cout<<"Found item "<<t<<" at index: "<<r<<endl;
    else
        cout<<"Not Found!"<<endl;
}