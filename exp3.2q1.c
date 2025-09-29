 #include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\ntotal of Positive numbers: %d", pos);
    printf("\ntotal of Negative numbers: %d", neg);
    printf("\ntotal of Zeroes: %d\n", zero);

    return 0;
}
