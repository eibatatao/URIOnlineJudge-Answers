#include <stdio.h>
#include <math.h>

int main()
{
   double A, B, C, Delta, R1, R2;

   scanf("%lf %lf %lf", &A, &B, &C);

   Delta = pow(B,2) - (4 * A * C);

   R1 = (-B + sqrt (Delta))/(2*A);
   R2 = (-B - sqrt (Delta))/(2*A);

   if (A == 0 || Delta<0){
      printf("Impossivel calcular\n");
   }

   else {
   printf("R1 = %.5lf\n", R1);
   printf("R2 = %.5lf\n", R2);
   }

   return 0;
}