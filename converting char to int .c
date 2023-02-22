//
//  main.c
//  1. soru
//
//  Created by Ahmet Furkan Yorulmaz on 3.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=1;
    int number=0;
    char nums[]="123";
    int size = sizeof(nums)-2;
    while(size>=0){
       number = number + (nums[size]-'0')*i;
        i=i*10;
        size--;
    }
    printf("%d",number);
    return 0;
}
