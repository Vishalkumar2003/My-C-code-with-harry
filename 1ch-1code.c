 #include<stdio.h>
 int main(){
  
  //  About this code
  //       ..... this code is based on take data to user.........

  int num1 ;
  float num2 ;
  double num3 ;

  printf("Enter a number:");
  scanf("%d",&num1);

  printf("Enter a decimal number:");
  scanf("%f",&num2);

  printf("Enter a more decimal number:");
  scanf("%lf",&num3);

    printf("your 1st no=%d\n",num1);
    printf("your 2nd no=%f\n",num2);
    printf("your 3rd no=%lf\n",num3);
    printf("sum of all no=%lf",num1+num2+num3);
    return 0;
 }