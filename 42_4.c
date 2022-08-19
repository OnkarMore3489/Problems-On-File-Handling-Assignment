/*
4. Write a program which accepts file name and one character from user and 
count number of occurrences of that characters from that file.
Input : Demo.txt ‘M’
Output : Frequency of M is 7
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int CountChar(char[],char);
int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char cValue='\0';

    printf("Enter the File Name : ");
    scanf("%s",Fname);

    printf("Enter that character that u want to find freq : ");
    scanf(" %c",cValue);

    iRet=CountChar(Fname,cValue);
    printf("Frequency of that Characters is :%d\n",iRet);
    return 0;
}
int CountChar(char Fname[],char ch)
{
    int fd=0,iRet=0,iCnt=0,i=0;
    char Data[1024];
    fd=open(Fname,O_RDWR);

    while((iRet=read(fd,Data,sizeof(Data)))!=0)
    {
       for(i=0;i<iRet;i++)
       {
        if(Data[i]==ch)
        {
           iCnt++;
        }
       }
    }
    return iCnt;
}