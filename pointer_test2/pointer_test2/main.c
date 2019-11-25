//
//  main.c
//  pointer_test2
//
//  Created by Isaias de Sousa Barbosa Junior on 4/11/14.
//  Copyright (c) 2014 Isaias de Sousa Barbosa Junior. All rights reserved.
//

#include <stdio.h>

//void change_value();
void change_value(int x) {
    x = 15;
    printf("The address of x inside of function: %p\n", &x);
}

int main() {
    int x = 10;
    
    printf("The address of x outside of function: %p\n", &x);
    change_value(x);
    return 0;
}

