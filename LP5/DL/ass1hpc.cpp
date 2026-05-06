#include<iostream>
#include<chrono>
#include<queue>
#include<stack>

using namespace std;

class Treenode{

    int value;
    Treenode* left;
    Treenode* right;
    Treenode(int val) : value(val) , left(NULL) , right(NULL) {}
};

void bfs(Treenode *root){

    queue<Treenode *> q;
    q.push(root);

    while(!q.empty()){

        Treenode *T = q.front();
        q.pop(); 
        


    }






}

int main(){

    return 0;
}