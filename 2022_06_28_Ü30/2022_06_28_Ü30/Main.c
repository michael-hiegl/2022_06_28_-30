//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_28_Ü30	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/28/2022 6:38:19 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
void Funktion(int* Array)
{
	printf("Adresse ist %p\n", Array);
	for (int i = 0; i < 4; i++)
	{
		int Element = *(Array + i);
		printf("Das %i Element ist %i\n", i, Element);
	}
	printf("\n");
}


int main(void)
{
	//Variables
	int Array[] = { 1,2,4,8 };
	int* ptr = NULL;
	ptr = Array;



	//Code
	Funktion(Array);
	Funktion(&Array[0]);
	Funktion(ptr);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}