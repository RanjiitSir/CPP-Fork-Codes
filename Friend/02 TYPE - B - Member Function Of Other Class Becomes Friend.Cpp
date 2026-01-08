#include<iostream>
#include<conio.h>

using namespace std;

class Category;
class Product;

class Product
{
            public :
                    Product()
                    {
                            cout<<"\n Inside Product Constructor" << endl;
                    }

                    ~Product()
                    {
                            cout<<"\n Inside Product Destructor" << endl;
                    }

                    void Customer();
};

class Category
{
            friend void Product :: Customer();

            private :
                            int Shop_ID;

                            void Accept()
                            {
                                    cout<<"\n Enter a Category ID : ";
                                    cin >> Cat_ID;
                            }
            protected :
                            int Cat_ID;
            public :
                            Category()
                            {
                                            this->Shop_ID = 100;
                                            this->Cat_ID = 1;
                                            cout<<"\n Inside Category Constructor" << endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor" << endl;
                            }

                            void Display(int Num)
                            {
                                    cout<< " Shop Id by Display Function is => " << Shop_ID << endl;
                                    cout<<"\n Inside Base Class Display Function "<< Num << endl;
                            }
};

void Product :: Customer()
{
                cout<<"\n Inside Member Function of Prod Class - Customer Function" << endl;
                getch();
                Category cObj;

                cout << " Category Id = " << cObj.Cat_ID << endl;     /// *ALLOWED - Bcz Member fun is friend of Category Class /// Protected Characteristic Access By Outsider of Class
                cout << " Shop Id = " << cObj.Shop_ID << endl;        /// *ALLOWED - Bcz Member fun is friend of Category Class /// Private Characteristic Access By Outsider of Class

                cObj.Accept();                                       /// *ALLOWED - Bcz Member fun is friend of Category Class  /// Private Member Function Access By Outsider of Class
                cObj.Display(21);                                    /// public Member Function Access By Outsider of Class

                return;
}

int main()
{
                Product pObj;

                pObj.Customer();

                getch();

                cout<<"\n Back To Main Function" << endl;

                getch();
                return 0;
}
