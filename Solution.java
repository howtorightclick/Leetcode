import java.util.Arrays;
import java.util.Comparator;

class Solution {

    class Node {
        int value;
        Node left;
        Node right;
    
        Node(int value) {
            this.value = value;
            right = null;
            left = null;
        }
    }

    public int lengthOfLIS(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            
        }
        return counter;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        solution.lengthOfLIS(new int[]{1,3,6,7,9,4,10,5,6});
    }
}