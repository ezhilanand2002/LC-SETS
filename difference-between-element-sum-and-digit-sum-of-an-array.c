int differenceOfSum(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        int n=nums[i];
        sum+=n;
        while(n){
            sum-=n%10;
            n=n/10;
        }
    }
    return sum;
}
