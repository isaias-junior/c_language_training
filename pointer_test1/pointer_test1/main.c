//
//  main.c
//  pointer_test1
//
//  Created by Isaias de Sousa Barbosa Junior on 4/11/14.
//  Copyright (c) 2014 Isaias de Sousa Barbosa Junior. All rights reserved.
//

#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    p = &x;
    
    printf("The value of x: %d\n",x);
    printf("The address of x: %p\n",p);
    printf("The address of x: %p\n",&x);
    printf("The value of x: %d\n",*p);
    printf("The value of x: %d\n",*(&x));
    
    *p =20;
    printf("The value of x: %d\n",*p);
    printf("The value of x: %d\n",x);
    printf("The address of x: %p\n",p);
    return 0;
}

