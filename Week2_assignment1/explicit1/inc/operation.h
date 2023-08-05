#include <iostream>
#include <dlfcn.h>

extern "C" {
    double addition(double,double);
    double division(double,double);
    double multiplication(double,double);
    double substraction(double,double);
}
