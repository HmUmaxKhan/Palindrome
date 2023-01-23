#include<stdio.h>     // PALINDROME using DO While LOOP
int main(){
    //initialie the variables
    int n,a,b,c,d,e,digit;

    //Enter the five digit number
    printf("Please enter a five digit number.\n");

    //Taing input from the user
    scanf("%d",&n);

    //Using do while loop to store digits in different variables.
    do
    {
    a=n/10000;
    b=n/1000%10;
    c=n/100%10;
    d=n/10%10;
    e=n%10;
    } 
    while (digit>0);

//Applying condition for checking Palindrome number.
if ( a == e && b == d ) {
    printf( "Palindrome!\n" );
  }
  if ( a != e || b != d ) {
    printf( "Not a palindrome:(\n" );
  }
    return 0;
}