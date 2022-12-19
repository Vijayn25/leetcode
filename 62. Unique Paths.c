int uniquePaths(int m, int n){
    int Number = m+n-2;
    int ratio = n-1;
    double res = 1;
    for(int i=1;i<=ratio;i++){
        res = res * (Number - ratio + i)/i;
        
    }
    return (int)res;

}
