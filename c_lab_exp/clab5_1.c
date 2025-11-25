//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list #include <stdio.h>
#include<stdio.h>
int main() {
    int n, i;
    printf("Enter number of values: ");
    scanf("%d", &n);

    int num[n];
    int highest, second_highest;

    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num[i]);
    }highest = second_highest = num[0];
      for (i = 1; i < n; i++) {
        if (num[i] > highest) {
            second_highest = highest;
            highest = num[i];
        } else if (num[i] > second_highest && num[i] != highest) {
            second_highest = num[i];
        }
    }

    printf("Second highest number = %d\n", second_highest);
    return 0;
}


