// Lexicographic permutations

// A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. 
// If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:
// 012   021   102   120   201   210
// What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?

#include <stdio.h>

void nextPermutation(int a[], const int len)
{
    // Find the largest index k 
    int k = 0;
    for (int i = 0; i<len-1; i++)
        if (a[i] < a[i+1])
            k = i;

    // Find the largest index l 
    int l = 0;
    for (int i=k; i<len; i++)
        if (a[k] < a[i])
            l = i;

    // Swap the value 
    int t = a[k];
    a[k] = a[l];
    a[l] = t;

    // Reverse the sequence 
    if (k < 8)
    {
        int r[10] = {0};
        int j = 9;
        for (int i=k+1; i<len; i++)
        {
            r[j] = a[i];
            j -= 1;
        }
        for (int i=(k+1); i<len; i++)
            a[i] = r[i];
    }
}

void printArray(int a[], int l)
{
    for (int i=0; i<l; i++)
        printf("%d", a[i]);
    printf("\n");
}

int main()
{


    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array)/sizeof(array[0]);

    for (int i=1; i<1000000; i++)
        nextPermutation(array, length);

    printArray(array, length);


    return 0;
}