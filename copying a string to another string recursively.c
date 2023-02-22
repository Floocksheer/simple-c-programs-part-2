//
//  main.c
//  14.soru recursive
//
//  Created by Ahmet Furkan Yorulmaz on 8.01.2023.
//

#include <stdio.h>
#include <string.h>
char * bruh(char arry[],char nums[],int i,long size){
    if(arry[i]=='\0'){
        return nums;
    }
    else{
        nums [size]= arry[i];
        return bruh(arry,nums,i+1,size-1);
    }
}

int main(int argc, const char * argv[]) {
    char arry[]="123";
    long size=strlen(arry)-1;
    char nums [size];
    int i=0;
    printf("%s",bruh(arry,nums,i,size));
    return 0;
}
