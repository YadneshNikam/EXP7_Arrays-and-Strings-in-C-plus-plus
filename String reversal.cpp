//yadnesh nikam
//24070123134

# include <iostream>
using namespace std;
int main(){
    int n;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    n = str.length();
    cout << "Reversed string: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << str[i];
    }

}/*Enter a string: yadnesh
Reversed string: hsenday
*/