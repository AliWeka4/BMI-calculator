#include <stdio.h>
#include <math.h>

int main(){

    float mass = 0.0, height = 0.0;
    float BMI = 0.0;
    

    printf("Enter your mass and height: ");
    if (scanf("%f %f", &mass, &height) != 2 || mass <= 0 || height <= 0){
        printf("Refused input");
        return 1;
    }

    BMI = mass / pow(height, 2);

   
    if (BMI >= 30) {
        printf("Obesity\n");
    } else if (BMI >= 25) {
        printf("Overweight\n");
    } else if (BMI >= 18.5) {
        printf("Normal weight\n");
    } else {
        printf("Underweight\n");
    }

    return 0;
}




// #include <stdio.h>
// #include <math.h>

// int main() {
//     float mass = 0.0, height = 0.0;
//     float BMI = 0.0;

//     printf("Enter your mass (kg) and height (m): ");
//     if (scanf("%f %f", &mass, &height) != 2 || mass <= 0 || height <= 0) {
//         printf("Refused input\n");
//         return 1;
//     }

//     BMI = mass / pow(height, 2);

//     if (BMI >= 30) {
//         printf("Obesity\n");
//     } else if (BMI >= 25) {
//         printf("Overweight\n");
//     } else if (BMI >= 18.5) {
//         printf("Normal weight\n");
//     } else {
//         printf("Underweight\n");
//     }

//     return 0;
// }
