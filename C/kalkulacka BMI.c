#include<stdlib.h>

int main()
{
    double wt_kg, ht_cm, bmi, ht_cm;

    printf("Zadejte svou výšku v centimetrech: ");
    scanf("%lf", &wt_cm);
    printf("Zadejte váhu v kilogramech: ");
    scanf("%lf", &ht_kg);

    ht_cm = ht_cm/12;
    bmi = (703*wt_kg)/(ht_cm*ht_cm);

    if (bmi < 18.5) {
        printf("Vaše BMI je %f. a máte podváhu", bmi)
    } else if (bmi >= 18.5 && < 25) {
        printf("Vaše BMI je %f. a vaše váha je normání", bmi)
        else{
            printf("Vaše BMI je %f. a máte nadváhu", bmi)
        }
    }



    
}