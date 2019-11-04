#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear =-1;
void enqueue()
{
   int x;
    printf("enter the data ");
    scanf("%d",&x);
    if(rear==N-1){
        printf("overflow");
    }
    else if(front==-1&&rear==-1){
        front=0;
        rear=0;
        queue[rear]=x;
        printf("%d\n",queue[rear]);

    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dqueue()
{
     if(front==-1&&rear==-1){
        printf("empty\n");
     }
     else if(front==rear){
        front=-1;
        rear=-1;
     }
     else{
            printf("%d\n",queue[front]);
        front++;
     }
}
void display()
{
    if(front==-1 && rear==-1){
        printf("empty");

    }
    else{
        for(int i=front;i<rear+1;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}


int main()
{
     int ch;

    do{
          printf("enter the choice:\n 1.enqueue\n 2.dqueue\n 3.display\n");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1:  enqueue();
                     break;
              case 2:  dqueue();
                     break;
              case 3:  display();
                     break;
              default: printf("invalid");
          }

    }while (ch!=0);

}