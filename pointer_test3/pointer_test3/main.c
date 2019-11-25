#include <stdio.h>

//void change_value();
void change_value(int *p) {
    *p = 15;
    //printf("The address of x inside of function: %p\n", &x);
}

void change_value_again(int *q, int *f) {
    *q = 150;
    *f = 200;
    //printf("The address of x inside of function: %p\n", &x);
}


int main() {
    int x = 10;
    int y = 20;
    
    printf("The value of x: %d\n", x);
    change_value(&x);
    printf("The value of x: %d\n", x);
    change_value_again(&x, &y);
    printf("The value of x: %d\n", x);
    printf("The value of y: %d\n", y);
    return 0;
    
    //a change was made to this code in order to check the concept of branchs and operations on those in git
}
