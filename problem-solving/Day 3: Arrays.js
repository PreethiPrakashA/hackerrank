function getSecondLargest(nums) {
    // Complete the function
   // n = input();
    var large2;
    var large = nums[0];
    for(let i=1; i<nums.length; i++){
        if(nums[i]>large)
        {
            large2 = large;
            large = nums[i];
        }
        else if(nums[i]>large2 && nums[i] != large)
            large2 = nums[i];
    }
    return large2;

}
