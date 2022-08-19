/*
1. Write a program which accepts file name from user and count number of 
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int CountCapital(char[]);
int main()
{
    int fd=0,iRet=0;
    char Fname[30];

    printf("Enter the File Name : ");
    scanf("%s",Fname);

    iRet=CountCapital(Fname);
    printf("No Of Capital Characters is :%d\n",iRet);
    return 0;
}
int CountCapital(char Fname[])
{
    int fd=0,iRet=0,iCnt=0,i=0;
    char Data[1024];
    fd=open(Fname,O_RDONLY);

    while((iRet=read(fd,Data,sizeof(Data)))!=0)
    {
       for(i=0;i<iRet;i++)
       {
        if(Data[i]>='A' && Data[i]<='Z')
        {
           iCnt++;
        }
       }
    }
    return iCnt;
}