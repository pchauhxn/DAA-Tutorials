#include <math.h>
#include<iostream>
#define MAX 1000
using namespace std;
void Jump_search(int arr[], int n, int key)
{
    int comparisions = 0, flag = 0;
    int old = 0;
    int m=sqrt(n);
    int i=0;
    while(i<n && arr[i]<=key)
    {
        i=i+m;
        comparisions++;
    }

    for (int j = i-m; j < i; j++)
    {
        comparisions++;
        if (arr[j] == key)
        {
            cout << "Present"
                 << " " << comparisions << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Not Present"
             << " " << comparisions << endl;
}
int main()
{
    int arr[MAX];
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout << "Enter key" << endl;
    cin >> key;

    Jump_search(arr, n, key);
}
