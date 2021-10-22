
static int a_firstMember = 0;
static int a_difference = 1;
 
static void A_setFirstMember(int number) 
{
    a_firstMember = number;
}
 
static void A_setDifference(int number) 
{
    a_difference = number;
}
 
static int A_getMember(int index) 
{
    return a_firstMember + (index - 1) * a_difference;
}
 
static void A_getSequence(int arr[], int length) 
{
    int i;
    
    for (i = 0; i < length; i++) {
        arr[i] = A_getMember(i + 1);
    }
}