#include "binary_tree.hpp"
#include <iostream>
#include <iomanip>
#include <string>

// 打印遍历结果
template <typename T>
void printTraversal(const std::string &method, const std::vector<T> &result)
{
    std::cout << method << ": ";
    for (size_t i = 0; i < result.size(); ++i)
    {
        std::cout << result[i];
        if (i < result.size() - 1)
        {
            std::cout << " -> ";
        }
    }
    std::cout << std::endl;
}

// 演示函数：使用整数类型
void demoIntBinaryTree()
{
    std::cout << "========== 整数二叉树前序遍历演示 ==========\n";

    BinaryTree<int> tree;

    // 创建示例树
    tree.createExampleTree();

    // 递归前序遍历
    auto recursiveResult = tree.preorderTraversalRecursive();
    printTraversal("递归前序遍历", recursiveResult);

    // 迭代前序遍历
    auto iterativeResult = tree.preorderTraversalIterative();
    printTraversal("迭代前序遍历", iterativeResult);

    std::cout << "树的高度: " << tree.getHeight() << std::endl;
    std::cout << "==========================================\n\n";
}

// 演示函数：使用字符串类型
void demoStringBinaryTree()
{
    std::cout << "========== 字符串二叉树前序遍历演示 ==========\n";

    BinaryTree<std::string> tree;

    // 使用层次遍历创建树
    std::vector<std::string> values = {
        "Root", "Left", "Right", "Left-Left", "Left-Right", "", "Right-Right"};
    tree.createFromLevelOrder(values);

    // 递归前序遍历
    auto recursiveResult = tree.preorderTraversalRecursive();
    printTraversal("递归前序遍历", recursiveResult);

    // 迭代前序遍历
    auto iterativeResult = tree.preorderTraversalIterative();
    printTraversal("迭代前序遍历", iterativeResult);

    std::cout << "树的高度: " << tree.getHeight() << std::endl;
    std::cout << "=============================================\n";
}

// 交互式演示
void interactiveDemo()
{
    std::cout << "========== 交互式二叉树创建 ==========\n";
    std::cout << "输入节点值（整数），用空格分隔，输入 -1 表示空节点\n";
    std::cout << "示例：1 2 3 -1 4 5 -1 -1 6（创建3层树）\n";
    std::cout << "请输入节点值序列: ";

    std::vector<int> values;
    int val;
    while (std::cin >> val)
    {
        if (val == -999)
            break; // 结束输入的特殊值
        values.push_back(val == -1 ? 0 : val);
    }

    // 清除输入缓冲区
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    BinaryTree<int> tree;
    tree.createFromLevelOrder(values);

    // 显示遍历结果
    std::cout << "\n创建的二叉树遍历结果:\n";
    auto result = tree.preorderTraversalRecursive();
    printTraversal("前序遍历", result);
}

// 菜单显示
void showMenu()
{
    std::cout << "\n========== 二叉树前序遍历演示系统 ==========\n";
    std::cout << "1. 演示整数二叉树\n";
    std::cout << "2. 演示字符串二叉树\n";
    std::cout << "3. 交互式创建二叉树\n";
    std::cout << "4. 退出\n";
    std::cout << "请选择操作 (1-4): ";
}

int main()
{
    int choice;

    do
    {
        showMenu();
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            demoIntBinaryTree();
            break;
        case 2:
            demoStringBinaryTree();
            break;
        case 3:
            interactiveDemo();
            break;
        case 4:
            std::cout << "感谢使用，再见！\n";
            break;
        default:
            std::cout << "无效选择，请重新输入！\n";
            break;
        }

        if (choice != 4)
        {
            std::cout << "\n按 Enter 键继续...";
            std::cin.ignore();
            std::cin.get();
        }

    } while (choice != 4);

    return 0;
}