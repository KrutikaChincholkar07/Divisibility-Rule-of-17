#include <iostream>
using namespace std;

int main() {

    int num, temp;

    cout<<"Enter a number: ";
    cin>>num;

    temp = num;

    while(temp > 100) {
        int last = temp % 10;
        temp = temp / 10 - 5 * last;
    }

    if(temp % 17 == 0)
        cout<<num<<" is divisible by 17";
    else
        cout<<num<<" is not divisible by 17";

    return 0;
}
