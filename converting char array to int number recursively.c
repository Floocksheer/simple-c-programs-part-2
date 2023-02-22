//
//  main.c
//  2. soru
//
//  Created by Ahmet Furkan Yorulmaz on 3.01.2023.
//

#include <stdio.h>
int numrec(char nums[],int size,int i){
    int a = nums[size-1];

    if(size>0)
                return(a-'0')*i + numrec(nums,size-1,i*10);
    return 0;
}
                        

int main(int argc, const char * argv[]) {
    int i=1;
    char nums[]="123";
    int size = sizeof(nums)-1;
    printf("%d",numrec(nums,size,i));
    return 0;
}
