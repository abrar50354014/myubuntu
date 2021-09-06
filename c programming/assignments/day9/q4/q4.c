// C Program to count no of vowels and letters
// the Number of letters in a Text File
  
#include <stdio.h>
#define MAX_FILE_NAME 100
  
int main()
{
    FILE* fp;
  
    // Character counter (result)
    int count = 0;
  
    char filename[MAX_FILE_NAME];
  
    // To store a character read from file
    char c;
  
    
    printf("Enter file name: ");
    scanf("%s", filename);
  
    // Open the file
    fp = fopen(filename, "r");
  
    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s",
               filename);
        return 0;
    }
  
    // Extract characters from file
    for (c = getc(fp); c != EOF; c = getc(fp))
  
        // Increment count for this character
        count = count + 1;
  
    // Close the file
    fclose(fp);
  
    // Print the count of characters
    printf("The file %s has %d characters\n ",
           filename, count);
           
           
    
    // number of vowels in the file
int no_of_vowels(char filename[MAX_FILE_NAME]) 
{
        
    
    FILE* fp;
    char c;
    int count = 0;    // variable to store vowel count
    fp = fopen(filename, "r");
    
    if (fp == NULL) 
    {
        printf("UNABLE TO OPEN THE FILE");
        return -1;
    }
    
    while ((c = fgetc(fp)) != EOF) 
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++count;        
        }
    }
    
    return count;
    
}
    printf("\n");
    printf("Number of Vowels = %d", no_of_vowels(filename));
  
    return 0;
}
