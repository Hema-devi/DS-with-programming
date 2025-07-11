#include <stdio.h>
int main() {
    int sqdnumber, digit;
    int sqdNumber_result = 0;
    printf("Enter a number: ");
    scanf("%d", &sqdnumber);
    int temp = sqdnumber;
    while (sqdnumber != 0) {
        digit = sqdnumber % 10;
        sqdNumber_result += digit * digit;
        sqdnumber = sqdnumber / 10;
    }
    printf("Sum of squares of digits = %d\n", sqdNumber_result);
    return 0;
}
