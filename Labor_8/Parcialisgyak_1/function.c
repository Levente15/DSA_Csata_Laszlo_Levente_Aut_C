//
// Created by Legion on 4/14/2021.
//

#include "function.h"
#include "stdio.h"
#include "stdlib.h"

Node* create(){
    Node* node=(Node*)malloc(sizeof (Node));

    if(!node){
        printf("Error#1");
        return NULL;
    }
    node->next=NULL;

    return node;
}
Node* readfromfile(char* filename,Node** Nagybetu, Node** Kisbetu){

    FILE * fin=fopen(filename,"rt");

    if(!fin){
        printf("Error#readfromfile");
        return NULL;
    }

    *Nagybetu=create();
    *Kisbetu=create();

    char data;
    int nagybetuindex=0;
    int kisbetuindex=0;

    while(fscanf(fin,"%c ",&data)!=EOF){

        if(data>='a' && data<='z')
            insert(Kisbetu,data,kisbetuindex++);
        else
            insert(Nagybetu,data,nagybetuindex++);
    }
    if(kisbetuindex>nagybetuindex){
        printf("\nA kisbetuk szam nagyobb\n");
    } else if(kisbetuindex<nagybetuindex){
        printf("\nA nagybetuk szam nagyobb\n");
    } else{
        printf("\nEgyforma\n");
    }
}
void insert(Node** front, char data,int index){

    Node*node1=create();

    node1->data=data;

    if(*front==NULL || index==0){
        node1->next=(struct Node*) * front;
        *front=node1;
    }else{
        Node* p=*front;

        int i = 1;

        while(p->next != NULL && i < index) {
            p = (Node *) p->next;
            i++;
        }
        node1->next = p->next;
        p->next = (struct Node *) node1;

    }
}
void traverse(Node* front){

    while (front->next!=NULL){
        printf("%c ",front->data);
        front=(Node*) front->next;
    }

}