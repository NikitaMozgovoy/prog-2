#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book{
	char title[40];
	char creator[40];
	char subject[40];
	char description[50];
	char publisher[40];
	char contributor[40];
	char date[10];
	char type[40];
	char format[40];
	char id[50];
	char source[50];
	char language[10];
	char relation[40];
	char coverage[40];
	char rights[131];
}obj1;
int main(){
	 strcpy(obj1.title , "The C book");
	 strcpy(obj1.creator , "Addison Wesley");
	 strcpy(obj1.subject , "Programming on C-language");
	 strcpy(obj1.description , "Book is describing variables and arithmetic, logical expressions and conditional operators, \
	 functions,arrays and pointers, data structures, preprocessor, features of C, libraries, examples of programs written on C.");
	 strcpy(obj1.publisher , "Addison Wesley");
	 strcpy(obj1.contributor , "Mike Banahan, Declan Brady and Mark Doran");
	 strcpy(obj1.date , "August 1, 1991");
	 strcpy(obj1.type , "Textbook");
	 strcpy(obj1.format , "E-book");
	 strcpy(obj1.id , "https://publications.gbdirect.co.uk//c_book/");
	 strcpy(obj1.source , "This is the full original text");
	 strcpy(obj1.language , "English");
	 strcpy(obj1.relation , "https://tproger.ru/books/clang-books/");
	 strcpy(obj1.coverage , "Actual for nowadays");
	 strcpy(obj1.rights , "By agreement with Declan Brady and Mark Doran, copyright in this online version and derived works is copyright Mike Banahan, 2003.");
	 printf("Title: %s \n", obj1.title);
	 printf("Creator: %s \n", obj1.creator);
	 printf("Subject: %s \n", obj1.subject);
	 printf("Description: %s \n", obj1.description);
	 printf("Publisher: %s \n", obj1.publisher);
	 printf("Contributors: %s \n", obj1.contributor);
	 printf("Date: %s \n", obj1.date);
	 printf("Type: %s \n", obj1.type);
	 printf("Format: %s \n", obj1.format);
	 printf("Identificator: %s \n", obj1.id);
	 printf("Source: %s \n", obj1.source);
	 printf("Language: %s \n", obj1.language);
	 printf("Realtion: %s \n", obj1.relation);
	 printf("Coverage: %s \n", obj1.coverage);
	 printf("Rights: %s \n", obj1.rights);
	return 0;
}
