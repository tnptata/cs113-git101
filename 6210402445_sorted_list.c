#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next,*pre;
};

void main(){
    int num,round=1;
    struct node *newnode,*head,*p,*check,*tmp;
    while(scanf("%d",&num)==1){
        if(num == -1){
            break;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        if(num>=0){
            if(round==1){
                newnode->data = num;
                newnode->next = NULL;
                newnode->pre = NULL;
                head = newnode;
                p = head;
            }
            else{
                newnode->data = num;
                newnode->next = NULL;
                newnode->pre = p;
                p->next = newnode;
                p = p->next;
                check = newnode;
                while(check->pre!=NULL){
                    int q;
                    if(check->data < (check->pre)->data){
                        q = (check->data);
                        check->data = (check->pre)->data;
                        (check->pre)->data = q;
                    }
                    check = check->pre;
                }
            }
            round++;
        }
    }
    for(tmp=head;tmp;tmp=tmp->next){
        printf("%d\n",tmp->data);
    } 
}