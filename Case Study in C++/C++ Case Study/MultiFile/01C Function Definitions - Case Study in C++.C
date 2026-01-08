
/*  Circle Class Methods & Constructors */

Circle :: Circle()
{
            Rad = Area = Circum = 0.0;

            cout << "\n Inside Default Constructor!!!" << endl;
}

Circle :: Circle(float R)
{
            Rad = R;
            Area = Circum = 0.0;

            cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Circle :: Circle(Circle &Ref)
{
            this -> Rad = Ref.Rad;
            this -> Area = Ref.Area;
            this -> Circum = Ref.Circum;

            cout << "\n Inside Copy Constructor!!!" << endl;
}

Circle :: ~Circle()
{
            cout << "\n Inside Destructor for Circle with Radius -> " << this -> Rad << endl;
}

void Circle :: Accept_Radius()
{
                cout << "\n Enter Radius = ";
                cin >> this -> Rad;
}

void Circle :: Area_Of_Circle()
{
                Area = Pi * Rad * Rad;

                cout << "\n Area for given Circle Calculated by Function as => " << Area ;
}

void Circle :: Circumference_Of_Circle()
{
                Circum = 2 * Pi * Rad;

                cout << "\n Circumference for given Circle Calculated by Function as => " << this -> Circum ;
}

/*  Rectangle Class Methods & Constructors */

Rectangle :: Rectangle()
{
            Length = Breadth = Area = Perimeter = 0.0;

            cout << "\n Inside Default Constructor!!!" << endl;
}

Rectangle :: Rectangle(float L, float B)
{
            Length = L;
			Breadth = B;
            Area = Perimeter = 0.0;

            cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Rectangle :: Rectangle(Rectangle &Ref)
{
            this -> Length = Ref.Length;
			this -> Breadth = Ref.Breadth;
            this -> Area = Ref.Area;
            this -> Perimeter = Ref.Perimeter;

            cout << "\n Inside Copy Constructor!!!" << endl;
}

Rectangle :: ~Rectangle()
{
            cout << "\n Inside Destructor for Rectangle with Length -> " << this -> Length << endl;
}

void Rectangle :: Accept_Sides()
{
                cout << "\n Enter Length = ";
                cin >> this -> Length;

				cout << "\n Enter Breadth = ";
                cin >> this -> Breadth;
}

void Rectangle :: Area_Of_Rectangle()
{
                Area = Length * Breadth;

                cout << "\n Area for given Rectangle Calculated by Function as => " << Area ;
}

void Rectangle :: Perimeter_Of_Rectangle()
{
                Perimeter = 2 * ( Length + Breadth);

                cout << "\n Perimeter for given Rectangle Calculated by Function as => " << this -> Perimeter ;
}

/*  Square Class Methods & Constructors */

Square :: Square()
{
			Side = Area = Perimeter = 0.0;

            cout << "\n Inside Default Constructor!!!" << endl;
}

Square :: Square(float S)
{
            Side = S;
            Area = Perimeter = 0.0;

            cout << "\n Inside Parameterized Constructor!!!" << endl;
}

Square :: Square(Square &Ref)
{
            this -> Side = Ref.Side;
            this -> Area = Ref.Area;
            this -> Perimeter = Ref.Perimeter;

            cout << "\n Inside Copy Constructor!!!" << endl;
}

Square :: ~Square()
{
            cout << "\n Inside Destructor for Square with Side -> " << this -> Side << endl;
}

void Square :: Accept_Side()
{
                cout << "\n Enter Side for Square = ";
                cin >> this -> Side;
}

void Square :: Area_Of_Square()
{
                Area = Side * Side;

                cout << "\n Area for given Square Calculated by Function as => " << Area ;
}

void Square :: Perimeter_Of_Square()
{
                Perimeter = 4 * Side;

                cout << "\n Perimeter for given Square Calculated by Function as => " << this -> Perimeter ;
}
