#include<stdio.h>
#include<conio.h>
#include<string.h>


int main() {

    char a[][10] = {"abc", "cra", "bcd"};
    char t[20];
    int i, j, o ,p;
    int size = sizeof(a)/sizeof(a[0]);
    
    for(i = 0; i < size - 1; i++) {
        o = strlen(a[i]) - 1;
        for(j = i + 1; j < size; j++) {
           p = strlen(a[j]) - 1;     
            if(a[i][o] > a[j][p]) {
                strcpy(t, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], t);
                break;
            }

        }
    }

    for(i = 0; i < size; i++) {
        printf("%s\n", a[i]);
    }

    

    
    return 0;
}