//
//  main.c
//  7.soru
//
//  Created by Ahmet Furkan Yorulmaz on 7.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char nums[]="13:456:65368";
    long size=strlen(nums)-1;
    char arry[size];
    int i=0;
    int b=0;
    while(i<=size){
        if(nums[i]!=':'){
            arry[b]=nums[i];
        }
        if(nums[i]==':'){
            arry[b]=',';
        }
        i++;
        b++;
    }
    printf("%s",arry);
    
    return 0;
}
