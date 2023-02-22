//
//  main.c
//  9.soru
//
//  Created by Ahmet Furkan Yorulmaz on 8.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arry[]="ahmetfurkanyorulmaz";
    int i=0;
    while(arry[i]!='\0'){
        i++;
    }
    printf("size is %d \n",i);
    return 0;
}
