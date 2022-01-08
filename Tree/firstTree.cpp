#include <iostream>
#define SPACE 10

using namespace std;
class TreeNode
{
public:
  int value;
  TreeNode *left;
  TreeNode *right;

  TreeNode()
  {
    value = 0;
    left = NULL;
    right = NULL;
  }
  TreeNode(int v)
  {
    value = v;
    left = NULL;
    right = NULL;
  }
};
class BST
{
public:
  TreeNode *root;
  BST()
  {
    root = NULL;
  }
  bool isEmpty()
  {
    if (root == NULL)
      return true;
    else
    {
      return false;
    }
  }

  void insertNode(TreeNode *new_node)
  {
    if (root == NULL)
    {
      root = new_node;
      cout << "value Inserted as root node!" << endl;
    }
    else
    {
      TreeNode *temp = root;
      while (temp != NULL)
      {
        if (new_node->value == temp->value)
        {
          cout << "value already exist,"
               << "Insert new value!" << endl;
          return;
        }
        else if ((new_node->value < temp->value) && (temp->left == NULL))
        {
          temp->left = new_node;
          cout << "value Inserted to the left !" << endl;
          break;
        }
        else if (new_node->value < temp->value)
        {
          temp = temp->left;
        }
        else if ((new_node->value > temp->value) && (temp->right == NULL))
        {
          temp->right = new_node;
          cout << "value Inserted to the right!" << endl;
          break;
        }
        else
        {
          temp = temp->right;
        }
      }
    }
  }
  void print2D(TreeNode *r, int space)
  {
    if (r == NULL)
    {
      return;
    }
    space += SPACE;
    print2D(r->right, space);
    cout << endl;
    for (int i = SPACE; i < space; i++)
      cout << " ";
    cout << r->value << "\n";
    print2D(r->left, space);
  }

  void printPreorder(TreeNode *r)
  {
    if (r == NULL)
    {
      return;
    }
    cout << r->value << ",";
    printPreorder(r->left);
    printPreorder(r->right);
  }
  void printInorder(TreeNode *r)
  {
    if (r == NULL)
    {
      return;
    }
    printInorder(r->left);
    cout << r->value << ",";
    printInorder(r->right);
  }
  void printPostorder(TreeNode *r)
  {
    if (r == NULL)
    {
      return;
    }
    printPostorder(r->left);
    printPostorder(r->right);
    cout << r->value << ",";
  }
  TreeNode *iterativeSearch(int val)
  {
    if (root == NULL)
    {
      return root;
    }
    else
    {
      TreeNode *temp = root;
      while (temp != NULL)
      {
        if (val == temp->value)
        {
          return temp;
        }
        else if (val < temp->value)
        {
          temp = temp->left;
        }
        else
        {
          temp = temp->right;
        }
      }
      return NULL;
    }
  }

  TreeNode *recursiveSearch(TreeNode *r, int val)
  {
    if (r == NULL || r->value == val)
    {
      return r;
    }
    else if (val > r->value)
    {
      return recursiveSearch(r->left, val);
    }
    else
    {
      return recursiveSearch(r->right, val);
    }
  }

  int height(TreeNode *r)
  {
    if (r == NULL)
    {
      return -1;
    }
    else
    {
      int left_height = height(r->left);
      int right_height = height(r->right);

      if (left_height > right_height)
        return (left_height + 1);
      else
        return (right_height + 1);
    }
  }

  void printgivenLevel(TreeNode *r, int level)
  {
    if (r == NULL)
    {
      return;
    }
    else if (level == 0)
    {
      cout << r->value << " ";
    }
    else
    {
      printgivenLevel(r->left, level - 1);
      printgivenLevel(r->right, level - 1);
    }
  }
  void printLevelOrderBFS(TreeNode *r)
  {
    int h = height(r);
    for (int i = 0; i <= h; i++)
    {
      printgivenLevel(r, i);
    }
  }
  TreeNode *minValueNode(TreeNode *node)
  {
    TreeNode *current = node;
    while (current->left != NULL)
    {
      current = current->left;
    }
    return current;
  }
  TreeNode *deleteNode(TreeNode *r, int v)
  {
    // base case
    if (r == NULL)
    {
      return NULL;
    }
    else if (v < r->value)
    {
      r->left = deleteNode(r->left, v);
    }
    else if (v > r->value)
    {
      r->right = deleteNode(r->right, v);
    }
    else
    {
      if (r->left == NULL)
      {
        TreeNode *temp = r->right;
        delete r;
        return temp;
      }
      else if (r->right == NULL)
      {
        TreeNode *temp = r->left;
        delete r;
        return temp;
      }
      else
      {
        TreeNode *temp = minValueNode(r->right);
        r->value = temp->value;
        r->right = deleteNode(r->right, temp->value);
      }
    }
    return r;
  }
};
int main()
{
  int option, val;
  BST obj;
  do
  {
    cout << "what operation do you want to perform?"
         << "select option number.Enter 0 to exit." << endl;
    cout << "1. Insert node" << endl;
    cout << "2. iterative search node" << endl;
    cout << "3. recursive search node" << endl;
    cout << "4. Print BST values" << endl;
    cout << " 5. TREE HEIGHT" << endl;
    cout << "6. Delete node" << endl;
    cout << "7. clear screen" << endl;
    cout << "0. Exit program" << endl;
    cin >> option;
    TreeNode *new_node = new TreeNode();
    switch (option)
    {
    case 0:

      break;
    case 1:
      cout << "INSERT" << endl;
      cout << "Enter Value of TREE NODE to INSERT in BST:";
      cin >> val;
      new_node->value = val;
      obj.insertNode(new_node);
      cout << endl;
      break;
    case 2:
      cout << " iterative SEARCH" << endl;
      cout << "Enter value of tree node to search in BST: ";
      cin >> val;
      new_node = obj.iterativeSearch(val);
      if (new_node != NULL)
      {
        cout << "value found" << endl;
      }
      else
      {
        cout << "value not found" << endl;
      }
      break;
    case 3:
      cout << " recurrsive SEARCH" << endl;
      cout << "Enter the value to be searched in the tree" << endl;
      cin >> val;
      new_node = obj.recursiveSearch(obj.root, val);
      if (new_node != NULL)
      {
        cout << "value found" << endl;
      }
      else
      {
        cout << "value not found" << endl;
      }
      break;
    case 4:
      cout << "PRINTING and TRAVERSE" << endl;
      obj.print2D(obj.root, 5);
      cout << "PRE-ORDER: -";
      obj.printPreorder(obj.root);
      cout
          << endl;
      cout << "IN-ORDER: -";
      obj.printInorder(obj.root);
      cout
          << endl;
      cout << "POST-ORDER: -";
      obj.printPostorder(obj.root);
      cout << endl;

      cout << "Print level orde BFS: " << endl;
      obj.printLevelOrderBFS(obj.root);
      cout << endl;
      break;
    case 5:
      cout << "Height of the tree: " << endl;
      cout << "height : -" << obj.height(obj.root) << endl;
      break;
    case 6:
      cout << "DELETE NODE" << endl;
      cout << "Enter the value you want to delete: " << endl;
      cin >> val;
      new_node = obj.iterativeSearch(val);
      if (new_node != NULL)
      {
        obj.deleteNode(obj.root, val);
        cout << "value deleted" << endl;
      }
      else
      {
        cout << " value not found" << endl;
      }
      break;
    case 7:
      cout << "CLEAR SCREEN" << endl;
      break;

    default:
      break;
    }
  } while (option != 0);

  return 0;
}