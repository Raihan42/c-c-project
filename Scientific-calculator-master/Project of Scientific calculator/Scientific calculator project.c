#include<stdio.h>

#include<stdlib.h>

#include<math.h>


int main(){

int choice, i, j,  a, b;

float x, y, result;

do{
    printf("\n --------------------------------------------------\n\n");

    printf("| \t Select your operation(0 to exit): \t |\n");

    printf("| \t 1. Addition \t 2. Subtraction \t 3. Multiplication \t |\n");
    printf("| \t 4. Division 5. Square root 6. X ^ Y 7. X ^ 3  |\n");
    printf("| \t 8. 1 / X 9. X ^ (1 / Y) 10. 10 ^ X 11. X! 12. % \t |\n");
    printf("| \t 13. log10(x) 14. Modulas 15. Sin(X) 16. Cos(x) \t |\n");
    printf("| \t 17. Tan(X) 18. Cosec(X) 19. Cot(X) 20. Sec(X) \t |\n");
    printf("\n -------------------------------------------------- \n");
    printf("Choice: ");

    scanf("%d", &choice);
    /*
    if(choice < 1 && choice > 20){
        printf("choice is invalid.\n");
        exit(1);
    }
    */
     system("cls");

    switch(choice){
    case 1:

        printf("Enter X: ");
        scanf("%f", &x);

        printf("\nEnter Y: ");
        scanf("%f", &y);

        result = x + y;

        printf("\n Result: %f \n", result);

        break;

    case 2:
        printf("Enter X: ");
        scanf("%f", &x);

        printf("\nEnter Y: ");
        scanf("%f", &y);

        result = x - y;
        printf("\nResult: %f\n", result);

        break;

    case 3:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x * y;
        printf("\nResult: %f\n", result);
        break;

    case 4:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x / y;
        printf("\n Result: %f \n", result);
        break;
    case 5:
        printf("Enter X: ");
        scanf("%f", &x);
        result = sqrt(x);
        printf("\nResult: %f\n", result);
        break;
    case 6:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result= pow(x, y);
        printf("\nResult: %f\n", result);
        break;

    case 7:
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, 3);
        printf("\nResult: %f\n", result);
        break;
    case 8:
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, -1);
        printf("\nResult: %f\n", result);
        break;
    case 9:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = pow(x, (1 / y));
        printf("\nResult: %f\n", result);
        break;

    case 10:
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(10, x);
        printf("\nResult: %f\n", result);
        break;
    case 11:
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1;
        for(i = 1; i <= x; i++){
        result = result * i;
        }
        printf("\nResult: %f\n", result);
        break;
    case 12:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = (x * y) / 100;
        printf("\nResult: %f\n", result);
        break;
    case 13:
        printf("Enter X: ");
        scanf("%f", &x);
        result = log10(x);
        printf("\nResult: %f\n", result);
        break;
    case 14:
        printf("\nEnter a: ");
        scanf("%f", &a);
        printf("\nEnter b: ");
        scanf("%f", &b);
        result = a % b;
        printf("\nResult: %f\n", result);
        break;
    case 15:
        printf("Enter X: ");
        scanf("%f", &x);
        result = sin(x * 3.1416 / 180);
        printf("\nResult: %f\n", result);
        break;
    case 16:
        printf("Enter X: ");
        scanf("%f", &x);
        result = cos(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
        break;
    case 17:
        printf("Enter X: ");
        scanf("%f", &x);
        result = tan(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
        break;
    case 18:
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / sin(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
        break;
    case 19:
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / tan(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
        break;
    case 20:
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / cos(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
        break;

    default:
        printf("\n Invalid choice \n");
        printf("\n Prese any key to exit \n");
        getch();
        exit(1);

    }


}while(choice);
getche();

return 0;
}

