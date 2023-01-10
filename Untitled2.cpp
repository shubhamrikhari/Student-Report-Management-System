#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Node {
	public :
		int reg_no;
		string name;
		float marks, percentage;
		string grade;
		Node *next;
	};

class A {
	public :
		Node *head = NULL;
		void insert() {
			system("cls");
		    cout<<"\n\n\t\t\t ********** Insert Record **********"<<endl;
		    cout<<"Enter Student's Registration Number : ";
		    int reg; cin>>reg;
		    cout<<"Enter Student's Name : ";
		    cin.ignore(256, '\n');
		    string nm; getline(cin,nm);
		    cout<<"Enter Student's Marks : ";
		    float mark; cin>>mark;
		    
		    Node *newnode = new Node; 
		    newnode->reg_no = reg;
		    newnode->name = nm;
		    newnode->marks = mark;
		    newnode->percentage = (mark/100)*100;
		    
		    if(newnode->percentage > 90) {
		        newnode->grade = "O";
		    }
		    else if(newnode->percentage > 80) {
		        newnode->grade = "A+";
		    }
		    else if(newnode->percentage > 70) {
		        newnode->grade = "A";
		    }
		    else if(newnode->percentage > 60) {
		        newnode->grade = "B+";
		    }
		    else if(newnode->percentage > 50) {
		        newnode->grade = "B";
		    }
		    else if(newnode->percentage > 40) {
		        newnode->grade = "C";
		    }
		    else if(newnode->percentage > 33) {
		        newnode->grade = "D";
		    }
		    else {
		        newnode->grade = "F";
		    }
		    
		    newnode->next = NULL;
		    
		    if(head == NULL) {
		    	head = newnode;
			}
			else {
				Node *temp = head;
				while(temp->next != NULL) {
					temp = temp -> next;
				}
				temp->next = newnode;
			}
			
			cout<<"\n\n\t\t\t ********** Insert Record Successfully **********"<<endl;
		}    
		
		void search() {
			system("cls");
		    cout<<"\n\n\t\t\t ********** Search Record **********"<<endl;
		    if(head == NULL) {
		        cout<<"********** No Record Exists **********"<<endl;
		    }
		    else {
		        cout<<"Enter the Registration Number : ";
		        int reg; cin>>reg;
		        cout<<endl;
		        int flag = 0;
		        Node *temp = head;
		        while(temp != NULL) {
		        	if(temp->reg_no == reg) {
		        		cout<<"\n\n Registration Number : "<<temp->reg_no;
		        		cout<<"\n\n Name : "<<temp->name;
		                cout<<"\n\n Marks : "<<temp->marks;
		                cout<<"\n\n Percentage : "<<temp->percentage;
		                cout<<"\n\n Grade : "<<temp->grade;
		                flag = 1;
					}
		        	temp = temp->next;
				}
			    if(flag == 0) {
			        cout<<"\n\n ********** Student Record Not Found **********"<<endl;
				}
			}
		}
		
		void update() {
			system("cls");
		    cout<<"\n\n\t\t\t ********** Update Record **********"<<endl;
		    if(head == NULL) {
		        cout<<"********** No Record Exists **********"<<endl;
		    }
		    else {
		        cout<<"Enter the Registration Number : ";
		        int reg; cin>>reg;
		        cout<<endl;
		        int flag = 0;
		        Node *temp = head;
		        while(temp != NULL) {
		            if(temp->reg_no == reg) {
		                cout<<"Enter new Registration Number : ";
		                int r; cin>>r;
		                cout<<"Enter New name : ";
		                cin.ignore(256, '\n');
		                string nm; getline(cin,nm);
		                cout<<"Enter New Marks : "; 
		                float mark; cin>>mark;
		                temp->name = nm;
		                temp->marks = mark;
		                temp->percentage = (temp->marks/100)* 100;
		                if(temp->percentage > 90) {
		                    temp->grade = "O";
		                }
		                else if(temp->percentage > 80) {
		                    temp->grade = "A+";
		                }
		                else if(temp->percentage > 70) {
		                    temp->grade = "A";
		                }
		                else if(temp->percentage > 60) {
		                    temp->grade = "B+";
		                }
		                else if(temp->percentage > 50) {
		                    temp->grade = "B";
		                }
		                else if(temp->percentage > 40) {
		                    temp->grade = "C";
		                }
		                else if(temp->percentage >= 33) {
		                    temp->grade = "D";
		                }
		                else {
		                    temp->grade = "F";
		                }
		                cout<<"********** Record Updated Successfully **********"<<endl;
		                flag = 1;
		            }
		            temp = temp->next;
		        }
		        if(flag == 0) {
		            cout<<"\n\n ********** Student record not found **********"<<endl;
		        }
		    }
		}
		
		void del() {
			system("cls");
		    cout<<"\n\n\t\t\t ********** Delete Record **********"<<endl;
		    if(head == NULL) {
		        cout<<"********** No Record Exists **********"<<endl;
		    }
		    else {
		    	cout<<"Enter the Registration Number : ";
		        int r; 
		        cin>>r;
		        cout<<endl;
		        int flag = 0;
		        if(head->reg_no == r) {
		        	Node *temp = head;
		        	head = head -> next;
		        	cout<<"\n\n Record Deleted Successfully\n\n";
		        	flag = 1;
		        	delete temp;
				}
				else {
					Node *pre = head;
					Node *temp = head->next;
					while(temp != NULL) {
						if(temp->reg_no == r) {
							pre->next = temp->next;
							cout<<"\n\n Record Deleted Successfully\n\n";
							flag = 1;
							delete temp;
							break;
						}
						pre = pre->next;
						temp = temp->next;
					}
				}
		        if(flag == 0) {
		            cout<<"\n\n ********** Student record not found **********";
		        }
			}
		}
		
		void show() {
			system("cls");
		    cout<<"\n\n\t\t\t ********** Show Record **********"<<endl;
		    if(head == NULL) {
		        cout<<"********** No Record Exists **********"<<endl;
		    }
		    else {
		        Node *temp = head;
		        while(temp != NULL) {
		        	cout<<"\n\n Registration Number : "<<temp->reg_no;
		        	cout<<"\n\n Name : "<<temp->name;
		            cout<<"\n\n Marks : "<<temp->marks;
		            cout<<"\n\n Percentage : "<<temp->percentage;
		            cout<<"\n\n Grade : "<<temp->grade;
					temp = temp->next;
					cout<<"\n\n----------------------------------------------------------------------------\n\n";
				}
			}
		}
};

int main() {
	A obj;
	part :
	    system("cls"); 
	    cout<<"\n\n\t\t\t ********** Student Report Management System **********"<<endl;
	    cout<<"\n\n 1. Insert Record";
	    cout<<"\n\n 2. Search Record";
	    cout<<"\n\n 3. Update Record";
	    cout<<"\n\n 4. Delete Record";
	    cout<<"\n\n 5. Show Record";
	    cout<<"\n\n 6. Exit";
	    cout<<"\n\n Enter your choice -> ";
	    int choice;
	    cin>>choice;
	    switch(choice) {
	        case 1 : 
		        obj.insert();
		        break;
	        case 2 :
		        obj.search();
		        break;
	        case 3 :
		        obj.update();
		        break;
	        case 4 : 
		        obj.del();
		        break;
	        case 5:
		        obj.show();
		        break;
	        case 6 :
	            exit(0);
	        default :
	            cout<<"\n\n ********** Invalid Choice **********";
	    }
    getch();
    goto part;
}
