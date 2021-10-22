#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char ch;    
     
    printf("Zadejte první číslo: ");
    scanf("%d",&num1);
    printf("Zadejte druhé číslo: ");
    scanf("%d",&num2);
     
    printf("Vyberte operaci (+,-,*,/)   : ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Neplatná operace\n");
    }
 
    printf("Výsledek: %d %c %d = %f\n",num1,ch,num2,result);
    
}
return 0;