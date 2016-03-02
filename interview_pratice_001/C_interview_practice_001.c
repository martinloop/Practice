#include <stdio.h>
#include <stdlib.h>
#include <assert.h> //for assert

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Martin@20160302 for struct practice

int strcmp(char *source, char *dest);//strcmp
char* strcpy(char* strDest, const char* strSrc); //strcpy

int main(int argc, char *argv[]) {
	
	char a[10];
	char *b = "ABC";
	strcpy(a, b);
	
	printf("a: %s\n", a);
	printf("b: %s\n", b);
	
	struct Employee
	{
		char id_no[12];
		char name[20];
		int age;
		int status;
	};
	
	//struct array
	struct Employee workers[50];
	
	//struct pointer
	struct Employee *ptr = &workers[15];	
	getchar();
	return 0;
}

//implement strcmp
int strcmp(char *source, char *dest)
{
	/*
	//ex1
	while(*source == *dest && *source != NULL)
	{
		source++;
		dest++;
	}
	if(*source == '\0' && *dest == '\0')
		return 0;
	return -1;*/
	//ex2
	
	while(source != NULL && dest != NULL)
	{
		while(*source++ == *dest++)
		{
			if(*source == '\0' && *source == '\0')
			{
				return 0;//same
			}
		}
		return -1;
	}
	return -1;
}

//implement strcpy
char* strcpy(char* strDest,const char* strSrc)
{
	assert((strSrc != NULL) && (strDest != NULL));
	char *address = strDest;
	while((*strDest++ = *strSrc++)!='\0');
	return address;
}
