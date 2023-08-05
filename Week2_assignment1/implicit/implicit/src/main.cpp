#include"../inc/cal.h"

int main(){
    int isContinue=1;

    while(isContinue){
        double userInput1,userInput2; char operation; double result;
        cout << "Enter input1: ";
        cin >> userInput1;

        if(!isValidInput(userInput1)){
            cout << "Invalid input" << endl;
            continue;
        }

        cout << "Enter input2: ";
        cin >> userInput2;

        if(!isValidInput(userInput2)){
            cout << "Invalid input" << endl;
            continue;
        }

        cout << "Enter operator(+,-,*,/):";
        cin >> operation;
        result = calculateResult(userInput1,userInput2,operation);
        cout << "Result: " << result << endl;
    }
     return 0;
}