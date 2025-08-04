// yadnesh Nikam
//24070123134
#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the size of array: ";
    cin >> x;
    int num[x];
    cout << "Enter any " << x << " integer values: ";
    for (int i = 0; i < x; i++) {
        cin >> num[i];
    }
    
    int sum = 0;
    for (int j = 0; j < x; j++) {
        sum += num[j];
    }
    
    int average = (sum) / x;
    
    cout << "The sum of the array is: " << sum << endl;
    cout << "The average of the array is: " << average << endl;
}
/*Enter the size of array: 5
Enter any 5 integer values: 1 2 3 4 5
The sum of the array is: 15
The average of the array is: 3
*/
