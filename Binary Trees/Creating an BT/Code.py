class BinaryTree:

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def printTree(root):
    if root is None:
        return

    print(root.data, end=":")
    if root.left is not None:
        print("L", root.left.data, end=",")
    if root.right is not None:
        print("R", root.right.data, end="")
    print()

    printTree(root.left)
    printTree(root.right)


btn1 = BinaryTree(1)

btn2 = BinaryTree(2)
btn3 = BinaryTree(3)


btn1.left = btn2
btn1.right = btn3


printTree(btn1)
