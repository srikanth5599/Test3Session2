#include <stdio.h> 
#include <stdio.h>

int gcd(int a, int b) {
  int t;
  while(b != 0) {
    t = b;
    b = a%b;
    a = t;
  }
  return a;
}

void input(int *num1, int *den1, int *num2, int *den2) {
  printf("Enter a fraction 1 : ");
  scanf("%d/%d", num1, den1);
  printf("Enter a fraction 2 : ");
  scanf("%d/%d", num2, den2);
}

void add(int num1,int den1, int num2, int den2, int *num3, int *den3) {
  *num3 = num1*den2 + num2*den1;
  *den3 = den1*den2;
  int g = gcd(*num3, *den3);
  *num3 = *num3/g;
  *den3 = *den3/g;
}

void output(int num1, int den1, int num2, int den2, int num3, int den3) {
  printf("The sum of two fractions %d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, num3, den3);
}

int main() {
  int x1, x2, y1, y2, ans1, ans2;
  input(&x1, &x2, &y1, &y2);
  add(x1, x2, y1, y2, &ans1, &ans2);
  output(x1, x2, y1, y2, ans1, ans2);
  return 0;
}