/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   fp=fopen("information.txt","w");
   
   if(fp==NULL)
     printf("No File.....");
     
  char sentence[1000];
  printf("Please enter a sentence:");
  fgets(sentence,1000,stdin);
  fprintf(fp,"%s",sentence);
  
  fclose(fp);
  
  fp=fopen("information.txt","r");
  char ch;
  
  while((ch=getc(fp))!=EOF){
      printf("%c\n",ch);
  }
  
  
   fclose(fp);
   printf("File process completed.....");
  
   

    return 0;
}
