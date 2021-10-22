#include <math.h>
 
static int g_ratio = 2;
static int g_firstMember = 1;
 
static void G_setFirstMember(int number) {
    g_firstMember = number;
}
 
static void G_setRatio(int number) {
    g_ratio = number;
}
 
static int G_getMember(int index) 
{
    return g_firstMember * pow(g_ratio, (index - 1));
}
 
static void G_getSequence(int arr[], int length) 
{
    int i;
    
    for (i = 0; i < length; i++) {
        arr[i] = G_getMember(i + 1);
    }
}