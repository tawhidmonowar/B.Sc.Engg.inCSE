#include<stdio.h>

int main() {

   int arrayMain[100]={5,2,1,3,5},position,min,i,j;

   position = arrayMain[0];

   for(i=0;arrayMain[i]!='\0';i++)
   {
       for(j=1;j<5;j++)
       {
           if(position>arrayMain[j])
           {
               position = arrayMain[j];
           }
           printf("i=%d, j=%d\n",arrayMain[i],arrayMain[j]);
           printf("position = %d\n",position);
       }
   }

   return 0;
}
