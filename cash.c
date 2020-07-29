#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{

    float dollars;
    do {
   dollars = get_float("Change own: ");

    } while(dollars<0);

    int cents= round(dollars*100 );
    int coins=0;
 int denominations[]= { 25,10,5,1};
 int size = sizeof(denominations)/sizeof(int);
 for(int i=0;i<size;i++)
 {
     coins += cents/denominations[i];
     cents%=denominations[i];
 }
 printf("%i\n",coins);

}