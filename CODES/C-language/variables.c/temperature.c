//Write a program that converts temperature from Celsius to Fahrenheit and vice versa.
#include <stdio.h>
int main() 
{
    int n;
    start:
    printf("\n\nEnter 1 for celsius to fahrenheit or Enter 2 to Fahrenheit to celsius or 0 to stop\n=");
    scanf("%d",&n);
    if(n==0)
    {
        return 0;
    }
    else
    {
    switch(n)
    {
        case 1 :
        {
            float c,f;
            printf("\nEnter the temperature in fahrenheit: ");
            scanf("%f",&f);
            c=((f-32)*5/9);
            printf("The given temperature is %.2f in celsius ",c);
            goto start;

        }
        case 2:
        {
            
             float c,f;
             printf("Enter the temperature in celsius: ");
             scanf("%f",&c);
             f=((c*9/5)+32);
             printf("The given temperature is %.2f in Fahreheit ",f);
             goto start;
        }
    }   
    }
    return 0;
}
