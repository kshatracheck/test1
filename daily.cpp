#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream file_obj_write("/home/sunil/CLionProjects/only_c++/file.txt", ios_base::app);
    file_obj_write << endl << "NA nahi dekh rhe";

    string store_text;
    ifstream  file_obj_show("/home/sunil/CLionProjects/only_c++/file.txt");
    while(getline(file_obj_show, store_text)) {
        cout << store_text << endl;
    }
}

//#include <iostream>
//using namespace std;
//
//class parent{
//public:
//    virtual void show()=0;
//};
//
//class a{
//    parent* ptr_of_parent_2;
//public:
//    a(){};
//    a(parent* ptr_of_parent){
//        ptr_of_parent_2 = ptr_of_parent;
//        ptr_of_parent->show();
//
//    };
//    void random(){
//        cout << "Method of class a" << endl;
//    }
//};
//
//class b : public parent{
//    a* ptr_of_a;
//public:
//    b(){
//        ptr_of_a = new a(this);
//        a obj_of_a;
//        obj_of_a.random();
//    }
//    void show(){
//        cout << "This is method from class b" << endl;
//    }
//};
//
//int main(){
//    b obj_of_b;
//}

//#include <iostream>
//using namespace std;
//
//class node{
//public:
//    int data;
//    node* left;
//    node* right;
//    node(){};
//    node(int data){
//        this->data = data;
//        left = right = NULL;
//    }
//};
//
//node* insert_node(int val, node** root){
//    node* newnode;
//    if((*root) == NULL){
//
//    }
//}
//
//void display(node* root){
//
//}
//
//int main(){
//    int choice;
//    node* root = NULL;
//    while(choice != 3) {
//        printf("Enter the choice : \n 1.Add\n 2.Display\n 3. Delete\n 4.Exit");
//        scanf("%d", &choice);
//        if (choice == 1) {
//            int val;
//            printf("Enter the data to add: \n");
//            scanf("%d", &val);
//            insert_node(val, &root);
//        }
//        if (choice == 2) {
//            display(root);
//        }
//        if (choice == 4) {
//            break;
//        }
//    }
//}

//struct node* insert_node(int val, struct node** root){
//    struct node* newnode;
//    if(*root == NULL){
//        newnode = (struct node*)malloc(sizeof(struct node));
//        newnode->left = NULL;
//        newnode->right = NULL;
//        newnode->data = val;
//        (*root) = newnode;
//    }
//    if((*root)->data < val){
//        insert_node(val,&(*root)->right);
//    }
//    if((*root)->data  > val){
//        insert_node(val,&(*root)->left);
//    }
//}
//
//void display(struct node* root){
//    if(root != NULL){
//        printf(" %d ", root->data);
//        display(root->left);
//        display(root->right);
//    }
//}
//


