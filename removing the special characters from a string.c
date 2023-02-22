#include <stdio.h>
#include <stdlib.h>
int bruh(char arry[],char newarry[]){
    int i=0,j =0;
    while(i < 16){
        if(('A'<= arry[i] && arry[i] <='Z') ||('a'<= arry[i] && arry[i] <='z')){
        newarry[j] = arry[i];
            j++;
            i++;
        }
        else i++;
    }
    return newarry;
}
int main() {
    char arry[] = "ich!,b)in4furkan";
    char newarry[128];

    printf("%s",bruh(arry,newarry));
    return 0;
}
