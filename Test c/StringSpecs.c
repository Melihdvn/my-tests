#include <stdio.h>
int main() {

  char letter[150];
  int vowels, upper, lower, space ;
  lower = upper = vowels = space = 0;

  printf("Enter a line of string: ");
  fgets(letter, sizeof(letter), stdin);

  int i = 0;
  while (letter[i] != '.') 
  {
		if((letter[i]>='a') && (letter[i]<='z'))
		{
		    lower++;
	    }
	      
	    else if((letter[i]>='A') && (letter[i]<='Z'))
		{
		    upper++;
	    }
		else if (letter[i] == ' ')
		{
      		space++;
    	}

    	if (letter[i] == 'a' || letter[i] == 'e' || letter[i] == 'i' || letter[i] == 'o' || letter[i] == 'u' 
		 || letter[i] == 'A' || letter[i] == 'E' || letter[i] == 'I' || letter[i] == 'O' || letter[i] == 'U') 
		{
      		++vowels;
   		}
	++i;
  }
  int word = space + 1;
  int total = upper + lower;
  printf("Total letters: %d", total);
  printf("\nUppercase: %d", upper);
  printf("\nLowercase: %d", lower);
  printf("\nVowels: %d", vowels);
  printf("\nWords: %d", word);

  return 0;
}