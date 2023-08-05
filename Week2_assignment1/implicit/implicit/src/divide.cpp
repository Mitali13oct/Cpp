#include"../inc/cal.h"
using namespace std;
double divide(double input1, double input2){
    if (input2 == 0){
        cout<<"Cant divide by zero"<<endl;
    }else{
        return input1 / input2;
    }
    return 0;
}