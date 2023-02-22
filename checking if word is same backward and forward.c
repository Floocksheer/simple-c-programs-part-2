//
//  main.c
//  5.soru
//
//  Created by Ahmet Furkan Yorulmaz on 6.01.2023.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char words[]="radar";
    int b=0;
    int i=0;
    int size=strlen(words)-1;
    int j=size;
    while(i<=size){
        if(words[i]==words[j])
            i++;
            j--;
            b++;
    }
    if(b==i){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
