int peakElement(int arr[], int n)
{
    if(arr[0] > arr[1])
        return 0;
    if(arr[n - 1] >= arr[n - 2])
        return n - 1;
    int lo = 0;
    int hi = n - 1;
    while(lo <= hi){
        int mid = (lo + hi)/ 2;
        if(arr[mid + 1] <= arr[mid] and arr[mid] >= arr[mid-1])
            return mid;
        else if(arr[mid + 1] >= arr[mid])
            lo = mid + 1;
        else if(arr[mid - 1] >= arr[mid])
            hi = mid - 1;
    }
    return -1;
}
