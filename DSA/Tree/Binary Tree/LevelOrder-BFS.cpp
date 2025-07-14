void Levelorder(node*root){
    queue<node*>qt;
    qt.push(root);
    while(!qt.empty()){
        node*front=qt.front();
        cout<<front->val<<" ";
        qt.pop();
        if(front->right!=nullptr){
        qt.push(front->right);
        }
        if(front->left!=nullptr){
        qt.push(front->left);
        }
    }
}
