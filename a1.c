#include <stdio.h>  
main(){  
   FILE *fp;  
   fp = fopen("a1.txt", "w");//opening file  
   fprintf(fp, "sbdxsadxbsjd...\n");//writing data into file  
   fclose(fp);//closing file  
}  

