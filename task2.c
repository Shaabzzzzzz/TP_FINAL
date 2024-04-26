#include<stdio.h>
float fahrenheit = 100.0f;
int main(){
    float celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

        // Print the converted temperature
        printf("Fahrenheit: %f, Celsius: %f\n", fahrenheit, celsius);

}