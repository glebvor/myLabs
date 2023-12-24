#include <iostream>


using namespace std;

class Node{
    private:
    int key;
    Node* p;

    public:
    Node(int value){this->key = value; this->p = nullptr;}
    ~Node(){}

    void setKey(int _key){this->key = _key;}
    void setP(Node* _p){this->p = _p;}

    int getKey(){return this->key;}
    Node* getP(){return this->p;}
};

class Stack{
    private:
    Node* top;
    int length = 0;

    public:
    Stack(){top = nullptr;}
    ~Stack(){}

    void setTop(Node* top){
        this->top = top;
    }

    Node* getTop(){return this->top;}

    void push(int value){
        this->length++;

        Node* temp = new Node(value);

        if(!temp){
            cout << "Stack Overflow\n" << endl;
            exit(1);
        }

        temp->setKey(value);
        temp->setP(top);
        top = temp;

    }

    void isEmpty(){
        if(top == nullptr){
            cout << "Stack is empty\n";
        }
        else{
            cout << "Stack is not empty\n";
        }
    }

    bool noCoutIsEmpty(){
        return top == nullptr;
    }

    void isFull(){
        cout << "It's a dynamic stack and it's never full\n";
    }

    void pop(){
        Node* temp;

        if(top == nullptr){
            cout << "Satck Underflow\n";
            exit(1);
        }
        else{
            this->length--;
            cout << top->getKey() << "\n";
            temp = top;
            top = top->getP();
            free(temp);
        }
    }

    void noCoutPop(){
        Node* temp;

        if(top == nullptr){
            cout << "Satck Underflow\n";
            exit(1);
        }
        else{
            this->length--;
            temp = top;
            top = top->getP();
            free(temp);
        }
    }

    void print(){
        Node* temp;

        if(top == nullptr){
            cout << "Satck Underflow\n";
            exit(1);
        }
        else{
            temp = top;
            while(temp != nullptr){
                cout << temp->getKey();
                temp = temp->getP();
                if(temp != nullptr){cout << " ";}
            }
            cout << "\n";
        }
    }

    void invertStack(){
        Node* temp;
        int *arr = new int[this->length];
        int n = 0;
        int tempLength = this->length;

        temp = top;
        while(temp != nullptr){
            arr[n] = temp->getKey();
            temp = temp->getP();
            n++;
        }
        this->remove();
        for(int i = 0; i < tempLength; ++i){
            this->push(arr[i]);
        }
        delete[] arr;
    }

    void copyStack(Stack stack){
        this->remove();
        stack.invertStack();
        while(stack.getTop() != nullptr){
            this->push(stack.getTop()->getKey());
            stack.setTop(stack.getTop()->getP());
        }
    }

    void remove(){
        while(top != nullptr){
            this->noCoutPop();
        }
    }

    void getLength(){
        cout << this->length << "\n";
    }

    int noCoutGetLength(){
        return this->length;
    }

    void addition(Stack stack){
        stack.invertStack();
        while(stack.getTop() != nullptr){
            this->push(stack.getTop()->getKey());
            stack.setTop(stack.getTop()->getP());
        }
    }

    void removeDouble(){
        Node* temp;
        int *arr = new int[0];
        int n = 0, ind = 0;

        this->invertStack();
        temp = top;
        while(temp != nullptr){
            for(int i = 0; i < n; ++i){
                if(arr[i] == temp->getKey()){
                    ind = 1;
                    break;
                }
            }
            if(ind == 0){
                arr[n] = temp->getKey();
                n++;
            }
            temp = temp->getP();
            ind = 0;
        }
        this->remove();
        for(int i = 0; i < n; ++i){
            this->push(arr[i]);
        }
        this->length = n;
        delete[] arr;
    }
};

int main(){
    Stack stack1;
    Stack stack2;
    stack1.isFull();
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.print();
    stack2.copyStack(stack1);
    stack2.print();
    stack2.pop();
    stack2.print();
    stack1.invertStack();
    stack1.print();
    stack2.addition(stack1);
    stack2.print();
    stack2.getLength();
    stack2.removeDouble();
    stack2.print();
    stack1.remove();
    stack1.isEmpty();


    return 0;
}
