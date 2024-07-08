#include<iostream>
using namespace std;
#define MAX 6

int queue[MAX];
int rear = -1;
int front =-1;

void enqueqe(){
    int val;
    cout<< " Enter the data : ";
    cin >> val;
    if(rear >= MAX-1 ){
        cout<< " Queue Overflow "<<endl;
    }else{
        if(front == -1){
            front = 0;
            rear++;
            queue[rear] = val;
        }
        else{
            rear++;
            queue[rear] = val;
        }
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        cout<< " Queue Underflow "<<endl;
    }else{
        cout << "The deleted element is : "<<queue[front] << endl;
        front++;
    }
}

void display(){
    if(front == -1 || front > rear){
        cout<<"Queue is empty"<<endl;
    }else{
        for(int i=front;i<=rear;i++){
            cout<< queue[i] << " ";
        }
        cout<<endl;
    }
}

int main(){
    int ch;
    do{
        cout<<"Enter the choice : ";
        cin >> ch;
        switch(ch){
            case 1: enqueqe();
                    break;

            case 2: dequeue();
                    break;
            case 3 : display();
                    break;
            default : exit(1);
        }
    }while(1);

    return 0;
}