#include<stdio.h>

char name[44];


char Say_It(char name)
{
 printf("%c",name);
}


int main()
{
scanf("%c",&name);

  if(name == "tom")
   {
    Say_It("MEH MEH MEH");
   }
    else if(name == "hero")
    {
      Say_It("BLAH BLAH BLAH");
    }
  return 0;
}

