#include <stdio.h>
#include "a_posloupnost.c"
#include "g_posloupnost.c"
#include "f_posloupnost.c"
 
#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
 
void printArr(int arr[], int length) 
{
    int i;
    
    printf("%d", arr[0]);
    for (i = 1; i < length; i++) 
    {
        printf(", %d", arr[i]);
    }
}
 
int main() 
{
    int length = 15;
    int arr[length];
    
    // - A. Sequence
    printf("\n- A Sequence | [difference = 2, firstMember = 0]\n");
    A_setDifference(2);
    A_getSequence(arr, length);
    printArr(arr, ARR_SIZE(arr));
    
    // - G. Sequence
    printf("\n- G Sequence | [ratio = 2, firstMember = 1]\n");
    G_setFirstMember(1);
    G_setRatio(2);
    G_getSequence(arr, length);
    printArr(arr, ARR_SIZE(arr));
    
    // - F. Sequence
    printf("\n- F Sequence\n");
    F_getSequence(arr, length);
    printArr(arr, ARR_SIZE(arr));
    
    return 0;
}