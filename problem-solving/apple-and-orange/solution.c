void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {

    int
        nApples = 0,
        nOranges = 0,
        fruitFallLocation
    ;
    while(--apples_count >= 0) {

        fruitFallLocation = a + apples[apples_count];
        if(fruitFallLocation >= s && fruitFallLocation <= t)
            nApples++;
    }
    while(--oranges_count >= 0) {

        fruitFallLocation = b + oranges[oranges_count];
        if(fruitFallLocation >= s && fruitFallLocation <= t)
            nOranges++;
    }
    printf("%d\n%d", nApples, nOranges);
}
