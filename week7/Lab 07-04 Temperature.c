#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

double celsiusToFahrenheit(double celcius){
    double f = 32 + (celcius * (180.0/100.0));
    return f;
}

double fahrenheitToCelcius(double fahrenheit){
    double c = (fahrenheit - 32) / (180.0/100.0);
    return c;
}
void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}

int main(){
    double temp;
    char c;
    scanf("%lf %c",&temp, &c);
    if (c == 'c' || c == 'C'){
        printFarenheit(celsiusToFahrenheit(temp));
    }else if(c == 'f' || c == 'F'){
        printCelcius(fahrenheitToCelcius(temp));
    }
}