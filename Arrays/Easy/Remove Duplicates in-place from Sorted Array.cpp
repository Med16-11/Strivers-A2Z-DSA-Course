// Approch 1: using HashSet
int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
//TC : O(n*log(n))+O(n) SC: O(n) 

//Approch 2: Two pointers Approch
int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for(int j = 1; j <nums.size(); j++){
      if(nums[i] != nums[j]){
        i++;
        nums[i]=nums[j];
      }
    }
    return i+1;
}
//TC: O(N) SC: O(1)
