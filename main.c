#include <stdio.h>

/*Function Declaration*/
int plus(int num1,int num2);
int minus (int num1, int num2);
int multiply (int num1, int num2);
int divide (int num1, int num2);

int main (){

  /* Local Variable Declaration*/
  int a;
  int b;
  int pl;
  int min;
  int mult;
  int div;
  
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

  printf("Multiplication is:%d\n",min);

 /* calling a function to get the Division*/
  div=divide(a, b);

  printf("Division is:%d\n",div);

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
int divide (int num1, int num2)

{ 
  /*Local variable Declaration*/
  int result4;

  result4= num1 / num2;

  return result4;
}








