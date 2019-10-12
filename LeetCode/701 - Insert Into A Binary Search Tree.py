# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        if not root:
            return TreeNode(val)
        current_node = root
        while True:
            if current_node.val < val:
                if current_node.right:
                    current_node = current_node.right
                else:
                    current_node.right = TreeNode(val)
                    break
            else:
                if current_node.left:
                    current_node = current_node.left
                else:
                    current_node.left = TreeNode(val)
                    break

        return root
