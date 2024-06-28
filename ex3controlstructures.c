/*Suppose you want to associate noise loudness measured in decibels with the effect of noise. 
The following table shows the relationship between the noise levels and human perception of 
noise. 
Write a program whose input is the loudness of noise in decibels and outputs the human 
perception of the noises. 
Loudness in decibels (db) perception 
50 or lower quiet 
51-70 Intrusive 
71-90 annoying 
91-110 very annoying 
above 110 uncomfortable */

#include <stdio.h>

int main(void){
    int noise_db;

    printf("Enter the noise loudness is decibels(db): ");
    scanf("%d", &noise_db);

    if (noise_db<=50)
    {
        printf("%i - decibel noise is quiet \n", noise_db); 

    }
    else if (noise_db >= 51 && noise_db <= 70)
    {
        printf("%i - decibel noise is intrusive.\n", noise_db);
    }
    else if (noise_db >= 71 && noise_db <= 90)
    {
        printf("%i - decibel noise is annoying.\n", noise_db);
    }
    else if (noise_db >= 91 && noise_db <= 110)
    {
        printf("%i - decibel noise is very annoying.\n", noise_db);
    }
    else
    {
        printf("%i - decibel noise is uncomfortable.\n", noise_db);
    }
    

    return 0;
    
    
    
}
