#include <iostream>

int* productSelf(int* nums,int numsSize, int* returnSize, int** outputInt){

    int tmp=1;

    int* answer=(int *)malloc(sizeof(int)*numsSize);
    if(answer==NULL) return NULL;

        for(int left=0; left<numsSize; left++){
        answer[left]=tmp;
        tmp*=nums[left];
    }

    tmp=1;
    for(int right=numsSize-1; right>=0; right--){
        answer[right]*=tmp;
        tmp*=nums[right];
    }

    std::cout<<answer[0];
    std::cout<<"\n";
    std::cout<<answer[1];
    std::cout<<"\n";
    std::cout<<answer[2];
    std::cout<<"\n";
    std::cout<<answer[3];
    std::cout<<"\n";

    *returnSize=numsSize;
    *outputInt=answer;

    return answer;
}

int main()
{
    int inputInt[4]={1,2,3,4};
    int outputSize;
    int* outputIntMul;
    int* outputInt;
    int* temp;
    int* temp1;
    int* temp2;

    outputInt=productSelf(inputInt,4,&outputSize, &outputIntMul);
    if (outputInt!=NULL)
{
    for(int i=0;i<outputSize;i++){
    std::cout<<outputInt[i];
//    outputInt++;
    std::cout<<"\n";
    std::cout<<outputIntMul[i];
    std::cout<<"\n";
    }
}
    free(outputInt);
    return 1;
}