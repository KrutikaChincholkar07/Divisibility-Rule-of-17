#include <stdio.h>

int main() {

    int num, temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while(temp > 100) {
        int last = temp % 10;
        temp = temp / 10 - 5 * last;
    }

    if(temp % 17 == 0)
        printf("%d is divisible by 17", num);
    else
        printf("%d is not divisible by 17", num);

    return 0;
}
