#include<iostream>
using namespace std;
namespace first {
    int x=1;}
int main()
{
//namespace provides a soln for preventing name conflicts in large projects
//it allows us to group entities like classes, objects and functions under a name
//as long as the namespaces are different, we can have same names for functions, variables etc in different namespaces without any conflict
int x=10;
cout<<x<<endl;




return 0;
}