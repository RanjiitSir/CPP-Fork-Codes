#include"Prototypes.Cpp"

int main()
{
        char ch = '\0';
        int Choice = 0;
        Circle cObj;

        while(1)
        {
                    cout << "\n\t\t WELCOME To Calculator Application" << endl;

                    cout << "\n Choices : "<< endl;
                    cout << "\n\t 1. Circle \n\t 2. Rectangle \n\t 3. Square \n\t 4. Exit" << endl;

                    cout << "\n Select Choice : ";
                    cin >> Choice;

                    switch(Choice)
                    {
                            case 1:
                                    cout << "\n ----------------------------------------------- \n";
                                    cout << "\n Circle Initiated Successfully \n";
                                    cObj.Accept_Radius();

                                    cout << "\n\t 101. Enter New Radius \n\t 102. Area Of Circle \n\t 103. Circumference of Circle \n\t 104. Back To Main Menu" << endl;

                                    for(;;)
                                    {
                                        cout << "\n\n Select Choice : ";
                                        cin >> Choice;

                                        switch(Choice)
                                        {
                                                    case 101 :
                                                            cObj.Accept_Radius();
                                                            _getch();
                                                            break;
                                                    case 102:
                                                            cObj.Area_Of_Circle();
                                                            _getch();
                                                            break;
                                                    case 103:
                                                            cObj.Circumference_Of_Circle();
                                                            _getch();
                                                            break;
                                                    case 104:
                                                            goto Nxt;
                                                    default:
                                                            cout << "\n INVALID INPUT.";
                                                            break;
                                        }
                                    }

                                    Nxt:
                                        system("cls");
                                        break;

                            case 2:
                                    // Rect Code

                                    cout<<"Rect"<<endl;

                                    _getch();
                                    system("cls");
                                    break;

                            case 3:
                                    // Square Code

                                    cout<<"Square"<<endl;

                                    _getch();
                                    system("cls");
                                    break;

                            case 4:
                                    cout<<"\n Are You Sure Do you want to Exit(Y/N)???";
                                    ch = getche();

                                    if(ch == 'y' || ch == 'Y')
                                    {
                                        goto Out;
                                    }
                                    system("cls");
                                    break;

                            default :
                                    cout << "\n\n INVALID CHOICE Please Enter Valid Input."<<endl;
                                    //_getch();
                                    system("cls");

                                    break;
                    }

        }


        Out:
            cout<<"\n\n Thanks For Using Our Services!!!";

        _getch();
        return 0;
}
