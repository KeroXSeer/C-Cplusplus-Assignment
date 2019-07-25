// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

/*Jimmy Vuong 9/13/16*/
#include "stdafx.h"


int main()
{
	int n; /*n is the integer where the use input, to find the sequence in Fibonacci*/
	int first = 0; /*the first integer is always = to 1*/
	int second = 1; /*the second integer is always = to 2*/
	int next; /*the next integer is the sum of first and integer*/
	int c; /*counting*/

	printf("Enter the number of terms(For this homework type the number 13)\n"); /*Allow user to input number to find the sequence in Fibonacci, but for this homework type 13.*/
	scanf_s("%d", &n); /*It scan the user input and print on "&d" and store in n*/

	printf("First %d terms of Fibonacci series are :-\n", n);
	/*For loop*/
	for (c = 0; c < n; c++) /*c is equal to 0, so c < n, if user input n is higher than c, then c is continue to add +1 until it cannot be higher than n*/
	{
		/*if c is equal to or less than 1, then c is automaticall 1 and then 1, which it is first two sequence of Fibonacci*/
		if (c <= 1)
			next = c;
		/*if c is greater than 1, then it follow of loop where next is sum of first and second where first is replace by second integer and second is replace by next integer and repeat process until it is complete c*/
		else
		{
			next = first + second; /*the next integer is the sum of first and second*/
			first = second; /*the first is repleace by second*/
			second = next; /*the second is replace by the next*/
		}
		printf("%d\n", next); /*print out the result of next and continue doing it until it for loop stop*/
	}

	return 0; /*end of program*/
}

