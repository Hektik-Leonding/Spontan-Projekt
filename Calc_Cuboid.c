
/*Calc_Cuboid.c*/

#include <stdio.h>

int main ()
{
    int leftNumber, rightNumber, sum, product, difference, quotient, result;
    char function;
    
    // Input (I)
    
    printf("Basic calculator. Choose two operands and an operator.\n");
    
    printf("Put in the operator of choice[+,-,/,*]: ");
    scanf("%c",&function);
    
    printf("Put in the first number: ");
    scanf("%d",&leftNumber);
    
    printf("\nPut in the second number: ");
    scanf("%d",&rightNumber);
    
    
    sum = leftNumber + rightNumber;
    product = leftNumber * rightNumber;
    quotient = leftNumber / rightNumber;
    difference = leftNumber - rightNumber;
    
    //Process (P)
    
    if(function == '+') 
    {
       result = sum;
    }
    else
    {
        if(function == '-')
        {
            result = difference;
        }
        else
        {
            if(function == '*')
            {
                result = product;
            }
            else
            {
                if(function == '/')
                {
                    result = quotient;
                }
            }
        }
    }
    
    //Output (O)
    printf("\nYou have put in the following equation: %d %c %d",leftNumber,function,rightNumber);
    printf("\nYour result is: %d",result);
}

