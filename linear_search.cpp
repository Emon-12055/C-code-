#include <iostream>
using namespace std;

int main()
{
    int arr[100];

    int n, i, s;
    cout << "Enter size: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> s;

    for(i = 0; i < n; i++) {
        if(arr[i] == s) {
            cout << "Found at position " << i+1;
            return 0;
        }
    }

    cout << "Not found";

    return 0;
}
