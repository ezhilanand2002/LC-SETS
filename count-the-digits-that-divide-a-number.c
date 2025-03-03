int countDigits(int num) {
    int rem,count=0,original=num;

    while(num!=0)
    {
        rem=num%10;

       if(original%rem==0)
       count++;

        num/=10;
    }
    return count;
}
