#include <stdio.h>
int main (){

  // Degree celcius into fahrenheit converter

  //  About this code
     //  ..... this code is based on take data to user.........


double a ;
double b = 9.0/5.0;
double c= 32.0 ;

printf("Enter your celsius value :-");
scanf("%lf" , &a);
// printf("%lf\n",a);
// printf("%2lf \n",b);
// printf("%lf\n",c);
// formula of celsius into fahrenheit is (°C × 9/5) + 32 = °F

printf("Value in fahrenheit :- %lf " , (a*b)+c);

return 0;

}