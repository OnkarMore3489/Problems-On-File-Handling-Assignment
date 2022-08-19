/*
1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Fname[10];
    printf("Enter the file name that u want to create : \n");
    scanf("%s",Fname);
    
    fd=creat(Fname,0777);
    if(fd==-1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully\n");
    }

    fd=open(Fname,O_RDONLY);
    
    return 0;
}