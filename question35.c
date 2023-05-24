#include <stdio.h>
#include <string.h>
int main(){
    
    char sentence[30] = "Hello There!";

    int numberOfCharacters = 0, numberOfWords = 1;

    for(int i = 0; sentence[i]!='\0'; i++){
        numberOfCharacters++;
        if(sentence[i] == ' '){
            numberOfWords++;
        }
    }
    
    printf("%d %d", numberOfCharacters, numberOfWords);

    return 0;
}