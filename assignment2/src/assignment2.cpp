#include<iostream>
#include<assignment2.h>
#include<math.h>
using namespace std;
double userDefinedAtof(string input){
double Result=0.0; int Sign=1,decimalCount=0, stringIterator=0, Count=0;
while(stringIterator<=input.length()){
    if(isalpha(input[stringIterator])!=0){
        cout<<"Invalid input :only numeric string allowed"<<endl;
        return 0;
    }
    if(isspace(input[stringIterator])){
        stringIterator++;
    }
    else if(input[stringIterator]=='-'){
        Sign=-1;
    }
    else if(input[stringIterator]=='.'){
        decimalCount++; 
    }
    else if(isdigit(input[stringIterator])){
        Result=Result*10.0+(input[stringIterator]-'0');
        if(decimalCount==1){
        Count--;
        }
    } 
    stringIterator++;
}
if(decimalCount>1){
        cout<<"Invalid input :more than one decimal not allowed";
        return 0;
    }
return Sign*Result*pow(10,Count);
}