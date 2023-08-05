#include "../inc/assignment1.h"

bool isValidInput(int input) {
    if(cin.fail()||cin.peek()!='\n'){
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int sizeInput() {
    while(1) { 
        int size = 0;
        cout << "Enter the Size" << endl;
        cin >> size;
        if(isValidInput(size) == false) {
            cout << "Invalid Input" << endl;
            continue;
            } 
        return size;
    }
}

int functionForEvenInput(int size) {
    for (int rowIndex = 0; rowIndex <= size; rowIndex++)
    {
        printTriangle(rowIndex);
        for (int space = 0; space <= 2 * (size - rowIndex); space++)
        {
            cout << " ";
        }
        printTriangle(rowIndex);
        cout << endl;
    }
    for (int iterator = 1; iterator <= (size * 2) + 1; iterator++)
    {
        if (iterator % 2 == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    cout << endl;
    for (int rowIndex = size; rowIndex > 0; rowIndex--)
    {
        printTriangle(rowIndex);
        for (int space = 0; space <= 2 * (size - rowIndex); space++)
        {
            cout << " ";
        }
        printTriangle(rowIndex);
        cout << endl;
    }
    return 0;
}

int printTriangle(int rowIndex) {
    for (int collumnIndex = 1; collumnIndex <= rowIndex; collumnIndex++)
    {
        if (collumnIndex % 2 == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    return 0;
}

int functionForOddInput(int size) {
    for (int rowIndex = 1; rowIndex <= size; rowIndex++)
    {
        printTriangle(rowIndex);
        for (int space = 0; space <= 2 * (size - rowIndex) + 1; space++)
        {
            cout << " ";
        }
        printTriangle(rowIndex);
        cout << endl;
    }
    for (int iterator = 1; iterator <= (size * 2) + 2; iterator++)
    {
        if (iterator % 2 == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    cout << endl;
    for (int rowIndex = size; rowIndex > 0; rowIndex--)
    {
        printTriangle(rowIndex);
        for (int sapce = 0; sapce <= 2 * (size - rowIndex) + 1; sapce++)
        {
            cout << " ";
        }
        printTriangle(rowIndex);
        cout << endl;
    }
    return 0;
}