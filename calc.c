#include <stdio.h>
#include <math.h>

int main(){
    printf("welcome to my simple calculator!!\n");
    printf("enter the first number : ");
    double a;
    scanf("%lf", &a);

    printf("enter the second number : ");
    double b;
    scanf("%lf", &b);

    double addition = a + b;
    double subtraction = a - b;
    double divide = (b != 0) ? a / b : 0;
    double multiply = a * b;
    double square_f = pow(a, 2);
    double square_s = pow(b, 2);
    double sqrt_f = sqrt(a);
    double sqrt_s = sqrt(b);

    printf("tell me what you wanna do with the two numbers?\n");
    printf("options are:\n1) +\n2) -\n3) *\n4) /\n5) Square of first number\n6) Square of the second number\n7) Square root of first number\n8) Square root of second number\nSOOOO what do you choose: ");
    char op;
    scanf(" %c", &op);

    switch (op) {
        case '1':
            printf("%f\n", addition);
            break;
        case '2':
            printf("%f\n", subtraction);
            break;
        case '3':
            printf("%f\n", multiply);
            break;
        case '4':
            if(b != 0)
                printf("%f\n", divide);
            else
                printf("you don't divide by 0!");
            break;        
        case '5':
            printf("%f\n", square_f);
            break;        
        case '6':
            printf("%f\n", square_s);
            break;
        case '7':
            if (a >= 0)
                printf("%f\n", sqrt_f);
            else
                printf("we don't use complex numbers");
            break;
        case '8':
            if(b >= 0)
                printf("%f\n", sqrt_s);
            else
                printf("we don't use complex numbers");
            break;                    
        default:
            printf("Invalid choice!");
            break;
    }
    return 0;
}