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
    
    private void postOrder(List<Integer> out, TreeNode root)
    {
        if(root == null)
            return;
        postOrder(out, root.left);
        postOrder(out, root.right);
        out.add(root.val);
    }
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> out = new ArrayList<>();
        postOrder(out, root);
        return out;
    }
}
