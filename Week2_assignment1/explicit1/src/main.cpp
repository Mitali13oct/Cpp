#include"../inc/operation.h"
#include"../inc/cal.h"
using namespace std;

typedef double (*calculatorFunction)(double, double);

int main() {
  void* calculatorDLL = dlopen("./libcal.so", RTLD_LAZY);
  if ( !calculatorDLL ){
    cout << "Error: could not load DLL" << endl;
    return 1;
  }

  calculatorFunction add = (calculatorFunction)(dlsym(calculatorDLL,"addition"));
  calculatorFunction multiply = (calculatorFunction)(dlsym(calculatorDLL,"multiplication"));
  calculatorFunction divide = (calculatorFunction)(dlsym(calculatorDLL,"division"));
  calculatorFunction substract = (calculatorFunction)(dlsym(calculatorDLL,"substraction"));

    int isContinue=1;
    while(isContinue){
      double userInput1,userInput2,result=0;char operation;
      cout << "Enter input1: ";
      cin >> userInput1;

      if(!isValidInput(userInput1)){
        cout << "Invalid input" << endl;
        continue;
      }

      cout << "Enter input2: ";
      cin >> userInput2;
      
      if(!isValidInput(userInput2)){
        cout << "Invalid input:";
        continue;
      }

      cout << "Enter operator(+,-,*,/)" << endl;
      cin>>operation;
      
      if(operation == '+'){
        result=add(userInput1,userInput2);
      }
      else if(operation == '-'){
        result = substract(userInput1,userInput2);
      }
      else if(operation == '*'){
        result = multiply(userInput1,userInput2);
      }
      else if(operation == '/'){
        result = divide(userInput1,userInput2);
      }else{
        cout << "Invalid operation" << endl;
      }
      cout << "Result is:" << result << endl;
    }
  dlclose(calculatorDLL);
  return 0;
}