#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

class product{
public:
    int id;
    string name;
    double unitprice;
    int stock;
    bool status;


    product(){

    int id=0;
    string name="";
    double unitprice=0.00;
    int stock=0;
    bool status=0;


    }


};

class allproduct{
public:

    int i=0;
        int x,y,z;
        string w;
        string p[100];
        int a[100],b[100],c[100];


    void show(){

        ifstream fin;
        fin.open("product.txt");

        while(fin>>w>>x>>y>>z){
            p[i]=w;
            a[i]=x;
            b[i]=y;
            c[i]=z;
            i++;
        }
        fin.close();
        cout<<"Name"<<'\t'<<"price"<<'\t'<<"Stock"<<'\t'<<"Status"<<endl;
         cout<<"-----"<<'\t'<<"------"<<'\t'<<"-------"<<'\t'<<"--------"<<endl;
        int j;
        for(j=0;j<=i-1;j++)
        {
            cout<<p[j]<<'\t'<<a[j]<<'\t'<<b[j]<<'\t'<<c[j]<<endl;
        }

    }
};


class update{
public:
    int id;
    string name;
    double unitprice;
    int stock;
    bool status;

    int i;

    int d[10];
    string n[100];
    double up[10];
    int stk[5];
    bool sts[1];



void set_a(){
         cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_b(){
     cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_c(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_d(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_e(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_f(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}


void set_g(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_h(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_i(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}

void set_j(){
 cout<<"Enter id:";
         cin>>id;
         d[i]=id;

         cout<<"Enter name:";
         cin>>name;
         n[i]=name;

         cout<<"Enter unitprice:";
         cin>>unitprice;
         up[i]=unitprice;

         cout<<"Enter stock:";
         cin>>stock;
         stk[i]=stock;

         cout<<"Enter status:";
         cin>>status;
         sts[i]=status;

         cout<<endl<<"Updated successfully ."<<endl;
}





};




class profile : public product{
public:

    void get_a(){
        int id=10;
        string name="Samsung";
        double unitprice=35000;
        int stock=50;
        bool status=1;

        cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

    void get_b(){
        int id=11;
        string name="HTC";
        double unitprice=65300;
        int stock=35;
        bool status=0;

         cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

    void get_c(){
        int id=12;
        string name="Nokia";
        double unitprice=25100;
        int stock=100;
        bool status=1;

        cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

    void get_d(){
        int id=13;
        string name="Walton";
        double unitprice=8100;
        int stock=20;
        bool status=1;

         cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;

    }

    void get_e(){
        int id=14;
        string name="Tmobile";
        double unitprice=6500;
        int stock=36;
        bool status=1;

         cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;

    }

    void get_f(){
        int id=15;
        string name="Imobile";
        double unitprice=2500;
        int stock=36;
        bool status=1;

        cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

    void get_g(){
        int id=16;
        string name="Lumia";
        double unitprice=27500;
        int stock=36;
        bool status=1;

         cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;

    }

    void get_h(){
        int id=17;
        string name="Iphone";
        double unitprice=88000;
        int stock=36;
        bool status=0;

        cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

    void get_i(){
        int id=18;
        string name="Hauwei";
        double unitprice=10500;
        int stock=10;
        bool status=0;

        cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

    void get_j(){
        int id=19;
        string name="alcatel";
        double unitprice=13500;
        int stock=50;
        bool status=0;

       cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl<<"Unit price:"<<unitprice<<endl<<"Stocks:"<<stock<<endl<<"Status:"<<status<<endl;
    }

};






int main(){

    product *p=new product;
    allproduct *obj1=new allproduct;
    update *obj2=new update;
    profile *obj3=new profile;

    cout<<"****** Welcome to product management system ******"<<endl<<endl;
    cout<<"-------------------------------------------------"<<endl<<endl;

    int choise;

    int a;

    cout<<">>>>>>>>>'Index '<<<<<<<<<"<<endl<<endl;

    cout<<"1 : Search your product to see the profile."<<endl;
    cout<<"2 : View all products."<<endl;
    cout<<"3 : Edit details of product."<<endl;
    cout<<"4 : Delete."<<endl;
    cout<<"5 : Exit ."<<endl;

    cout<<"....................................."<<endl<<endl;;
    cout<<"Enter your choise: ";
    cin>>choise;
    cout<<"....................................."<<endl;







    switch(choise){

    case 1:

       cout<<"Search the ID:";
        cin>>a;
        if(a==10){
            obj3->get_a();
        }
        else if(a==11){
            obj3->get_b();
        }
        else if(a==12){
            obj3->get_c();
        }
        else if(a==13){
             obj3->get_d();
        }
        else if(a==14){
             obj3->get_e();
        }
        else if(a==15){
             obj3->get_f();
        }
        else if(a==16){
             obj3->get_g();
        }
        else if(a==17){
             obj3->get_h();
        }
        else if(a==18){
             obj3->get_i();
        }
        else if (a==19){
             obj3->get_j();
        }
        else
            cout<<"Not found !"<<endl;
        break;

    case 2:
        obj1->show();
        break;

    case 3:
        cout<<"Search the ID:";
        cin>>a;
        if(a==10){
            obj2->set_a();
        }
        else if(a==11){
            obj2->set_b();
        }
        else if(a==12){
            obj2->set_c();
        }
        else if(a==13){
            obj2->set_d();
        }
        else if(a==14){
            obj2->set_e();
        }
        else if(a==15){
            obj2->set_f();
        }
        else if(a==16){
            obj2->set_g();
        }
        else if(a==17){
            obj2->set_h();
        }
        else if(a==18){
            obj2->set_i();
        }
        else if (a==19){
            obj2->set_j();
        }
        else
            cout<<"Not found !"<<endl;
        break;

    case 4:

        delete p;
        delete obj1;
        delete obj2;
        delete obj3;

        cout<<"Delated successfully."<<endl;

        break;

    case 5:

        exit(0);
        break;

    default:

        cout<<" OOps! You have punched wrong ID"<<endl;


    }

return 0;
}
