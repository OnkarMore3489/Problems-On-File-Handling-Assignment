/*
4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Data[1024];
    
    fd=open("Demo.txt",O_RDONLY);

    // iRet=read(fd,Data,sizeof(Data));
    // printf("File size is %d byte",iRet);
    
    while ((iRet=read(fd,Data,sizeof(Data)))!=0)
    {
        printf("%d",iRet);
    }
    
    return 0;
}