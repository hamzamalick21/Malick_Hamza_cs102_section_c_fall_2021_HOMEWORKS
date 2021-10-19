/* https://beginnersbook.com/2015/02/c-program-to-sort-set-of-strings-in-alphabetical-order/ */
#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count = 3;
   char str[25][25],temp[25];
  

   puts("Enter 3 Strings: ");
   for(i=0;i<count;i++)
      gets(str[i]);
   for(i=0;i<count;i++)
      for(j=i+1;j<count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Order of Sorted Strings: \n");
   for(i=0;i<count;i++)
      puts(str[i]);
   
   return 0;
}
