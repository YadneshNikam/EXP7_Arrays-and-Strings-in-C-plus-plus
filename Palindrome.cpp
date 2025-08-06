//yadnesh nikam
//24070123134

#include <iostream>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.length();
    for(int i = 0; i < length/2; i++) {
        if(str[i] != str[length-1-i]) {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }
    
    return 0;
}/*Enter a string: nayan
The string is a palindrome

Enter a string: yadnesh
The string is not a palindrome
*/