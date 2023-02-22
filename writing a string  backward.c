//
//  main.c
//  14.soru
//
//  Created by Ahmet Furkan Yorulmaz on 8.01.2023.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char arry[]="123";
    long size=strlen(arry)-1;
    char nums[size];
    int i=0;
    while(arry[i]!='\0'){
        nums[size]= arry[i];
        i++;
        size--;
    }
    printf("%s",nums);
    return 0;
}
