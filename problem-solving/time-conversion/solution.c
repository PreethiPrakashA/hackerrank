char* timeConversion(char* s) {
    int hh,mm,ss;
    char period[3];
    sscanf(s, " %d:%d:%d%s ",&hh , &mm ,&ss, period);
    if(strcmp(period,"PM")==0)
    {
        if(hh==12)
             hh=12;
        else
             hh =  hh + 12;

    }
    else
    {
        if(hh==12)
            hh=0;

    }
    static char time[9] = "\0";
    sprintf(time,"%02d:%02d:%02d", hh, mm, ss);
    return time;

}
