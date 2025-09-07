Node* merge(Node* t1,Node* t2){
	
	Node* ans=new Node(-1);
	Node* temp= ans;
	while(t1!=NULL && t2!=NULL){
		if(t1->data<=t2->data){
			temp->child=t1;
			temp=temp->child;
			t1=t1->child;
		}
		else{
			temp->child=t2;
			temp=temp->child;
			t2=t2->child;
		}
	}
	while(t1!=NULL){
		temp->child=t1;
		temp=temp->child;
		t1=t1->child;
	}
	while(t2!=NULL){
		temp->child=t2;
		temp=temp->child;
		t2=t2->child;
	}
	ans=ans->child;
	return ans;
}
Node* flattenLinkedList(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	
	Node* t2=flattenLinkedList(head->next);
    head->next=NULL;
    Node* ans=merge(head,t2);
	return ans;

}
