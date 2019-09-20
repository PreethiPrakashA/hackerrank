int* breakingRecords(int scores_count, int* scores, int* result_count) {

    int i ,j ,high_score ,low_score ;
    int lscore_ct = 0;
    int hscore_ct = 0;
    static int arr[2];
    *result_count = 2;
     
    low_score = scores[0];
    high_score = scores[0];

    for(i=0; i<scores_count; i++)
    {
        if(scores[i] < low_score)
        {
            lscore_ct++;
            low_score = scores[i];

        }
        else if(scores[i] >  high_score)
        {
            hscore_ct++;
            high_score = scores[i];
        }


    }
    arr[0] = hscore_ct;
    arr[1] = lscore_ct;
    return arr;
}
