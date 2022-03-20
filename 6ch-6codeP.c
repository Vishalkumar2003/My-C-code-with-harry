#include<stdio.h>
int main()
{

 // find the area , volume , T.S.A and lateral of cylinder -------


 //  About this code
   //  ..... this code is based on take data to user.........

  double a,b;
  double c=3.14 , d=2;

  printf("Enter length of radius -: ");
  scanf("%lf",&a);

  printf("Enter length of height -: ");
  scanf("%lf",&b);

  printf("\n");

  printf("1... Volume of cylinder       :%lf \n",c*a*a*b );
  printf("2... T.S.A of cylinder        :%lf \n" , d*c*a*a + d*c*a*b );
  printf("3... Lateral area of cylinder :%lf \n" , d*c*a*b  );
  printf("4... Base area of cylinder    :%lf \n" , c*a*a );

}