int sort(const void*a,const void*b){
    return (*(int*)a - *(int*)b);
}
int* numberGame(int* nums, int size, int* returnSize) {
    int *arr = malloc(4*size);
    int alice,bob,ind=0;
    qsort(nums,size,4,sort);
    for(int i=0;i<size-1;i+=2)
    {
        alice = nums[i];
        bob = nums[i+1];
        arr[ind++]=bob;
        arr[ind++]=alice;
    }
    *returnSize = size;
    return arr;
}
