      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node *newnode = new Node(data);
          if (head == NULL){
              head = newnode;
          }else{
              Node *newnode2 = head;
              while(newnode2->next)
                  newnode2 = newnode2->next;
                  newnode2->next = newnode;             
          }
          return head;
              
      }