#include <iostream>
using namespace std;

int main ()
{
   const double PI = 3.14159;
   double radius;
   double circumference;
   double area;

   printf("\n Enter radius of a circle: ");
   scanf("%lf", &radius);


   circumference = 2 * PI * radius;
    area = PI * radius * radius;
   printf("\n circumference: %lf", circumference);
   printf("\n area: %lf", area);

    return 0;
}