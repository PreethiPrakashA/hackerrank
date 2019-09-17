int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,j;
    int sum = 0;
    int sum2 = 0;
    int diff;
    for(i=0; i<arr_rows; i++)
    {
        sum = sum + arr[i][i];
        sum2 = sum2 + arr[i][arr_rows-1-i];  
        
     }
     diff = abs(sum - sum2);
     return diff;


}
