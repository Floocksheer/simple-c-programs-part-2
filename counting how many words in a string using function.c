//
//  main.c
//  17.soru
//
//  Created by Ahmet Furkan Yorulmaz on 9.01.2023.
//

#include <stdio.h>
#include <string.h>
int bruh(char arry[]){
    long size= strlen(arry);
    int i=0;
    int b=0;
    while(i<=size){
        if(arry[i]==' '||arry[i]=='\0')
            b=b+1;
        i++;
            }
    return b;
}
int main(int argc, const char * argv[]) {
    char arry[]="ahmet furkan yorulmaz";
    printf("%d\n",bruh(arry));
    return 0;
}
