long long int countStr(long long int n){
    //complete the function here
    
    
    
    if(n==1){
       return 3;
   }
   long long int ab1=n;
   long long int ac1=n;
   long long int ab1c1=n*(n-1);
   long long int ac2=(n*(n-1))/2;
   long long int b1c2=(n*(n-1)*(n-2))/2;
   long long int ans=1+ab1+ac1+ab1c1+ac2+b1c2;
   return ans;
}
