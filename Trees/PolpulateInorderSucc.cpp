node * qwerty = NULL;
void traverse(node* p){
  
    if(!p) return;
      
    traverse(p->right);  
  
    p->next = qwerty;  
    qwerty = p;  
 
    traverse(p->left);
}

void populateNext(node* p)  
{  
    qwerty = NULL;
    traverse(p);
    return;
      
}
