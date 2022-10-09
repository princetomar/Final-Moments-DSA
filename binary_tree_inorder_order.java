public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
 }

class Solution {
    
    private void inorder(List<Integer> out, TreeNode root)
    {
        if(root == null)
            return;
        inorder(out,root.left);
        out.add(root.val);
        inorder(out, root.right);
    }
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> out = new ArrayList<>();
        inorder(out, root);
        
        return out;
    }
}
