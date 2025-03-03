int arraySign(int* nums, int numsSize) {
    int neg_count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0)
            neg_count++;
        else if (nums[i] == 0)
            return 0;
    }
    return (neg_count % 2 == 0) ? 1 : -1;
}
