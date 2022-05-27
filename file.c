#include<stdio.h>
#include<stdlib.h>

void main ()
{
    FILE*fp=NULL;
    char str[50]="sohail";
    fp=fopen("abc.txt","w");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs(str,fp);
    fclose(fp);
}












