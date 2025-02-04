// Decimal to Binary conversion : 
#include<iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0;
    int power = 1;
    while(n > 0) {
        int rem = n%2;
        n /= 2;
        ans += (rem * power);
        power *= 10;
    }
    return ans;
}

// Binary to Decimal conversion : 
int binaryToDecimal(int n){
    int ans = 0;
    int power = 1;
    while(n > 0) {
        int rem = n%10;
        ans+= rem * power;
        power *= 2;
        n/=10;
    }
    return ans;
}
int main() {
    int n;
    // cout << "Enter the number to convert into binary : ";
    cout << "Enter the number to convert into decimal : ";
    cin >> n;
    // int result = decimalToBinary(n);
    int result = binaryToDecimal(n);
    cout << "The binary equivalent of the number is : " << result << endl;
    return 0;
}