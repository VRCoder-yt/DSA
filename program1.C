// 1. Find the time complexity of the func1 function in the program show in program1.c as follows:

#include <stdio.h>
void func1(int array[], int length)
{
    // F1 = K1
    int sum = 0;
    int product = 1;

    // F2 = K2^n
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    // F3 = K3^n
    for (int i = 0; i < length; i++)
    {
        product *= array[i];
    }
}
int main()
{
    int arr[] = {3, 5, 66};
    func1(arr, 3);
    return 0;
}

// TIME COMPLEXITY

// Tn = f1+ f2+ f3
//     K2^n + k3^n
//     (k2 + k3) n
//     k4^n
//     O(n)
//     O(length)