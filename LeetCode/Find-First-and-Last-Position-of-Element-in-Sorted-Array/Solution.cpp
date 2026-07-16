1class Solution {
2    public int[] searchRange(int[] nums, int target) {
3        int []arr = new int[2];
4         if(nums.length==1 && nums[0]==target){
5            /*if length of given array is 1 and the target is present at
6            the 0th index then return {0,0} array.*/
7           arr[0]=0;
8           arr[1]=0;
9            return arr ;
10        }
11        ArrayList<Integer> li = new ArrayList<>();
12        for(int i = 0;i<nums.length;i++){
13            if(nums[i]==target)
14            li.add(i);
15        }
16        if(li.size()==0){
17            arr[0]=-1;
18            arr[1]=-1;
19            return arr;
20        }
21        arr[0]= li.get(0);
22        arr[1]=li.get(li.size()-1);
23        return arr;
24    }
25}