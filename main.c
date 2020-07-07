/*
Daniel Minami <minamid@sheridancollege.ca>
----------------------------------------------------------------------
 * 
 * Challenge description: Implement an algorithm to determine if a string has 
 * all unique characters. What if you cannot use additional data structures?
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 50
#define FLUSH stdin=freopen(NULL,"r",stdin)

int isUniqueCharStrings(char* str);

int main() {

    printf("Please enter a String: ");
    
    char str[MAX_LEN] = "";
    
    fgets(str, MAX_LEN, stdin);
    str[strcspn(str,"\n")]=0;
    FLUSH;
    
    int result = isUniqueCharStrings(str);
    if (result == 0) {
        printf("String %s has Unique Characters.", str);
    } else {
        printf("String %s does not have Unique Characters.", str);
    }
    
    exit(0);
}

int isUniqueCharStrings(char* str) {

    char current;
    int i, j;
    
    for (i=0; i<strlen(str); i++) {
        current = str[i];
        for (j = i+1; j<strlen(str); j++) {
            if (current == str[j]){
                return 1;
            }
        }
    }
    
    return 0;
    
}