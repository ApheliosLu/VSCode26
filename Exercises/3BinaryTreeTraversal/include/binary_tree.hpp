#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include <iostream>
#include <vector>
#include <memory>

// 二叉树节点定义
template <typename T>
struct TreeNode
{
    T data;
    std::shared_ptr<TreeNode<T>> left;
    std::shared_ptr<TreeNode<T>> right;

    TreeNode(T val) : data(val), left(nullptr), right(nullptr) {}
};

// 二叉树类
template <typename T>
class BinaryTree
{
private:
    std::shared_ptr<TreeNode<T>> root;

    // 辅助函数：递归前序遍历
    void preorderRecursive(std::shared_ptr<TreeNode<T>> node, std::vector<T> &result)
    {
        if (!node)
            return;

        result.push_back(node->data);           // 访问根节点
        preorderRecursive(node->left, result);  // 遍历左子树
        preorderRecursive(node->right, result); // 遍历右子树
    }

    // 辅助函数：迭代前序遍历
    void preorderIterative(std::shared_ptr<TreeNode<T>> node, std::vector<T> &result)
    {
        if (!node)
            return;

        std::stack<std::shared_ptr<TreeNode<T>>> s;
        s.push(node);

        while (!s.empty())
        {
            auto current = s.top();
            s.pop();
            result.push_back(current->data);

            // 栈是后进先出，所以先右后左
            if (current->right)
                s.push(current->right);
            if (current->left)
                s.push(current->left);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    // 创建示例二叉树
    void createExampleTree()
    {
        /* 创建以下二叉树：
               1
              / \
             2   3
            / \   \
           4   5   6
        */
        root = std::make_shared<TreeNode<int>>(1);
        root->left = std::make_shared<TreeNode<int>>(2);
        root->right = std::make_shared<TreeNode<int>>(3);
        root->left->left = std::make_shared<TreeNode<int>>(4);
        root->left->right = std::make_shared<TreeNode<int>>(5);
        root->right->right = std::make_shared<TreeNode<int>>(6);
    }

    // 递归前序遍历
    std::vector<T> preorderTraversalRecursive()
    {
        std::vector<T> result;
        preorderRecursive(root, result);
        return result;
    }

    // 迭代前序遍历
    std::vector<T> preorderTraversalIterative()
    {
        std::vector<T> result;
        preorderIterative(root, result);
        return result;
    }

    // 层次遍历创建二叉树（辅助函数）
    void createFromLevelOrder(const std::vector<T> &values)
    {
        if (values.empty())
        {
            root = nullptr;
            return;
        }

        root = std::make_shared<TreeNode<T>>(values[0]);
        std::queue<std::shared_ptr<TreeNode<T>>> q;
        q.push(root);

        size_t i = 1;
        while (!q.empty() && i < values.size())
        {
            auto current = q.front();
            q.pop();

            // 左子节点
            if (i < values.size() && values[i] != T{})
            {
                current->left = std::make_shared<TreeNode<T>>(values[i]);
                q.push(current->left);
            }
            i++;

            // 右子节点
            if (i < values.size() && values[i] != T{})
            {
                current->right = std::make_shared<TreeNode<T>>(values[i]);
                q.push(current->right);
            }
            i++;
        }
    }

    // 获取树的高度
    int getHeight()
    {
        return getHeightRecursive(root);
    }

private:
    int getHeightRecursive(std::shared_ptr<TreeNode<T>> node)
    {
        if (!node)
            return 0;
        return 1 + std::max(getHeightRecursive(node->left),
                            getHeightRecursive(node->right));
    }
};

#endif // BINARY_TREE_HPP