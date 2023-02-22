//
//  main.c
//  21.soru
//
//  Created by Ahmet Furkan Yorulmaz on 9.01.2023.
//

#include <stdio.h>
#include <string.h>
char * bruh(char arry[],long size,int i){
    while(i<size){
        if(arry[i]==' ')
        arry[i]='/';
        i++;
    }
    return arry;
}
int main(int argc, const char * argv[]) {
    char arry[]="merhaba ben furkan";
    long size= strlen(arry)-1;
    int i=0;
    printf("%s",bruh(arry,size,i));
    
    return 0;
}
