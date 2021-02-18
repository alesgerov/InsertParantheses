#include <stdio.h>
#include <math.h>
#define MAX 50
#include <stdlib.h>
#include <string.h>
char stack[MAX];
int pos=-1;
void push(char input);
void pop();
int size();
char back();
void clear();

int main() {

    char c;

    while (scanf("%c",&c)!=EOF){

        if (c=='('){
            push(c);

        } else if (c==')'){

            if (back()=='('){
                pop();
            } else{
                push(c);
            }

        }

    }

    printf("%d",abs(size()));
    return 0;
}
void push(char input){
    pos++;
    stack[pos]=input;
}
void pop(){
    pos--;
}
int size(){
    int res=pos+1;
    return res;
}
char back(){
    char res=stack[pos];
    return res;
}
void clear(){
    pos=-1;
}

//))()()
// if (back()==')')