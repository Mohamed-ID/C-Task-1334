// Task 1
#include <unistd.h>
#include <stdio.h>
void ft_putchar(int c) {
    write(1, &c, 1);
}

// Task 2
void ft_print_alphabet(void) {
    char alphabet[] = "a b c d e f j h i g k l m n o p q r s t u v w x y z";
    int length = sizeof(alphabet)/sizeof(alphabet[0]);
    int i = 0;
    while(i < length) {
        write(1, &alphabet[i], 1);
        i++;
    }
}

// Task 3
void ft_print_reverse_alphabet(void) {
    char alphabet[] = "a b c d e f j h i g k l m n o p q r s t u v w x y z";
    int length = sizeof(alphabet)/sizeof(alphabet[0]);
    int i = length - 1;
    while(i >= 0) {
        write(1, &alphabet[i], 1);
        i--;
    }
}

// Task 4
void ft_print_numbers(void) {
    int i = 48;
    while (i <= 57)
    {
        write(1, &i, 1);
        i++;
    }
}

// Task 5
void ft_is_negative(int n) {
    n >= 0  ? write(1, "P", 1) : write(1, "N", 1);
}


int main() {
    ft_putchar('A');
    // ################
    write(1, "\n", 1);
    // ################
    ft_print_alphabet();
    // ################
    write(1, "\n", 1);
    // ################
    ft_print_reverse_alphabet();
    // ################
    write(1, "\n", 1);
    // ################
    ft_print_numbers();
    // ################
    write(1, "\n", 1);
    // ################
    ft_is_negative(-1);
    return 0;
}




