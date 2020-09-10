#include<stdio.h>
#include<string.h>

char* string_checker(char* str) {
    int n = strlen(str);
    int flag = 0;
    for(int i = 0; i < n-1; i++) {
        if((str[i] == 'a') && (str[i+1] == 'b') && (str[i+2] == 'b')) {
            flag++;
            break;
        }
    }
    if(flag == 0) {
        return "NOT ACCEPTED";
    } else {
        return "ACCEPTED";
    }
}

char* string_genrator() {
    
}

int main() {
    char* s = "aabbaaba";
    char* response = string_checker(s);
    printf("%s\n", response);
    return 0;
}