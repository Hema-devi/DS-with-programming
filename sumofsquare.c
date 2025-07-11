#include <stdio.h>
int sumofSquares(int num) {
    int sum = 0, digit;
    while (num != 0) {
        digit = num % 10;
        sum += digit * digit;
        num = num / 10;
    }
    return sum;
}
int main() {
    int number, cycle_no = 0;
    int finalNumber;
    printf("Enter a number: ");
    scanf("%d", &number);
    int current = number;
    for (cycle_no = 1; cycle_no <= 10; cycle_no++) {
        current = sumofSquares(current);
        if (current == 1) {
            finalNumber = 1;
            break;
        }
    }
    if (current != 1)
       finalNumber = current;
    printf("Final Number after %d cycle(s): %d\n", cycle_no, finalNumber);
    
    return 0;
}
