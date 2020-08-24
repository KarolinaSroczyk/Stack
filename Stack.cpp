#include <iostream>
#include <stack>
#include<Windows.h>

using namespace std;
int choiceC;
stack <int> numbers;
char a;
void pop1()
{
    if (numbers.empty() == false)
    {
        cout << "the number removed from the stack is:" << numbers.top() << " ";
        numbers.pop();
        //Sleep(2000);
    }
    else
    {
        cout << "The stack is empty" << endl;
        //Sleep(2000);
    }
}

void push1()
{
        cout << "Enter the numbers" << endl;
        cin >> choiceC;
        numbers.push(choiceC);
        //Sleep(2000);
}

void size1()
{
    cout << "On the stack is " << numbers.size() << "  numbers" << endl;
    //Sleep(2000);
}

void empty1()
{
    if (numbers.empty())
    {
        cout << "The stack is empty" << endl;
        //Sleep(2000);
    }
    else
    {
        cout << "The stack is not empty" << endl;
        //Sleep(2000);
    }
}

void top1()
{
    cout << " The last number on stack is:" << numbers.top() << endl;
    cout << "Do you want to edit the lase number? Y/N" << endl;
    cin >> a;
    if (a == 'y' && 'Y')
    {
        cout << "Enter the number" << endl;
        cin >> choiceC;
        numbers.top() *= choiceC;
        cout << " The last number on stack is:" << numbers.top() << endl;
        //Sleep(2000);
    }
        
}

int main()
{
    int choice;
    
    do
    {
        //system("CLS");
        cout << "1 PUSH - Adds the element at the top of the stack " << endl;
        cout << "2 POP - Deletes the top most element of the stack " << endl;
        cout << "3 SIZE - Returns the size of the stack " << endl;
        cout << "4 EMPTY - Returns whether the stack is empty " << endl;
        cout << "5 TOP - Returns a reference to the top most element of the stack " << endl;
        cout << "6 EXIT " << endl;
        cin >> choice;

            switch (choice)
            {
            case 1:
                push1();
                break;
            case 2:
                pop1();
                break;
            case 3:
                size1();
                break;
            case 4:
                empty1();
                break;
            case 5:
                top1();
                break;
            }
    } while (choice != 6);
    return 0;
}
