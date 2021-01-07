#include <bits/stdc++.h>

using namespace std;

class stacks{
    private:
        int top;
        int arr[5];
    public:
        stacks()
        {
            top = -1;
            //making the top variable so that it keeps track of the number of entries in the stack. 
            for(int i = 0; i<5; i++)
            {
                arr[i] = 0; 
            }//end of for. 
            //assigning 0 to all the values of the stack. 
        }//end of constructor.

        //implementing stack operations.  
        bool isEmpty()
        {
            if(top == -1)
                return true; 
            else
                return false;
            
        }//end of method. 
        bool isFull()
        {
            if(top == 4) //using 0-based indexing, the 5th value will be 4. 
                return true;
            else
                return false;
        }//end of method. 
        void push(int val)
        {
            if(isFull())
            {
                cout << "Stack Overflow" << endl; 
            }//end of if. 
            else
            {
                top++; //incrementing the top variable. 
                arr[top] = val; 
            }//end of else. 
            
        }//end of method. 

        int pop()
        {
            //checking for stack underflow and then popping the value. 
            if(isEmpty())
            {
                cout << "Stack Underflow" << endl;
                return 0; 
            }// end of if. 
            else
            {
                int popValue = arr[top];
                arr[top] = 0; 
                top--; 
                return popValue; 
            } //end of else.    
        }// end of method. 
        int count()
        {
            //returning the number of values in the stack. 
            return (top+1);
        }//end of method. 
        int peek(int pos)
        {
            //checking for stack underflow. 
            if(isEmpty())
            {
                cout << "Stack Underflow" << endl;
                return 0; 
            }//end of if. 
            else
            {
                //returning the desired value. 
                return arr[pos]; 
            }//end of else. 
            
        }//end of method. 

        void change(int pos, int val)
        {
            //changing the value at the desired position and value entered by the user. 
            arr[pos] = val; 
            cout << "Value Changed at " << pos << endl; 
        }//end of method. 

        void display()
        {
            //displaying all the values of the stack in the LIFO Order. 
            cout << "All values in the stack are: " << endl;
            for(int i = 4; i>=0; i--)
            {
                cout<<arr[i]<<endl; 
            }//end of for. 
        }//end of method. 
        

};

int main()
{
    stacks s1; //creating an object of the stacks class.   
    int option, position, value; 
    //defining necessary variables to perform stack operations. 


    //using a do-while loop to perform the stack operations through a menu based program. 
    do
    {
        //displaying the menu. 
        cout<<"Enter the number of what operation you want to perform, press 0 to exit. " << endl;
        cout<< "1. Push()" << endl;
        cout<< "2. Pop()" << endl; 
        cout<< "3. isEmpty()" << endl; 
        cout<< "4. isFull()" << endl; 
        cout<< "5. peek()" << endl;
        cout<< "6. change()" << endl; 
        cout<< "7. display()" << endl << endl;  

        cin>>option; //inputting the option. 

        //using switch-case. 
        
        switch(option)
        {
            case 1:
                cout << "Enter the item to push in the stack: " << endl; 
                cin>>value; 
                s1.push(value);
                break; 

            case 2: 
                cout<< "pop() funtion called. Pop Value: " << s1.pop() << endl; 
                break; 
            case 3:
                if(s1.isEmpty())
                    cout<< "Stack is Empty. " << endl; 
                else
                    cout<< "Stack is full" << endl;
                break; 
            case 4:
                if(s1.isFull())
                    cout<< "Stack is Full. " << endl; 
                else
                    cout<< "Stack is not full. " << endl;
            case 5:
                cout<< "Enter the position of the item you want to peek." << endl; 
                cin>>position; 
                cout<<"Peek Function Called -- Value" << endl << s1.peek(position) << endl; 
                break;
            case 6:
                cout<< "Enter the position at which you want to change the value [0-based indexing]: " <<endl; 
                cin>>position; 
                cout<< "Enter the value which you want to insert: " << endl; 
                cin>>value;
                s1.change(position, value); 
                cout << "The value has been changed. "  << endl; 
                break; 
            case 7:
                cout << "The values in the stack are(LIFO Order): " << endl; 
                s1.display(); 
                break;
            default:
                if(option > 7)
                {
                    cout << "Invalid Input" << endl;
                    exit(0);
                } // end of if. 
        }//end of switch. 

    } //end of do.
    while (option != 0);
    
    return 0; 
}// end of main. 