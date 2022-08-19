/*
5. Write a program which accepts file name and one count from user and read 
that number of characters from starting position.
Input : Demo.txt 12
Output : Display first 12 characters from Demo.txt
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void DisplayN(char[],int);
int main()
{
    int fd=0;
    char Fname[30];
    int iValue=0;

    printf("Enter the File Name : ");
    scanf("%s",Fname);

    printf("Enter no of character : ");
    scanf("%d",&iValue);

    DisplayN(Fname,iValue);
    return 0;
}
void DisplayN(char Fname[],int iSize)
{
    int fd=0,iRet=0,iCnt=0,i=0;
    char Data[1024];
    fd=open(Fname,O_RDONLY);

    iRet=read(fd,Data,iSize);

    write(1,Data,iRet);
}