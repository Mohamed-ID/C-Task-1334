// Task 1
#include <unistd.h>
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

int main() {
    ft_putchar('A');
    // ################
    write(1, "\n", 1);
    // ################
    ft_print_alphabet();
    return 0;
}




