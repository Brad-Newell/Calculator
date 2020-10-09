#include <stdio.h>
#include <math.h>

/*Function Declaration*/
int plus(int num1,int num2);
int minus (int num1, int num2);
int multiply (int num1, int num2);
void divide (int num1, int num2, int *quotient, int *remainder);

int main (){

  /* Local Variable Declaration*/
  int a;
  int b;
  int q;
  int r;
  int pl;
  int min;
  int mult;
  
  
  printf ("Enter a value for a:");
  scanf("%d", &a);

  printf("\na is: %d", a);

  printf ("\nEnter a value for b:");
  scanf("%d", &b);

  printf("\nb is: %d", b);
  
  /* calling a function to get the addition*/
  pl=plus(a, b);

  printf("\nAddition is:%d\n",pl);

  /* calling a function to get the subtraction*/
  min=minus(a, b);

  printf("Subtraction is:%d\n",min);

 /* calling a function to get the multiplication*/
  mult=multiply(a, b);

  printf("Multiplication is:%d\n",mult);

 /* calling a function to get the Division*/
  divide(a, b,&q, &r);

  printf("Quotient is:%d\nRemainder is: %d\n", q,r);

  return 0;
}

/* Function returning the addition of two numbers*/
int plus(int num1, int num2)
{
  /*Local variable Declaration*/
  int result1;

  result1= num1 + num2;

  return result1;

}

/* Function returning the subtraction of two numbers*/
int minus (int num1, int num2)

{ 
  /*Local variable Declaration*/
  int result2;

  result2= num1 - num2;

  return result2;
}

/* Function returning the multiplication of two numbers*/
int multiply (int num1, int num2)

{ 
  /*Local variable Declaration*/
  int result3;

  result3= num1 * num2;

  return result3;
}

/* Function returning the division of two numbers*/
void divide (int num1, int num2, int *quotient, int *remainder)


{ 
  /*Local variable Declaration*/
  
  
  *quotient = num1 / num2;
  *remainder = num1 % num2;


 
}








