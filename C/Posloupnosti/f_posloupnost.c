static const int F_FIRST_MEMBER = 0;
static const int F_SECOND_MEMBER = 1;
 
static void F_getSequence(int arr[], int length) 
{
    int i;
    
    arr[0] = F_FIRST_MEMBER;
    arr[1] = F_SECOND_MEMBER;
    
    for (i = 2; i < length; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
 
static int F_getMember(int index) 
{
    int arr[index];
    
    F_getSequence(arr, index);
    return arr[index];
}