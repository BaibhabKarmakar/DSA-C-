#include<iostream>
using namespace std;

int main() {
    int option ;
    cout << "Which operation do you want to do : (1. Add , 2. Subtract , 3. multiplication , 4. Divison , 5. Modulo) : ";
    cin >> option;
    int a , b;
    switch(option) {
        case 1: {
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter your second number : ";
            cin >> b;

            int sum = (int) a + (int) b;
            cout << "The sum is : " << sum << endl;
            break;
        }
        case 2: {
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter your second number : ";
            cin >> b;

            int diff = (int) a - (int) b;
            cout << "The difference is : " << diff << endl;
            break;
        }
        case 3: {
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter your second number : ";
            cin >> b;

            int mul = (int) a * (int) b;
            cout << "The mulplication is : " << mul << endl;
            break;
        }
        case 4: {
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter your second number(except 0) : ";
            cin >> b;
            if(b != 0) {
                int div = (int) a / (int) b;
                cout << "The divison is : " << div << endl;
            }
            else {
                cout << "You have entered the denominator as 0 . Please reRun the calculator!!!";
            }
            break;
        }
        case 5: {
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter your second number(except 0) : ";
            cin >> b;
            if(b != 0) {
                int mod = (int) a % (int) b;
                cout << "The divison is : " << mod << endl;
            }
            else {
                cout << "You have entered the denominator as 0 . Please reRun the calculator!!!";
            }
            break;
        }
        default : {
            cout << "You gave a invalid input ! ReRun Me!!!";
            break;
        }
    }
    return 0;
}