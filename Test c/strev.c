#include <stdio.h>  
#include <string.h>  
  
// function definition of the revstr()  
char* ce103_strrev(char* fiStr)  
{  
    // declare variable  
    int i, len, temp;  
    len = strlen(fiStr); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = fiStr[i];  
        fiStr[i] = fiStr[len - i - 1];  
        fiStr[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50]; // size of char string  
        printf (" Enter the string: ");  
        gets(str); // use gets() function to take string  
          
        printf (" \n Before reversing the string: %s \n", str);  
          
        // call revstr() function   
        ce103_strrev(str);  
        printf (" After reversing the string: %s", str);  
    }  