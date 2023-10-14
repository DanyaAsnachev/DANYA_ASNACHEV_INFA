#include <stdio.h>

int longest_word(const char str[], char result[]) 
{
    int MAX_l = 0, time_l = 0, start = 0, MAX_start = 0;
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
        {
            if (time_l > MAX_l) 
            {
                MAX_l = time_l;
                MAX_start = start;
            }
            
            time_l = 0;
            start = i + 1; 
        }
        else 
            time_l += 1;
    }
    if (time_l > MAX_l) 
        {
            MAX_l = time_l;
            MAX_start = start;
        }   
    for (int i = 0; i < MAX_l; i++) 
        result[i] = str[MAX_start + i];
    
    return MAX_l;
}

int main() {
    char str[1000];
    scanf("%[^\n]", str);
    char result[1000];
    int l = longest_word(str, result);
    
    printf("%i\n", l);
    printf("%s\n", result);
}