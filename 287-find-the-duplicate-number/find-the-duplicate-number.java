class Solution {
    public int findDuplicate(int[] nums) {
        
        HashSet<Integer> hs = new HashSet<>();

        for(int ele : nums) {
            if(hs.contains(ele)) {
                return ele;
            }
            else {
                hs.add(ele);
            }
        }
        return -1;
    }
}