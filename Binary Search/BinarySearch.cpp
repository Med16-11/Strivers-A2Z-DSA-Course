mid = (low+high)/2
if(x == arr[mid]) return mid
else if (x > arr[mid]) return low = mid +1;
else return high = mid -1;
