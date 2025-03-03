/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int *arr1, int arr1Size, int *arr2, int arr2Size, int *returnSize){
    int common[1001] = {-1};
    int *result = (int*)malloc(arr1Size*sizeof(int));
    int resultSize = 0;
    int i;
    for(i=0;i<1001; i++){
        common[i] = -1;
    }
    for(i=0;i<arr1Size; i++){
        common[arr1[i]] = arr1[i];
    }
    for(i=0;i<arr2Size;i++){
        if(common[arr2[i]] == arr2[i]){
            common[arr2[i]] = -1;
            result[resultSize] = arr2[i];
            resultSize++;
        }
    }
    *returnSize = resultSize;
    return result;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    if(nums1Size < nums2Size){
        return intersect(nums1, nums1Size, nums2, nums2Size, returnSize);
    }
    else{
        return intersect(nums2, nums2Size, nums1, nums1Size, returnSize);
    }
}
