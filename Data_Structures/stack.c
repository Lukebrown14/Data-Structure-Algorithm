#include <stdio.h>
#include <stdlib.h>

// A linear DS that follows the Last In, First Out (LiFo) principles. A array-based stack has
// contiguous memory location. The stack contains 3 operations, Push (add), Pop (remove) & top (
// retains top element without removing it)

#define MAX 5 // Maximum size of the call stack

struct Stack {
    int iteams[MAX];
    int top;
};

void initialize(struct Stack* s){
    s->top = -1; // Ensure the stack is empty
}

void push(struct Stack* s, int value){
    if(s->top == MAX - 1){
        printf("Stack Overflow\n");
    }else {
        s->iteams[(s->top)++] = value;
        printf("%d pushed onto stack\n", value);
    }
}

int pop(struct Stack* s){
    if(s->top == MAX - 1){
        printf("Stack Overflow\n");
        return -1;
    } else{
        return s->iteams[(s->top)--];
    }
}

int peek(struct Stack* s){
    if(s->top == MAX - 1){
        printf("Stack Overflow\n");
        return -1;
    } else{
        return s->iteams[s->top];
    }
}

int isEmpty(struct Stack* s){
    return s->top == -1;
}

int main(){
    struct Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element is %d\n", peek(&s));
    printf("Popped element is %d\n", pop(&s));

    if(isEmpty(&s)){
        printf("Stack is empty\n");
    } else {
        printf("Stack is NOT empty\n");
    }

    return 0;
}
