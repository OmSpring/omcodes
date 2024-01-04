// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int sumeven = 0, sumodd = 0;
    int flag = 1;
    while (num > 0) {
        if (flag == 1) {
            sumodd =sumodd+ num;
            flag = 0;
        } else {
            sumeven = sumeven + num;
            flag = 1;
        }
        num /= 10;
    }
    int diff = sumodd - sumeven;
    if (diff % 11 == 0) {
        printf("The number is divisible by 11");
    } else {
        printf("The number is not divisible by 11");
    }
    return 0;
}