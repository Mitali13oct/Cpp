#include"../inc/operation.h"
using namespace std;

double division(double input1, double input2){
    if (input2 == 0){
        cout << "Cant divide by zero" << endl;
    }
    else{
        return input1 / input2;
    }
    return 0;
}