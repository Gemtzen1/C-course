#include<stdio.h>

int ingrements;


int main()
{

int water;

int pot;

int eggs;


if(ingrements >5+5+5)
{
printf("more things\n");
}

else if(ingrements<2+2+2)
{
printf("less things\n");

}

else if(ingrements==5+5+5)
{
 printf("thats okay\n");
}


scanf(" %d %d %d",&water,&pot,&eggs);

return recipe(ingrements);


return 0;
}
int recipe()
{

int water;

int pot;

int eggs;

ingrements=water+pot*eggs;

}
