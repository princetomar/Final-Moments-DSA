/*
Max and min element in Binary Tree
Given a Binary Tree, find maximum and minimum elements in it.
Input: 
           6
        / \
       5   8
      /
     2
Output: 8 2
*/


class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}

class Solution{
    public static int findMax(Node node){
        //code here
        if (node == null)
            return Integer.MIN_VALUE;
 
        int res = node.data;
        int lr = findMax(node.left);
        int rr = findMax(node.right);
 
        if (lr > res)
            res = lr;
        if (rr > res)
            res = rr;
        return res;
    }
    public static int findMin(Node node){
        //code here
        if (node == null)
            return Integer.MAX_VALUE;
 
        int res = node.data;
        int lr = findMin(node.left);
        int rr = findMin(node.right);
 
        if (lr < res)
            res = lr;
        if (rr < res)
            res = rr;
        return res;
    }
}
