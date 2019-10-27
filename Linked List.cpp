#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next_address;
};
// initially root is null
node* root = NULL;

void linked_list(int new_data)
{
    node* current_node = new node();
    current_node->data = new_data;
    current_node->next_address = NULL;
    // If list is empty
    if(root == NULL){
        root = current_node; // root will contain address of next node
        current_node = NULL;
    }
    else{
        // Loop to find the last node
        current_node = root;
        while(current_node->next_address != NULL){
            current_node = current_node->next_address;
        }
        // Create and insert new node
        node* new_node = new node();
        new_node->data = new_data;
        new_node->next_address = NULL;
        // Link new node to previous node
        current_node->next_address = new_node;
    }
}
void print()
{
    node *current_node=root;
    while(current_node!=NULL){
        cout << current_node << "\t" << current_node->data << "\t" << current_node->next_address << "\n";
        current_node=current_node->next_address;
    }
}

int main()
{
    int i;
    cout << "List Is: \n\n";
    // Inserting value into linked list
    for(i=1; i<=5; i++){
        linked_list(i);
    }
    print();
}
