int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int i,temp,mul_fiv;
    static int arr[60];
    *result_count = grades_count;
    for(i = 0; i< grades_count ;i++)
    {
        if(grades[i] >= 38)
        {
            temp = grades[i];
            while( temp % 5 != 0)
                temp++;
            mul_fiv = temp;
            if(mul_fiv - grades[i] < 3)
                grades[i] = mul_fiv;
        }
        arr[i] = grades[i];
    }
    return arr;
}
