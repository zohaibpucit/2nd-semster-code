#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////#include<stdlib.h>
////#include<string.h>
////struct student
////{
////	char name[30]; 
////	int roll;
////	int age;
////};
////int main()
////{
////	struct student s1 = {"z",1,2};
////	printf("Enter name of student >");
////	gets(s1.name);
////	printf("%s", s1.name);
////	printf("Enter roll number >");
////	scanf("%d", &s1.roll);
////	printf("Enter age >");
////	scanf("%d", &s1.age);
////	FILE* fp = fopen("zohaib.", "wb");
////	if (fp != NULL)
////	{
////		fwrite(&s1, sizeof(s1), 1, fp);
////	}
////	fclose(fp);
////	return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct student
//{
//	char name[30];
//	int roll;
//	int age;
//};
//int main()
//{
//	struct student s2= { "z",1,2 };
//	
//	FILE* fa = fopen("my.bin", "rb");
//	//FILE* dyo = fopen("my.bin", "wb");
//	if (fa != NULL)
//	{
//		fread(&s2, sizeof(s2), 2, fa);
//		//fwrite(&s2, sizeof(s2), 2, dyo);
//		
//	}
//		printf("name:%s\n", s2.name);
//		printf("roll:%d\n", s2.roll);
//		printf("age:%d\n", s2.age);
//	fclose(fa);
////	fclose(dyo);
//	return 0;
//}
#include <stdio.h>
//
int main()
{
	//declaring a file pointer
		FILE* filePointer;

	//initializing a char array which we have to write into the file
		char str[] = "Hello World";
	printf("%d", sizeof(str));
//	opening the file in write mode
		filePointer = fopen("test.txt", "w");

//	using fwrite(), writing the above char array into the specified file
		fwrite(str, 1, 5 - 1, filePointer);

//	closing the file
		fclose(filePointer);

	return 0;
}