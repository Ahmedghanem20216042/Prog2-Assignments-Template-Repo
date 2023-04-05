//Ahmed Ghanem
//202106042
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
 
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c << endl;
 
    return 0;
}
