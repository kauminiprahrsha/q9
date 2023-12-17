
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,c;
 printf("Enter the value of side 1:");
 scanf("%d",&a);

 printf("Enter the value of side 2:");
 scanf("%d",&b);

 printf("Enter the value of side 3:");
 scanf("%d",&c);

 if (a<b && c<b)
 {
     if (((a^2)+(c^2))==(b^2))
   {
    printf("The triangle is right angled triangle");
   }
    else
    {
     printf("the triangle is not a right angled triangle");
    }
 }

if (b<a && c<a)
 {
     if((c^2)+(b^2)==(a^2))
    {
    printf("The triangle is right angled triangle");
    }
    else
    {
    printf("the triangle is not a right angled triangle");
    }
 }
 if (a<c && b<c)
 {
     if((a^2)+(b^2)==(c^2))
    {
    printf("The triangle is right angled triangle");
    }
    else
    {
    printf("the triangle is not a right angled triangle");
    }
 }


return 0;
}
