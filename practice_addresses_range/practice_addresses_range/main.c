//
//  main.c
//  practice_addresses_range
//
//  Created by Isaias de Sousa Barbosa Junior on 4/11/14.
//  Copyright (c) 2014 Isaias de Sousa Barbosa Junior. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x[16] = {};
    int *p[16];
    int i;
    
    for (i=0; i<16; i++) {
        p[i] = &x[i];
        printf("The values are: %d\n", x[i]);
        printf("The addresses are: %p\n", p[i]);
        
    }
        return 0;
}

/*what you were trying to do is suicide because this application would work for a microcontroller, but
is not likely to produce a useful or even secure outcome when we are messing with a OS*/
