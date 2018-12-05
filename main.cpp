int main ()
{complex n1(-4, 5);

complex n2(-3,-3);

complex n3(-4,3);

complex x;

linkedlist a;

a.insertatstart(n3);

a.insertatstart(n2);

a.insertatstart(n1);

x.add(n1,n2);

a.insertatstart(x);

a.traverse();

x.sub(n1,n3);

a.insertatend(x);

a.traverse();

x.mul(n2,n3);

a.insertatend(x);

a.traverse();

x.divide(n1,n3);

a.deleteNode(4);

a.insertatend(x);

a.traverse();

return 0;}