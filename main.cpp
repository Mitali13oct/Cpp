#include"../inc/assignment1.h"

int main()
{
    int test = 1;
    while (test) {
        int size = sizeInput();
        
        if (size % 2 == 0)
        {
            functionForEvenInput(size);
        }
        else
        {
            functionForOddInput(size);
        }
    }
    return 0;
}
