//
//  main.c
//  20.soru
//
//  Created by Ahmet Furkan Yorulmaz on 9.01.2023.
//

#include <stdio.h>
#include <string.h>
struct breh{
    char max[26];
    char min[26];
};
struct breh bruh(char sent[],long size){
    struct breh u;
    int i=0;
    int count;
    int a=0;
    while(sent[i]!='\0'){
        while(sent[i]!=' '){
            count++;
            i++;
        }
        if(a<count){
            a=count;
        }
        i++;
    }
    
}
int main(int argc, const char * argv[]) {
    char sent[]="merhaba benim adım furkan";
    long size=strlen(sent);
    struct breh u= bruh(sent,size);
    
   
    return 0;
}
