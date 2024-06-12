#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int factorial(int first_number){

    int result = 1;
    if (first_number < 0){
        char result[20] = "\nRefused input";
    }else if (first_number == 0){
        result = 1;
    }else{
        while (first_number > 0){
            result *= first_number;
            first_number--;
        }
    }

    if (result == 0){
        char result[100] = "Very Big number";
    }
    

    return result;

}

int permutation(int first_number, int  second_number){

    int result = 0;

    if (first_number >= second_number && first_number >= 0 && second_number >= 0){
        result = factorial(first_number) / factorial(first_number - second_number);
    }else{
        printf("\nRefused input");
    }

    if (result == 0){
        char result[100] = "Very Big number";
    }

    return result;

}

int combination(int first_number, int  second_number){

    int result = 0;

    if (first_number >= second_number && first_number >= 0 && second_number >= 0){    
        result = permutation(first_number, second_number) / factorial(second_number);
    }else{

    }
    
    if (result == 0){
        char result[100] = "Very Big number";
    }

    return result;
}



int calculate(float first_number, float second_number, char operation){

    int isTrue = 1;

    if (first_number >= 0 || first_number < 0){

        switch (operation){

            case '+':
                return first_number + second_number;
                break;

            case '-':
                return first_number - second_number;
                break;

            case '*':
                return first_number * second_number;
                break;

            case '/':
                return first_number / second_number;
                break;

            case '^':
                return pow(first_number, second_number);
                break;

            case '!':
                return factorial(first_number);
                break;

            case 'p':
                return permutation(first_number, second_number);
                break;

            case 'c':
                return combination(first_number, second_number);
                break;

            default:
                isTrue = 0;
                return true;
                break;

        }
    }

    else{

        isTrue = 0;
        return true;
    }

    
}

int main(){
    float first_number = 0;
    float second_number = 0;
    char operation;
    float answer = 0;

    printf("I can help u in calculate 2 number with simple calculations\n");

    printf("First number: ");
    scanf("%f", &first_number);

    printf("Operation: ");
    scanf("%s", &operation);

    if (operation != '!'){
        printf("Second number: ");
        scanf("%f", &second_number);
        answer = calculate(first_number, second_number, operation);
        if (answer == true){
            printf("\nRefused input");
        }else{
            printf("%f", answer);
        }
    }else{
        answer = calculate(first_number, 0, operation);
        if (answer == true){
            printf("Refused input\n");
        }else{
            printf("%f", answer);
        }
    }
 

    return 0;
}