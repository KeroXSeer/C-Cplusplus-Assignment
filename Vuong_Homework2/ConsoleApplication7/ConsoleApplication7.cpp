// Jimmy Vuong
// ConsoleApplication7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#define SIZE 80

int main(void) // void main
{
	printf("Enter 1 To read/write inn standard file." "Enter 2 to read/write in specific file."); // user choice
	int answer; // user choice answer
	scanf_s("%s", &answer); // scan answer

	if (answer == 1) //if user choice 1
	{
		FILE *pf; //File
		char sentence[SIZE]; //char sentence size limit to 80
		int i = 0; // i = 0;

		pf = fopen("String.txt", "r"); // open the text of String.txt

		if (pf == NULL) // if the pf cannot be found.
		{
			printf("Unable to open the file\n"); //print out this sentence.
		}
		printf("Enter a line of text:"); //user input in text
		scanf_s(sentence); // scan the text
		fgetc(pf); //get the sentence from file :write
		fprintf(pf, "%s", sentence); // print the sentence
		fputs("This sentence is:", pf); //puts print of the sentence: read
		fputs("This is what you type in!:", pf); //second parts of the print sentence
		fclose(pf); //close the file
		return 0;
	}
	else //other choice : specific file
	{
		FILE *pf; //read specific file
		char sentence[SIZE]; // character sentence with size limit to 80
		int i = 0; // i = 0

		pf = fopen("String.txt", "r+");//open the specific file read it

		if (pf == NULL) //if the file cannot be found
		{
			printf("Unable to open the file\n"); //print this when not found
		}
		printf("Enter a line of text:"); //user input sentence in specific file
		scanf_s(sentence); //scan the sentence
		fgetc(pf); //show the fgetc of the specific file.
		fprintf(pf, "%s", sentence); //print out the sentence of user type.
		fputs("This sentence is:", pf); //fputs of the sentence user input.
		fputs("This is what you type in!:", pf); //seond part of fputs
		fclose(pf); //close specific file
		return 0; //close file
	}
}
	//int c; // variable to hold character input by user
	//char sentence[SIZE]; // create char array
	//int i = 0; // initialize counter i
			   // prompt user to enter line of text
	//puts("Enter a line of text:");
	// use getchar to read each character
	//while ((i < SIZE - 1) && (c = getchar()) != '\n') {
		//sentence[i++] = c;
	//}
	//sentence[i] = '\0'; // terminate string

						// use puts to display sentence
	//puts("\nThe line entered was:");
	//puts(sentence);}

