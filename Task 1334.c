// Task 1
#include <unistd.h>
void ft_putchar(int c) {
    write(1, &c, 1);
}

int main() {
    ft_putchar(65);
    write(1, "\nHello world!", 13);
    return 0;
}
