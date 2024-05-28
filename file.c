#include <stdio.h> 
/*int main() 
{ 
 FILE *f1; 
 char C; 
 
 printf("Data input:\n"); 
 f1 = fopen("Input.txt", "w"); // open the file 
 
 while ((C = getchar()) != EOF) // get character from the keyboard 
 { 
 putc(C, f1); // write the characters to "Input.txt" 
 } 
 
 fclose(f1); 
 
 printf("Data output:\n"); 
 f1 = fopen("Input.txt", "r"); // reopen the file "Input.txt" 
 
 while ((C = getc(f1)) != EOF) { 
 printf("%c", C); 
 } 
 
 fclose(f1); 
 
 return 0; 
} */
#include <stdlib.h>

int main(){
    FILE *filePointer;
    filePointer = fopen("mukundi.txt","w");
    if (filePointer == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    char data[1000];
    printf("Enter data:\n");
    fgets(data, sizeof(data), stdin);
    fprintf(filePointer,"%s",data);
    fclose(filePointer);
    filePointer = fopen("mukundi.txt","r");
    if (filePointer == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Data from file:\n");
    while (fgets(data,sizeof(data),filePointer) != NULL)
    {
        printf("%s",data);
    }
    fclose(filePointer);
    return 0;
    


}

   