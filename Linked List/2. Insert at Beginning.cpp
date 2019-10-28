#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next_address;
};
node* root = NULL;

void Insert(int new_data)
{
    node* current_node = new node();
    current_node->data = new_data;
    current_node->next_address = root; // points to the address which root was pointing (next_address of root)
    root = current_node; // points to the address of current_node
}
void print()
{
    node* current_node = root;
    while(current_node != NULL){
        cout << current_node->data << " ";
        current_node = current_node->next_address;
    }
    puts("");
}

int main()
{
    int i;
    cout << "List Is: \n\n";
    for(i=1; i<=5; i++){
        Insert(i);
        print();
    }
}
