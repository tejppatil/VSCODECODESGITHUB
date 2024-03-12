//Write a C program for checking Balanced Brackets using Stack.
#include<stdio.h>  
int main()  
{  
    char expression[50];  
    int x=0, i=0;  
     printf("\nEnter an expression : ");  
    scanf("%s", expression);  
    while(expression[i]!= '\0')  
    {  
     if(expression[i]=='(')  
        {  
            x++;      
        }  
     
     else if(expression[i]==')')  
        {  
            x--;     
            if(x<0)  
            break;  
        }  
    i++;      
    }  
    
    if(x==0)  
    {  
        printf("Expression is balanced");  
    }  
      
    else  
    {  
        printf("Expression is unbalanced");  
    }  
   
    return 0;  
}