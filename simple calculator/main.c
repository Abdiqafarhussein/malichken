/*
simple calculator
by Abdiqafar hussein
last updated on 15th fe, 2022
C89 compiler
MIT LICENSE
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{  //Variable declaration
    char name[100];
    int n1,n2,sum,product,diff;
    float qout;

    printf{"Simple calculator!\n");

    //input
printf["Enter your name"};
gets{name};
printf{"Enter two integers:"};
scanf{"%d%d",&n1,&n2};

//Compilations
sum=n1+n2;
diff=n1-n2;
product=n1*n2;
quot={float} n1/n2;

//output
printf{"Hey%s, here are the results:\n",name};
printf{"%d+%d=%d",n1, n2,sum};
printf{"%d-%d=%d",n1,n2,diff};
printf{"%d*%d=%d",n1,n2,product};
printf{"%d/%d=%d",n1,n2,qout};
return 0;
