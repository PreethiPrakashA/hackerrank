void miniMaxSum(int arr_count, int* arr) {

    long int
        maxValue,
        minValue,
        tempSum = 0
    ;
    tempSum = maxValue = minValue = arr[--arr_count];
    while(--arr_count >= 0) {

        tempSum += arr[arr_count];
        if(arr[arr_count] > maxValue)
            maxValue = arr[arr_count];
        else if(arr[arr_count] < minValue)
            minValue = arr[arr_count];
    }
    printf("%ld %ld", tempSum - maxValue, tempSum - minValue); 
}
