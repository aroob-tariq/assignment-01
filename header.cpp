#include <iostream>

using namespace std;

class complex
{
 public:

double re,img;

complex()

{re = 0;
img= 0;}

complex(double r, double i)

{re = r;
img= i;}

void add ( complex c, complex d)

{ 
re = c.re + d.re;
img =  c.img + d.img;

}

void sub(complex c, complex d)

{
    re = c.re - d.re;
img =  c.img - d.img;
}

void mul(complex c, complex d)
{
    re = c.re*d.re - c.img*d.img;
img =  d.re*c.img + c.re*d.img;
}

void divide(complex c, complex d)
{
 try 
{ if (d.re==0 && d.img==0)

{throw 0;}
   
 re = (c.re*d.re - c.img*d.img)/(d.re*d.re+d.img*d.img);
img = ( d.re*c.img - c.re*d.img)/(d.re*d.re+d.img*d.img);
}
  
  catch (int a)
    {cout<<"denominator is zero which is not possible"<<endl;}
}

void print()
{cout <<re<<"+"<<img<<"j"<<endl;}
};


struct node 
{
complex data;
node *next;
};

class linkedlist{

private: 
node *head ;

public:

linkedlist ()
{head =NULL;}

void insertatstart(complex val)

{node*n = new node;

n-> next =head;
n->data =val;
head = n;}
void insertnode( complex data, int pos)

{
    node *n = new node;
    n->data = data;

    
if (head == NULL) {
        return;
    }

  
  if (pos == 0) {
       n->next = head;
      
    }

 
   node *current = head;
    while (pos - 1 > 0) 
{
        current = current->next;
        pos--;
    }

  
  n->next = current->next;
    current->next = n;

    return ;
 }


void deleteNode( int pos) 

{
   if (head== NULL)
   {
      return;
   }
  
 node* temp =new node;
   temp = head;
   
 if (pos == 0)
    {
        head = temp->next; 
        delete temp;               
        return;
    }
   
 for (int i=0; temp!=NULL && i<pos-1; i++)
    {
        temp = temp->next;
    }
   
 if (temp == NULL || temp->next == NULL)
    {
        return;
    }
  
  node *next = temp->next->next;
    delete temp->next;  
    temp->next = next; 
}

void insertatend(complex data)

{
        node* temp=head;

     
   while(temp!=NULL) temp=temp->next;

       
     temp = new node;
       
 temp->data=data;
    
    temp->next=NULL;

       
 if(head==NULL) 
  
      {head=temp;}
      else 
       {
           node *n =new node;
           n= head;
        while(n->next != NULL)
            n=n->next;
        n->next =temp;
    }
}

void traverse()
{
node* temp= head;

while(temp!=NULL)
{temp->data.print();
temp=temp->next;}
cout<<endl;}

};