int subtractProductAndSum(int n) {
    int product=1,sum=0,rem;
    for(int i=0;n>0;i++)
    {
        rem=n%10;
        sum+=rem;
        product*=rem;
        n/=10;
    }
    return product-sum;
}
