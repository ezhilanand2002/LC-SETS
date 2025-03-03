int* findDisappearedNumbers(int* nums, int size, int* returnSize) {
    int *arr = malloc(4*size);
    int hash[1000000]={0};
    for(int i=0;i<size;i++)
    {
        hash[nums[i]]++;
    }
    int ind=0;
    for(int i=1;i<=size;i++)
    {
        if(hash[i]==0) arr[ind++]=i;
    }
    *returnSize = ind;
    return arr;
}
