/*
7. Write a program to add two fractions.
struct _fraction
{
int num,den;
};
typedef _fraction Fraction;
int find_gcd(int a, int b);
Fraction input_fraction();
Fraction add_fractions(Fraction f1, Fraction f2)
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
*/
#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
int gcd=0;
for(int i=1;i<=a || i<=b;i++)
{
if(a%i==0 && b%i==0)
gcd=i;
}
printf("GCD=%d\n",gcd);
return gcd;
}
Fraction input()
{
Fraction a;
printf("Enter a fraction number =");
scanf("%d%d",&a.num,&a.den);
return a;
}
Fraction add(Fraction f1, Fraction f2)
{
Fraction f3;
f3.num=f1.num*f2.den+f2.num*f1.den;
f3.den=f1.den*f1.den;
  printf("num=%d\n",f3.num);
  printf("den=%d\n",f3.den);
int g=find_gcd(f3.num,f3.den);
f3.num=f3.num/g;
f3.den=f3.den/g;
return f3;
}
void output(Fraction sum)
{
printf("sum of two fraction number is %d/%d\n\n",sum.num,sum.den);
}
int main()
{
Fraction f1=input();
Fraction f2=input();
Fraction sum=add(f1,f2);
output(sum);
main();
return 0;


}