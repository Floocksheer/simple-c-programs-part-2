//
//  main.c
//  16.soru
//
//  Created by Ahmet Furkan Yorulmaz on 9.01.2023.
//

#include <stdio.h>
struct breh{
    int max;
    int min;
    float ave;
};
struct breh bruh(struct breh u,int nums[], long size){
    float ave=0;
    int max=nums[0], min=nums[0];
    int i=0;
    int z=0;
    while(i<size){
        if(max<nums[i])
           max=nums[i];
        i++;
    }
    i=0;
    while(i<size){
        if(nums[i]<min)
           min=nums[i];
        i++;
    }
    i=0;
    while(i<size){
        z=z+nums[i];
       ave=z/size;
        i++;
    }
    u.max=max;
    u.min=min;
    u.ave=ave;
    return u;
    
}
int main(int argc, const char * argv[]) {
    
    int nums[]={1,6,3,8,4};
    long size= sizeof(nums)/sizeof(nums[0]);
    struct breh u=bruh(u,nums,size);
    printf("%d,%d,%f",u.max,u.min,u.ave) ;
    return 0;
}
