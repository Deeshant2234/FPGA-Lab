#include<stdio.h>

// Function for OR logic
int OR_logic(int x,int y)
{
    if(x==1 && y==1)
     return 1;
    if(x==1 && y==0 || x==0 && y==1)
     return 1;
    if(x==0 && y==0)
     return 0;
}

// Function for AND logic
int AND_logic(int x,int y)
{
    if(x==1 && y==1)
     return 1;
    else
     return 0;
}

// Function for NOT logic
int NOT_logic(int x)
{
    if(x==1)
      return 0;
    else
     return 1;
}

// logic for NOT
int if_then_logic(int x,int y)
{
    if(x==1 && y==1)
     return 1;
    if(x==1 && y==0)
     return 0;
     if(x==0 && y==1)
     return 1;
    if(x==0 && y==0)
     return 1;
}


int main()
{
   int p,q,r,s;

   p= OR_logic(NOT_logic(AND_logic(0,0)),if_then_logic(NOT_logic(0),0));

   q= OR_logic(NOT_logic(AND_logic(0,1)),if_then_logic(NOT_logic(0),1));

   r= OR_logic(NOT_logic(AND_logic(1,0)),if_then_logic(NOT_logic(1),0));

   s= OR_logic(NOT_logic(AND_logic(1,1)),if_then_logic(NOT_logic(1),1));

    if((p&&q&&r&&s)==1)
    printf("The given proposition is a tautology");

    else if ((p&&q&&r&&s)==0)
        printf("The given proposition is a contradiction");

    else
        printf("The given proposition is a contingency");
}
