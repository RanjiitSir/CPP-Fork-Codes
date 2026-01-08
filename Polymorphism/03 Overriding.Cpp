#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            int Cat_ID;

                            Category()
                            {
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

                            virtual void  Display(int Num)
                            {
                                    cout<<"\n Inside Category Class Display Function "<< Num;
                            }

                            void Accept()
                            {
                                    cout<<"\n Enter a Number : ";
                                    cin>>Cat_ID;
                            }
};

class  Product : public  Category
{
                private:
                            int  P_ID;

                public :
                            int Cat_ID;

                             Product()
                            {
                                            this->P_ID = 0;
                                            this->Cat_ID = 21;
                                            cout<<"\n Inside Product Constructor"<<endl;
                            }

                            ~Product()
                            {
                                            cout<<"\n Inside Product Destructor"<<endl;
                            }

                            void  Display(int Num)
                            {
                                    cout<<"\n Inside Product Class Display Function "<< Num<<endl;
                            }
};

int main()
{
                ///Category cObj;
                ///Product *pPtr = &cObj;              /// Downcasting - Not Allowed

                Product  pObj;
                Category *cPtr = &pObj;                 /// Upcasting - Allowed

                cPtr -> Accept();
                cout<<"\n Back To Main()\n";
                getch();

                cPtr->Display(15);
                cout<<"\n Back To Main()\n";

                getch();
                return 0;
}
