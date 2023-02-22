//
//  main.c
//  10.soru
//
//  Created by Ahmet Furkan Yorulmaz on 8.01.2023.
//

#include <stdio.h>
int bruh(char arry[],int i){
    if(arry[i]=='\0'){
        return i;
    }
    else{
        return bruh(arry,i+1);
    }
}

int main(int argc, const char * argv[]) {
    char arry[ ]="ahmetfurkanyorulmaz";
    int i=0;
    printf("%d\n",bruh(arry,i));
    return 0;
}
