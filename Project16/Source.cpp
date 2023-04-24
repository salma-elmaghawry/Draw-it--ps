#include <iostream>
#include <string>

using namespace std;

int main() {
    
    char symbol;
    int n;
    cin >> symbol ;
    cin >> n;
    int numbers[50];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    
    for (int i = 0; i < n; i++) {
        string repeated_symbol(numbers[i], symbol);
        cout << repeated_symbol<<endl;
    }
    cout << endl;

    return 0;
}