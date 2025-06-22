#include <stdio.h>
#include <math.h>

double func(double x) {
    return x*x;
}

double derivative(double (*f)(double) , double x){
    double h = 1e-6;
    return (f(x+h)-f(x))/h;
}

int main(void){
    double x = 3.0;
    printf("Approximate derivative at x=%.2f is %.6f\n",x,derivative(func,x));
    return 0;
}