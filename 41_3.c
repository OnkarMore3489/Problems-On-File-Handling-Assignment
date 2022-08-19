/*
3. Write application which accept file name from user and read all data from that file 
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Data[30];
    
    fd=open("Demo.txt",O_RDONLY);

    read(fd,Data,sizeof(Data));
    printf("%s",Data);
    
    return 0;
}