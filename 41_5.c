/*
5. Write application which accept file name from user and one string from user. Write 
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Data[20];
    
    fd=open("Demo.txt",O_RDWR | O_APPEND);

    printf("Enter tha data that you want to write in the file : ");
    scanf("%s",Data);
     
    write(fd,Data,sizeof(Data));
    
    return 0;
}