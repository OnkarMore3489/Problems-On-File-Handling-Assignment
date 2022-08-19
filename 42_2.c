/*
2. Write a program which accepts file name from user and count number of 
small characters from that file.
Input : Demo.txt
Output : Number of small characters are 21
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int CountSmall(char[]);
int main()
{
    int fd=0,iRet=0;
    char Fname[30];

    printf("Enter the File Name : ");
    scanf("%s",Fname);

    iRet=CountSmall(Fname);
    printf("No Of Small Characters is :%d\n",iRet);
    return 0;
}
int CountSmall(char Fname[])
{
    int fd=0,iRet=0,iCnt=0,i=0;
    char Data[1024];
    fd=open(Fname,O_RDONLY);

    while((iRet=read(fd,Data,sizeof(Data)))!=0)
    {
        for(i=0;i<iRet;i++)
       {
        if(Data[i]>='a' && Data[i]<='z')
        {
           iCnt++;
        }
       }
    }
    return iCnt;
}