#include <bits/stdc++.h>
using namespace std;

#define N 5
int s[N];
int top=-1;
void push()
{
    int x;
    printf("enter the data");
    scanf("%d",&x);
    if(top==4){
        printf("overflow");
    }
    else{
        top++;
        s[top]=x;
    }
}
void pop()
{
    int item;

    if(top==-1){
        printf("underflow");
    }
    else{
        item=s[top];
        top--;
    }
      printf("%d",item);
}

void peek()
{
    if(top==-1){
        printf("empty");
    }
    else{
    printf("%d",s[top]);
    }

}
void display()
{
    int i;
    for(i=top;i>=0;i--){
          printf("%d",s[i]);
    }
}
int main()
{
    int ch;

    do{
          printf("enter the choice: 1.push\n 2.pop\n 3.peek\n 4.display\n");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1:  push();
                     break;
              case 2:  pop();
                     break;
              case 3:  peek();
                     break;
              case 4:  display();
                     break;
              default: printf("invalid");
          }

    }while (ch!=0);
}
