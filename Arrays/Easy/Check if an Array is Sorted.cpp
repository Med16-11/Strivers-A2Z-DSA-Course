// Brute Force
 bool arraySortedOrNot(int arr[], int n) {
        // code here
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i])
                return false;
            }
        }

        return true;
    }
// TC = O(N^2) SC = O(1)

//Optimal Approach
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }
  return true;
}

//TC = o(n)  SC=O(1)
