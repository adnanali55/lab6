#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "enter three numbers:";
    cin >> n1 >> n2 >> n3;

        if (n1 < n2 && n1 < n3){
            if (n2 < n3) {
                cout << "n1<n2<n3" << endl;

            }else if (n2 < n1 && n2 < n3)
        if (n1 < n3) {
            cout << "n2<n1<n3";
        }else if (n3<n2&&n3<n1) {
            if (n2 < n1)
                cout << "n3<n2<n1";
        }else
    cout<<"equal no";
    return 0;
}
}
