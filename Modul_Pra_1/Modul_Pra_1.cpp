#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            cout << x << " - четное\n";
        }
    }
    return 0;
}