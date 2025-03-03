char ** summaryRanges(int* nums, int numsSize, int* returnSize){
    *returnSize = 0;
    char** ret = NULL;
    if (numsSize == 1)
    {
        int stlen = (log10(INT_MAX) + 3); // enough space for ints of max length, null terminator, and neg sign
        ret = (char**) malloc(sizeof(char*) * numsSize);
        
        ret[0] = (char*) malloc(sizeof(char) * stlen);
        sprintf(ret[0], "%d", nums[0]);
        
        (*returnSize)++;
    }
    else if (numsSize > 1)
    {
        int i, start, j;
        int stlen = ((log10(INT_MAX) + 2) * 2) + 3; // enough space for ints of max length, null terminator, arrow, and neg sign
        ret = (char**) malloc(sizeof(char*) * numsSize);
        
        for (i = 1, start = nums[0], j = 0; i < numsSize; i++)
        {
            if (nums[i] != (nums[i - 1] + 1))
            {
                ret[j] = (char*) malloc(sizeof(char) * stlen);
                (nums[i - 1] - start > 0) ? sprintf(ret[j++], "%d->%d", start, nums[i - 1]) : sprintf(ret[j++], "%d", nums[i - 1]);
                start = nums[i];
                (*returnSize)++;
            }
        }
        
        (*returnSize)++;
        ret[j] = (char*) malloc(sizeof(char) * stlen);
        (nums[i - 1] - start > 0) ? sprintf(ret[j++], "%d->%d", start, nums[i - 1]) : sprintf(ret[j++], "%d", nums[i - 1]);
    }
    
    return ret;
}
