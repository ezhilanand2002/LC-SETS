int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    /* Sort two arrays */
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);

    int result = 0;
    int i = 0;
    int j = 0;

    /* Using two pointers to search that the content the child could get smaller as possile cookie */
    while (i < gSize && j < sSize) {
        // Skip the cookie no child want it
        while (j < sSize && g[i] > s[j]) 
            ++j;
        
        if (i < gSize && j < sSize)
            ++result;
            
        ++i;
        ++j;
    }

    return result;
}
