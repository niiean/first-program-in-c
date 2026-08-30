#include <stdio.h>

int main(){

    // This is my very first program in C!!
    /*
    Kinda
    silly
    but
    who
    cares
    XDD!!
    */

    int age = 24;
    float price = 9.99;
    char currency = '$';
    char name[] = "cute cat";
    double pi =  3.14159;

    printf("I am %d years old\n", age);
    printf("This costs %.2f euros\n", price);
    printf("The American currency is %c\n", currency);
    printf("This is a %s\n", name);
    printf("The symbol π equals to %.5lf\n", pi);

    return 0;
}