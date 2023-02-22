//
//  main.c
//  8.soru
//
//  Created by Ahmet Furkan Yorulmaz on 7.01.2023.
//

#include <stdio.h>
int bruh(int size,int nums[],int i,int max){
    if(i == size){
        return max;
    }
    else{
        if(nums[i+1]>max)
        max=nums[i+1];
        return bruh(size,nums,i+1,max);
    }
}
int main(int argc, const char * argv[]) {
    int nums[]={1,2,5,4,7,3};
    int size=sizeof(nums)/sizeof(nums[0]);
    int i=0;
    int max=nums[i];
    printf("%d",bruh(size,nums,i,max));
    return 0;
}
