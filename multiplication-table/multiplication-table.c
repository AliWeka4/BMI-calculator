#include <stdio.h>
#include <windows.h>

int main(){

    // initializing variables
    float number = 0; // Variable will store input from user
    int maltiplication_number = 0; // number will multply with 1st variable


    // while loop (1 == 1) => to make condition true
    while (1 == 1){
        printf("--------------------------\n");
        printf("To stop print any letter\n");
        printf("Enter whole number to get its maltiplication table: ");
        // this check if user put number (float or integer) or string
        if (scanf("%f", &number)){ // if condition 1 (true) will execute the body
            // initialize variable by datatype int to remove decimal number to check if input is floating(fraction) or whole number
            int integer = number; 
             if (number == integer){ // if number that store number (may be float or integer) is equal to integer variable (number 100% whole number doesn't contian any decimal) => that mean user input is integer
            // when condition 1 (true) body will execute
                // for loop maltiplication number start from 1; condtion is while it less than or equal 12; action after execute the body is increment
                for (maltiplication_number = 1; maltiplication_number <= 12; maltiplication_number++){
                    // using integer varialbe  not number varialbe , because formate specifier is for integer (using wrong format specifier make undefined behavior)
                   printf("%d x %2d = %3d\n", integer, maltiplication_number, integer * maltiplication_number);
                }
            // if condtion number not equal integer (number is more than integer) that mean condtion return 0 (false), so body of else will executed
            }else{
                printf("Refused input\n");
            }

        // if input is any thing except integer or float will break while loop
        }else{
            break;
        }  
    }

    // to make stop main() function
    return 0;

}