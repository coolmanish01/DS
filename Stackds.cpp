#include<iostream>
using namespace std;
int top=-1,size,key,ar[20];
void push(){
	if(top==size-1)
		cout<<"\nStack Overflow Can't Insert the Element";
	else{
		top=top+1;
		cout<<"Enter the Element to insert : ";
		cin>>key;
		ar[top]=key;
	}
}
void pop(){
	if(top==-1)
		cout<<"\nStack Underflow!!";
	else{
		top=top-1;
	}
}
void display(){
	if(top==-1)
		cout<<"Stack is Empty ";
	cout<<"\n";
	for(int i=top;i>=0;i--){
		cout<<ar[i]<<" ";
	}
}
int main(){
    cout<<"Enter the size of stack : ";
    cin>>::size;
		do{
		cout<<"\n\nPress 1 for Push Operation"
		      "\nPress 2 for Pop Operation"
		      "\nPress 3 to Display Stack"
		      "\nPress 4 to Exit"
		      "\nEnter Your Choice : ";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(0);

			default:cout<<"Please Enter a valid Input!";
		}
	}while(1);
}
