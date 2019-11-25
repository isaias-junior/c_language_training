//
//  main.c
//  practice_mathfunctions
//
//  Created by Isaias de Sousa Barbosa Junior on 4/11/14.
//  Copyright (c) 2014 Isaias de Sousa Barbosa Junior. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void square_fn(int);
void sen_trig(float);
void quadr_fn(float,float,float);

int main()
{
    int opt,i;
    float x,p1,p2,p3;
    i = 1;
    
    for(i = 1;i>0;i++){
    printf("What operaration would you like to realize?\n\n1)Square\n2)Sen\n3)Roots of quadratic fn\n\n");
    scanf("%d",&opt);
    
    switch(opt){
    
        case 1:
            square_fn(x);
            break;
        case 2:
            sen_trig(x);
            break;
        case 3:
            quadr_fn(p1,p2,p3);
            break;
        default:
            printf("Invalid Option!\n");
            break;
    
    }
}
        /*else{
            printf("Would you like to keep your work?\n\n0)Yes\n1)No");
            scanf("%d", &i);
        }*/

    return 0;
}


void square_fn(int a){
    printf("\nType the number you wish to square");
    scanf("%d", &a);
    a = a*a;
    printf("The square of this number is: %d\n\n",a);
}

void sen_trig(float b){
    float sen_b;
    printf("\nType an angle in radians:");
    scanf("%f",&b);
    sen_b = b - (b*b*b/6) + (b*b*b*b*b/120) - (b*b*b*b*b*b*b/5040);
    printf("The sen of %f is: %f\n\n",b,sen_b);

}

void quadr_fn(float c, float d, float e){
    float delta,temp,x1,x2;
   
    printf("\nType the parameters of the quadratic function:\n\na = ");
    scanf("%f", &c);
    printf("\nb = ");
    scanf("%f", &d);
    printf("\nc = ");
    scanf("%f", &e);
    
    delta = (d*d) - 4*c*e;
    temp = sqrt(delta);
    x1 = (-d + temp)/(2*c);
    x2 = (-d - temp)/(2*c);
    
    printf("\nThe roots of the quadratic function are:\n\nx1 = %f\nx2 = %f\n", x1,x2);
}