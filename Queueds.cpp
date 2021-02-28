#include<iostream>
using namespace std;
	int ar[10],f=-1,r=-1,key,size;
void push(){
	if(r==size-1)
        cout<<"\nQueue Overflow";
    else{
        cout<<"\nEnter the Element to Insert : ";
		cin>>key;
		if(f==-1)
			f=r=0;
		else
			r=r+1;
		ar[r]=key;
    }
}

void pop(){
	if(f==-1)
		cout<<"\nQueue is Empty";
	else if(f==r)
		f=r=-1;
	else
		f++;
}

void display(){
	if(f==-1)
		cout<<"\nQueue is Empty \n";
	else{
		for(int i=f;i<=r;i++){
			cout<<ar[i]<<" ";
		}
	}
}
int main(){
    cout<<"Enter the size of Queue : ";
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
