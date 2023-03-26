#include <stdio.h>
#include <math.h>
int main() {
int a,b,c,n;
double srednee;
printf("Enter 3 numbers\n");
n=scanf("%d %d %d",&a,&b,&c);
srednee=(a+b+c)/n;
printf("Arithmetical mean is %lf\n",srednee);
}
