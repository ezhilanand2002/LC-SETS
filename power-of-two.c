bool isPowerOfTwo(int n) {
    if(n <= 0) 
    return false;
    int max = pow(2, 30);
    return (max % n == 0); 
}
