//
//  main.c
//  bisection_method_of_linear_equation
//
//  Created by Michael Hui on 12/4/2019.
//  Copyright © 2019 Michael Hui. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)){
    double positive = 20, negative = -20, mid_pt = 0, result = 0;
    if(f(p, q, positive) < 0){
        positive = -20;
        negative = 20;
    }
    // when i am talking about positive and negative, i means result of f(positive) is positive, if not,
    // we need to switch the value of variable "positive" and "negative" before going into the loop.
    do{
        mid_pt = (positive + negative)/2;
        result = f(p, q, mid_pt);
        if(result > 0){
            positive = mid_pt;
        }else{
            negative = mid_pt;
        }
    }while(fabs(result) >= EPSILON);
    return mid_pt;
}

double f(int p, int q, double x) {
    return p * x + q;
}
