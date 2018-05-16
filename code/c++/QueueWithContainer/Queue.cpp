#include <iostream>
#include "../ListWithTemplate/List.h"
using namespace std;

template<class T,template<class>class Container = List>
class Queue
{
public:
    void Push(const T& x)
    {
        _con.PushFront(x);
    }
    void Pop()
    {
        _con.PopFront();
    }
    const T& Top()
    {
        _con.Top();
    }
    bool Empty()
    {
        _con.Empty();
    }
    void show()
    {
        _con.show();
    }
protected:
    Container<T> _con;
};
int main()
{
    Queue<string,List> q;
    q.Push("This ");
    q.Push("is ");
    q.Push("the ");
    q.Push("statement");
    q.Push("!");
    q.show();
    q.Pop();
    q.show();
    cout<<"栈顶元素："<<q.Top()<<endl;
    cout<<q.Empty()<<endl;
    return 0;
}