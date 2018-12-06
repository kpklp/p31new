#include <iostream>
   using namespace std;
   class MyClass
   {
    private:
        int a;
        double weight;
    public:
        MyClass(): a(0), weight(0){
            //a = -100;
            cout << "Construct\n";
        }
        void set_a(int num){ a = num; }
        int get_a(){ return a; }
        void set_weight(double w){ weight = w; }
        double get_weight(){ return weight; }

        void show_a()
        {
            cout << a  << "\n";
        }
        void show_weight()
        {
            cout << weight  << "\n";
        }
        ~MyClass(){
        cout << "Destruct\n";
        }
   };
/*
   void MyClass::set_a(int num)
{
        a = num;
}
   int MyClass::get_a()
   {
        return a;
    }
    void MyClass::show_a()
    {
    cout << a  << "\n";
    }
*/
   int main()
    {
        MyClass ob1, ob2;
        MyClass ob3;

        ob1.show_a();
        ob1.show_weight();
        //ob1.a = 10;
        //cout <<  ob1.a;
        ob1.set_a(10);
        cout << ob1.get_a() << "\t";

        ob1.set_weight(99.9);
        cout << ob1.get_weight() << "\t" << endl;
ob3 = ob1;
ob3.show_a();
ob3.show_weight();
/*
        ob2.set_a(99);


        ob2.set_a(-1);

        ob1.show_a();
        ob2.show_a();


        int *p = new int(5);

        cout << p << endl;
        cout << *p << endl;
        */
        return 0;
    }
