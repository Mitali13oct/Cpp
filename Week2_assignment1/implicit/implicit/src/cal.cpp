#include"../inc/cal.h"
using namespace std;

bool isValidInput(double input){
    if (std::cin.fail() || std::cin.peek() != '\n') {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

double calculateResult(double input1,double input2,char operation){
    double result;
    if(operation == '+'){
       result= addition(input1,input2);
    }
    else if(operation == '-'){
       result= substract(input1,input2);
    }
    else if(operation == '*'){
        result=multiply(input1,input2);
    }
    else if(operation == '/'){
        if(input2 == 0){
            cout << "cant divide by zero" << endl;
        }else{
           result = divide(input1,input2);
        }
    }
    else{
        cout << "invalid operation" << endl;
        return 0;
    }
    return result;
}