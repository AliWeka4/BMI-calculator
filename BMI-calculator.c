#include <stdio.h>  // libirary handles outputs and input (I/O)
#include <math.h> // libirary to call functions like trignometric function 

// main() is function for execute code in the body
int main(){

    
    float mass = 0.0, height = 0.0; // initialize variables to use in BMI in float data type(decimal)
    float BMI = mass / pow(height, 2); // initialize variable called BMI 
    // law of BMI (Body Mass Index) => mass / (height ^ 2)
    
    // function print value on it 
    printf("Enter your mass(kg.) and height(m.): ");


    // condition handle wrong inputs like -ve height or -ve mass, Handle if there is string input
    if (scanf("%f %f", &mass, &height) != 2 || mass <= 0 || height <= 0){
        printf("Refused input"); // result of previous condition is print in terminal => Refused input
    }
    
    else if (BMI >= 30) { // if previous condition is false, so if BMI is more than or equal 30 will apply body
        printf("Obesity\n"); // If condition is true will print Obesity 
    }
    
    else if (BMI >= 25) { // if previous condition is false, so if BMI is more than or equal 25 will apply body
        printf("Overweight\n"); // If condition is true will print Overweight 
    }
    
    else if (BMI >= 18.5){ // if previous condition is false, so if BMI is more than or equal 18.5 will apply body
        printf("Normal weight\n"); // If condition is true will print Normal weight 
    }
    
    else{ // if previous condition is false, so body will applied
        printf("Underweight\n"); // will print Underweight
    }
        // note (\n) is escape sequence that make new line

    // return is used for stop interrupt code
    return 0; 
}