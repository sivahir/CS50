#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;
    do{
          //user input
        n=get_int("Height:");
    }
    while(n<1 || n>8); // loop conditon for input not between 1 and 8
    for(int i=0;i<n;i++) //loop to print # vertically
    {

        for(int j=0;j<n;j++) //loop to print # horizontally
        {
             printf("\n");
             if(i+j<n-1) //to put blank space in place # to form pyramid from rectangle
             printf(" ");
             else
             printf("#"); //print # in way to print pyramid
             printf("\n");
        } 
    }
        printf("\n"); //print every iteration in new line

    }
