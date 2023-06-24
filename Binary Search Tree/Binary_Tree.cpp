#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *left;
    Node *right;
};

Node *create_TreNode(int item)
{

    Node *new_node=(Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {
        cout<<"Error! Could not Create A New Node"<<endl;
    }
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;


}
void add_left_child(Node *node,Node *child)
{

    node->left=child;

}

void add_right_child(Node *node,Node *child)
{

    node->right=child;

}
Node *create_tree()
{
    /*

    2
    / \
    7 9
    / \ \
    1 6 8
    / \ / \
    5 10 3 4

    */
    Node *two = create_TreNode(2);
    Node *seven = create_TreNode(7);
    Node *nine = create_TreNode(9);
    Node *one = create_TreNode(1);
    Node *six = create_TreNode(6);
    Node *eight = create_TreNode(8);
    Node *five = create_TreNode(5);
    Node *ten = create_TreNode(10);
    Node *three = create_TreNode(3);
    Node *four = create_TreNode(4);

    add_left_child(two, seven);
    add_right_child(two, nine);

    add_left_child(seven, one);
    add_right_child(seven, six);

    add_right_child(nine, eight);

    add_left_child(six, five);
    add_right_child(six, ten);

    add_left_child(eight, three);
    add_right_child(eight, four);
    return two; // root node
}

void pre_order(Node *node)
{

    cout<<node->data<<' ';

    if(node->left!=NULL)
    {
        pre_order(node->left);
    }

    if(node->right!=NULL)
    {
        pre_order(node->right);
    }


}

void post_order(Node *node)
{

    if(node->left!=NULL)
    {
        post_order(node->left);
    }

    if(node->right!=NULL)
    {
        post_order(node->right);
    }

    cout<<node->data<<' ';


}

int main()
{

    Node *root=create_tree();

    pre_order(root);
    cout<<endl;

    post_order(root);
    cout<<endl;



}
