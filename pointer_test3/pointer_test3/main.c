#include <stdio.h>

//void change_value();
void change_value(int *p) {
    *p = 15;
    //printf("The address of x inside of function: %p\n", &x);
}

int main() {
    int x = 10;
    
    printf("The value of x: %d\n", x);
    change_value(&x);
    printf("The value of x: %d\n", x);
    return 0;
}
