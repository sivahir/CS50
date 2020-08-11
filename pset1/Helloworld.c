#include<stdio.h>
#include<cs50.h> //Include libraries

//Returns no value
int main(void)
{
    //Gets user input.
    string name = get_string("What is your name?\n:");
    //Prints user input.
    printf("Hello, %s", name);
}
