#include <iostream>

using namespace std;

typedef struct Node{
    string songName;
    Node *link;
}Node;

int main(){

    Node *sample = new Node;
    sample->songName = "Heaven Knows by Orange and Lemon";

    cout << sample->songName <<endl;
    return 0;
}

//create new node
Node *createNode(string data){
    Node *newNode = new Node; 
    newNode->songName = data;
    newNode->link = NULL;

    return newNode;
}

int main(){
    Node *head = createNode("Sanctuary by Joji");

    //Traverse linked list
void traverse(Node *head){.
    s
    Node *temp = new Node;
    temp = head;

    cout << "My Playlist" <<endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }

        temp = temp->link;
    }
}

return 0;
}