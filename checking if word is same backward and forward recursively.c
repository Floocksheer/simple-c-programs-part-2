//
//  main.c
//  6.soru
//
//  Created by Ahmet Furkan Yorulmaz on 6.01.2023.
//

#include <stdio.h>
#include <string.h>
int bruh(char words[],long size,int i,int a){
    if(size<0){
        if(a==strlen(words)){
            return printf("yes");
        }
        else {
            return printf("no");
        }
    }
        if(words[i]==words[size]){
            return  bruh(words,size-1,i+1,a+1);
        }
        else {
            return bruh(words,size-1,i+1,a);
        }
    
}
int main(int argc, const char * argv[]) {
    char words[]="radar";
    int a=0;
    int i=0;
    long size= strlen(words)-1;
    bruh(words,size,i,a);
    return 0;
}
