#include <stdio.h>
#include <stdlib.h>
int main(){

//Question 1

//    int ID;
//    int hours;
//    float amountRecievedPerMonth;
//    printf("Enter your ID: ");
//    scanf("%d",&ID);
//    printf("Enter Your hours;");
//    scanf("%d",&hours);
//    printf("Enter Amount received amount per month: ");
//    scanf("%f",&amountRecievedPerMonth);
//
//    float final = hours*amountRecievedPerMonth;
//
//    printf("The Salary per month is: %.2f",final);







//Question 2

//    float w;
//    float l;
//
//    printf("Enter width: ");
//    scanf("%f",&w);
//
//    printf("Enter length: ");
//    scanf("%f",&l);
//
//    float area = w*l;
//
//    float perimeter = 2*(l+w);
//
//    printf("The area of the rectangle is %2.f and perimter is %2.f",area,perimeter);








//    Question 3

//    float h;
//    printf("Enter your height: ");
//    scanf("%f",&h);
//
//    if(h<150){
//        printf("Dwarf");
//    }
//    else if (h==150){
//        printf("Average");
//    }
//    else if (h>=150){
//        printf("Tall");
//    }
//    else{
//        printf("Enter a number.");
//    }





//Question 4


//void decimalToBinary(int decimal) {
//    if (decimal > 0) {
//        decimalToBinary(decimal / 2); //calling the function recursively.
//        printf("%d", decimal % 2);
//    }
//}
//
//
//    int decimal;
//
//
//    printf("\nEnter a decimal number: ");
//    scanf("%d", &decimal);
//
//    if (decimal < 0) {
//        printf("Please enter a non-negative decimal number.\n");
//    }else if (decimal == 0) {
//        printf("Binary equivalent: 0\n");
//    }else {
//        printf("Binary equivalent: ");
//        decimalToBinary(decimal);}

//Question 5


    int n;
    printf("\nenter value for n : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    printf("%d,%d",a,b);
    void fibonacciSeries(int n){
        for(int i=3;i<=n+1;i++){
            int c= a+b;
            a=b;
            b=c;
            printf(",%d",c);
        }


}
    fibonacciSeries(n);



}

