//Program for function overloading

using namespace std;
#include<iostream>

class base
{
        private :
            void add(float a,int b)//not allowed : access specifier is not criteria of overloading
            {
                cout<<"\naddition="<<a+b;
            }
        public:
            void add(int a)
            {
                cout<<"\naddition="<<a+a;
            }
            void add(int *a)
            {
                cout<<"\naddition="<<*a+*a;
            }
            /*  void add(int &r)
            {
                cout<<"\naddition="<<r+r;
            }*/
           /* void add(int a)
            {
                cout<<"\naddition="<<a+a;   : inline is not a criteria
            }*/
            void add(short int a) //allowed : datatype modifiers
            {
                cout<<"\naddition="<<a+a;
            }
          /*  const void add(int a)
            {
                cout<<"\naddition="<<a+a;:  can not be overloaded

             /*  static void add(int a)
            {
                cout<<"\naddition="<<a+a;:  can not be overloaded (data qualifier)
            }*/
            void add(int a,int b)
            {
                cout<<"\naddition="<<a+b;
            }
            void add(int a,int b,int c)//allowed : number of parameters is criteria of overloading
            {
                cout<<"\naddition="<<a+a+c;
            }
            void add(double a,int b)// allowed : changing sequence is allowed but not with same size of data type
            {
                cout<<"\naddition="<<a+b;
            }
            void add(double a)// not allowed int case of datatype has same size eg here void add (float a) is not allowed
            {
                cout<<"\naddition="<<a+a;//allowed : number of parameters is the criteria
            }
};

class derived
{
    public:
    void add(int a,int b)
    {
        cout<<"\naddition="<<a+b;
    }
};
int main()
{
        base bobj;
       // const base bobj2;
        derived dobj;
        int b=6;
       // bobj.add(7.6);
        bobj.add(10);
        bobj.add(&b);// call by address allowed but reference and pointer overloading cant be used at same time but can be used separately as overloading criteria
       // bobj.add(b); call by reference
        //bobj2.add(2);not allowed
        bobj.add(2,5);
        bobj.add(6,2,9);
        bobj.add(7.6);
        bobj.add(6.4,6);
        dobj.add(6,4);// not allowed : overloading is not allowed across the class
        return 0;
}
