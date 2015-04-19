#include"koolplot.h"
#include<iostream>>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
double factorial(double n);  //find factorial of a number
double determinant();//find the value of determinants
void matrix_addition();//adds 2 matrices
void matrix_subtraction();//subtracts 2 matrices
void matrix_multiplication();//multiplies 2 matrices
double quadratic(double a,double b,double c);//calculates roots of any quadraticfunction
int binary_to_deci_s();//converts binary to decimal signed
int binary_to_deci_us();//converts binary to decimal unsigned
int deci_to_binary();//converts decimal to binary
int octal_to_deci();//converts octal to decimal
int hexadeci_to_deci();//converts hexadecimal to decimal
double conversion_of_points();//converts conversion of points
double scalar_product();//does scalar and vector product
double exponential(double x);//find exponential of a number
float sinefunction(float x);//calculate sin function of any angle
double complex(double a,double b);//performs operation on complex no.
int dictionary(int c);//includes details of every function
long double inverse_sin(long double x);//calculates sin inverse
int physical_constants(int choice);//contains every physical constants
void conversion_of_units(int choice,double num);//converts one form from another

int main()                  //declaration of the main function
{       system("cls");
            int choice;


while(choice!=-1)
{

            cout<<"             *********SCIENTIFIC CALCULATOR************           "<<endl;

            cout<<"OPERATIONS THAT CAN BE PERFORMED\n\n1.HELP\n2.Standard calculations\n3.Logarithmic\n4.Exponential\n5.Factorial\n6.Trigonometric\n7.Inverse trigonometric\n8.Quadratic equations"<<endl;
            cout<<"9.Higher power of any no.\n10.Conversion of c-digits\n11.Conversion of units\n12.Physical constants\n13.Operation on Matrices\n14.Conversion of coordinates\n15.Operations on vectors\n16.Operations on complex numbers\n17.Equation of plane\n18.Squre root\n19.Graph"<<endl;
            cout<<"19.Enter -1 to close the calculator"<<endl;




        cout<<"                    ENTER THE OPERATION TO BE PERFORMED"<<endl;//enter the choice no.
        cin>>choice;

            system("cls");                      //takes the users choice and clear screen
switch (choice)                                 //declaration of switch statement
{
case -1:
    {
        cout<<"                THANKS FOR USING CALCULATOR"<<endl;

        break;
    }
     case 1:
            {
                int c;          //this function will behave like a maths dictionary which will have all the definition of mathematical operations.
                cout<<"Which topic you want to search??"<<endl;
                cout<<"\n2.Standard calculations\n3.Logarithmic\n4.Exponential\n5.Factorial\n6.Trigonometric\n7.Inverse trigonometric\n8.Quadratic equations"<<endl;
                cout<<"9.Higher power of any no.\n10.Conversion of c-digits\n11.Conversion of units\n12.Physical constants\n13.Operation on Matrices\n14.Conversion of coordinates\n15.Operations on vectors\n16.operations on complex numbers\n17.equation of plane\n18.Squreroot\n19.Graph\n"<<endl;

                cin>>c;
                dictionary(c);             //calling dictionary function
                break;

            }
    case 2:
        {
           int x,y,z;
           cout<<"1.Addition"<<endl;
           cout<<"2.Subtraction"<<endl;
           cout<<"3.Multiplication"<<endl;
           cout<<"4.Division"<<endl;
           cout<<"5.Permutation"<<endl;
           cout<<"6.Combination"<<endl;
           cout<<"Enter the operation to be performed";
           cin>>z;

system("cls");
          if(z==1)
           {
           double m,n,sum;
           cout<<"Enter 2 number"<<endl;
           cin>>m;
           cin>>n;
           sum=m+n;
           cout<<"Sum is="<<sum<<endl;
            return 0;
           }

           if(z==2)
           {
           double m,n,difference;
           cout<<"Enter 2 number"<<endl;
           cin>>m;
           cin>>n;
           difference=m-n;
           cout<<"Difference is="<<difference<<endl;
            return 0;
           }

           if(z==3)
           {
           double m,n,product;
           cout<<"Enter 2 number"<<endl;
           cin>>m;
           cin>>n;
           product=m*n;
           cout<<"Product is="<<product<<endl;
            return 0;
           }

           if(z==4)
           {
           double m,n,quotient;
           cout<<"Enter 2 number(divisor,dividend)"<<endl;
           cin>>m;
           cin>>n;
           quotient=m/n;
           cout<<"Quotient is="<<quotient<<endl;
            return 0;
           }

           if(z==5)
           {
           int m,n,ans,p;
           cout<<"Enter 2 number(nPm)[n>m]"<<endl;
           cin>>n;
           cin>>m;

           if(n>m)
           {int x,y;
          x=factorial(n);               //calling factorial function
          y=factorial((n-m));
          p=x/y;
          cout<<"answer="<<p<<endl;
           return 0;}
}
else{
            cout<<"Wrong input"<<endl;

           }

           if(z==6)
           {
           int m,n,p;
           double ans;
           cout<<"Enter 2 number(nCm)[n>m]"<<endl;      //n>m
           cin>>n;
           cin>>m;

           if(n>m)
           {    int x,y,o;
            x=factorial(n);
            y=factorial((n-m));
            o=factorial(m);
            p=o*y;
            ans=x/p;
        cout<<"Answer="<<ans<<endl;
            return 0; }
else{
    cout<<"Wrong input"<<endl;
            return 0;

           }
          break;
           }

    case 3:
        {
            cout<<"Enter no. whose logarithmic value to be calculated"<<endl;
            double n;
            cin>>n;
            double answ;//function to do logarithmic. passing a pointer to double
            if(n<0)
            {
                cout<<"Wrong input"<<endl;
                return 0;
                break;
            }
            else{answ=log(n);

            cout<<"Answer is:"<<answ<<endl;
            return 0;


        }
        break;
        }
    case 4:
        {
           cout<<"Enter no. whose exponential value to be calculated"<<endl;
            double n,s;
            cin>>n;
            double answ;              //function to do exponential.
            answ=exponential(n);       //passing address of n

            cout<<"Answer is:"<<answ<<endl;
            return 0;



              break;
        }
    case 5:
        {
            double i,x,fact,ans;
            fact=1;

                cout<<"Enter no.";
                cin>>x;

            if(x<0)
                cout<<"Wrong input"<<endl;

            else{
                ans=factorial(x);//answer is calculated by calling factorial function
                cout<<"Factorial:"<<ans<<endl;
             return 0;
             }
                break;
        }
    case 6:
            {
                int c;   //enter your choice
                cout<<"1.sin"<<endl;
                cout<<"2.cos"<<endl;
                cout<<"3.tan"<<endl;
                cout<<"4.cot"<<endl;
                cout<<"5.cosec"<<endl;
                cout<<"6.sec"<<endl;
                cout<<"trignometric function to be performed"<<endl;//different function call for each operations

                cin>>c;

                system("cls");

            if(c==1)
                {
                    float x,ans;
                        cout<<"Give angle in degree:"<<endl;
                        cin>>x;
                    ans=sinefunction(x);          //sine function is called
                    cout<<ans;
                return 0;
                }

            if(c==2)
                {
                    float x,ans,p,q,y;
                        cout<<"Give angle in degree:"<<endl;
                        cin>>x;

            if(x>0)
                {
                for(int j=0;x>180;j++){
                    x=x-360;
                    }
                }
            else if(x<0)
                {
                for(int k=0;x<-180;k++){
                    x=x+360;
                    }
                }
                    x=abs(x);
                    p=sinefunction(x);
                    q=1-p*p;
                    ans=sqrt(q);     //q is value of cos function
              if(x>90&&x<270)
                    ans=-1*ans;
                    cout<<"Answer="<<ans<<endl;
              return 0;
                }
            if(c==3)
                {
                   float x,ans,p,q,r,y;
                    cout<<"give angle in degree:"<<endl;
                    cin>>x;
                if(x>360)
                {
                y=x/360;
                x=x-y*360;
                }
                    p=sinefunction(x);
                    r=1-p*p;
                    q=sqrt(r);
                if(x>90&&x<270)
                        q=-1*q;
                        ans=p/q;

                    cout<<"Answer="<<ans;
              return 0;

                }
                if(c==4)
                {
                   float x,ans,p,q,r,t,y;
                    cout<<"Give angle in degree:"<<endl;
                    cin>>x;
              if(x>360)
                {
                y=x/360;
                x=x-y*360;
                }
                    p=sinefunction(x);
                    r=1-p*p;
                    q=sqrt(r);
                    t=p/q;
                    ans=1/t;

                    cout<<"Answer="<<ans;
              return 0;
                }

                if(c==5)
                {
                float x,p,ans,y;
                cout<<"Give angle in degree:"<<endl;
                cin>>x;

                if(x>360)
                    {
                    y=x/360;
                    x=x-y*360;
                    }
                    p=sinefunction(x);
                    ans=1/p;
                cout<<"Answer="<<ans;
        return 0;
        }

        if(c==6)
        {
             float x,ans,p,q,r,y;
                cout<<"give angle in degree:"<<endl;
                cin>>x;

                p=sinefunction(x);
                r=1-p*p;
                q=sqrt(r);
                ans=1/q;
              if(x>90&&x<270)
                ans=-1*ans;
                cout<<"Answer="<<ans;
              return 0;
        }

              break;
            }
    case 7:
            {
                int c;//function to do inverse trignometry

                 cout<<"which operation you want to perform"<<endl;
                 cout<<"1.arc sine"<<endl;
                 cout<<"2.arc cos"<<endl;
                 cout<<"3.arc tan"<<endl;
                 cout<<"4.arc cot"<<endl;
                 cout<<"5.arc sec"<<endl;
                 cout<<"6.arc cosec"<<endl;

                 cin>>c;

                  long double n;
                    cout<<"Enter the number"<<endl;
                    cin>>n;
  system("cls");
                 if(c==1)
                 {
                     long double ans;

                    if(n<-1||n>1){cout<<"invallid input";
                    }
                    else
                    {
                    ans=inverse_sin(n);
                    cout<<"The ans is= "<<ans<<endl;
                  return 0;
                    }
                 }
                 if(c==2)
                 {
                     long double ans,p,r;

                     if(n<-1||n>1){cout<<"invallid input";
                     }
                     else
                     {
                     ans=3.14519/2-inverse_sin(n);
                     cout<<"The ans is= "<<ans<<endl;
                     return 0;
                    }
                  }
                 if(c==3)
                 {
                  long double ans,r,p,s;

                    s=1+n*n;
                    s=sqrt(s);
                    p=n/s;
                    ans=inverse_sin(p);

                     cout<<"The ans is= "<<ans<<endl;
                 return 0;
                 }
                 if(c==4)
                 {
                  long double answ,r,p,s,ans;

                    s=1+n*n;
                    s=sqrt(s);
                    p=n/s;
                    answ=inverse_sin(p);
                    ans=90-answ;

                     cout<<"The ans is= "<<ans<<endl;
                  return 0;
                  }
                     if(c==5)
                     {
                       long double ans,p,n1,r;
                       n1=1/n;

                        if(((n>-1)&&(n<1))){cout<<"invalid output";
                        }
                        else
                        {
                            p=1-n1*n1;
                            r=sqrt(p);
                            ans=inverse_sin(r);
                            cout<<"The ans is="<<ans<<endl;
                        return 0;
                        }

                    }

                    if(c==6)
                         {
                             long double answ,p,n1,ans,r;
                       n1=1/n;

                            if((n>-1)&&(n<1)){cout<<"invalid output";
                            }
                            else
                            {
                                p=1-n1*n1;
                                r=sqrt(p);
                                answ=inverse_sin(r);
                                ans=90-answ;

                                    cout<<"The ans is="<<ans<<endl;
                            return 0;
                              }
                           }

              break;
            }


    case 8:
            {
              int a,b,c;

             cout<<"Quadratic equation should be of form a(x*x)+b(x)+c"<<endl;
             cout<<"Give the value of a,b and c respectively"<<endl;
             cin>>a;
             cin>>b;
             cin>>c;

             quadratic(a,b,c);//function to use shridharacharya formula

            break;
            }

    case 9:
            {
             double x,n,ans;

             cout<<"Enter the no."<<endl;
             cin>>x;
             cout<<"Power to be calculated(any Integer)"<<endl;
             cin>>n;

                ans=pow(x,n);
                cout<<n<<"th power of "<<x<<" is "<<ans<<endl;
            return 0;

                break;
            }
    case 10:
            {
               cout<<"Which conversion you want to perform"<<endl;//conversion of base of numbers.

                cout<<"1.Binary to decimal(signed)"<<endl;
                cout<<"2.Binary to decimal(unsigned)"<<endl;
                cout<<"3.Decimal to Binary"<<endl;
                cout<<"4.Octal to decimal(signed)"<<endl;
                cout<<"5.Hexadecimal to decimal"<<endl;

                int x,p;
                cin>>x;
   system("cls");
                if(x==1)
                    p=binary_to_deci_s();
                if(x==2)
                    p=binary_to_deci_us();
                if(x==3)
                    p=deci_to_binary();
                if(x==4)
                    p=octal_to_deci();
                if(x==5)
                    p=hexadeci_to_deci();

            break;
            }

    case 11:
            {
                int ch; //conversion of units.

                cout<<"Which conversion would you like to do"<<endl;

                cout<<"1.in-cm"<<endl;
                cout<<"2.cm-in"<<endl;
                cout<<"3.ft-m"<<endl;
                cout<<"4.m-ft"<<endl;
                cout<<"5.yd-m"<<endl;
                cout<<"6.m-yd"<<endl;
                cout<<"7.mile-km"<<endl;
                cout<<"8.km-mile"<<endl;
                cout<<"9.acre-m^2"<<endl;
                cout<<"10.m^2-acre"<<endl;
                cout<<"11.farhenheit-celsius"<<endl;
                cout<<"12.celsius_farhenheit"<<endl;
                cout<<"13.joules-calorie"<<endl;
                cout<<"14.calorie-joule"<<endl;
                cout<<"15.gallon-litre"<<endl;
                cout<<"16.liter-gallon"<<endl;
                cout<<"17.atm-pascal"<<endl;
                cout<<"18.pascal-atm"<<endl;
                cout<<"19.hp-W"<<endl;
                cout<<"20.W-hp"<<endl;

                cin>>ch;

                double n;

                cout<<"enter the value"<<endl;
                cin>>n;
    system("cls");
                conversion_of_units(ch,n);

    break;

            }

    case 12:
            {
                int ch,c;

                cout<<"Which physical constant do you want to know about"<<endl;//physical constant

                cout<<"1.Mass of proton "<<endl; //eg planks constant,avagadro no.,rydberg constant,gravitational const.,
                cout<<"2.Mass of neutron "<<endl;
                cout<<"3.Mass of electron  " <<endl;
                cout<<"4.Bohr's radius "<<endl;
                cout<<"5.Planks' constant "<<endl;
                cout<<"6.Avogadro's no. "<<endl;
                cout<<"7.Boltzman constant "<<endl;
                cout<<"8.Gas constant "<<endl;
                cout<<"9.Acceleration due to gravity(g)"<<endl;
                cout<<"10.Electonic charge (e) "<<endl;
                cout<<"11.Stefan-boltzman constant constant "<<endl;
                cout<<"12.Gravitational constant(G)"<<endl;
                cout<<"13.Magnetic constant() "<<endl;
                cout<<"14.Electric constant() "<<endl;
                cout<<"15.Compton wavelength()"<<endl;
                cout<<"16.Faraday constant (F) "<<endl;
                cout<<"17.Fine stucture constant() "<<endl;
                cout<<"18.Atomic mass unit(u)"<<endl;
                cout<<"19.Rydberg's constant"<<endl;
                cout<<"20.Molar volume()"<<endl;
                cout<<"21.Speed of light (c) in vaccum"<<endl;

                cout<<"Enter your choice"<<endl;
                cin>>ch;
        system("cls");

                c=physical_constants(ch);

                break;
            }


    case 13:
            {
                int m,n,p,q;

                 cout<<"Operation to be done-"<<endl;
                 cout<<"1.Matrix addition"<<endl;
                 cout<<"2.Matrix subtraction"<<endl;
                 cout<<"3.Matrix multiplication"<<endl;
                 cout<<"4.Determinant"<<endl;

                   int x;
                 cin>>x;
system("cls");
                if(x==1)
                {
                 matrix_addition();
                 }

                 if(x==2)
                {
                 matrix_subtraction();
                    }

                 if(x==3)
                {
                 matrix_multiplication();
                    }

                 if(x==4)
                {

                  double ans;
                  ans=determinant();
                  cout<<"Answer="<<ans;                          //function to calculate the determinant of matrix}

            }
            break;

}

    case 14:
            {
                double z;
              z=conversion_of_points();

               break;
                 //the function called will convert co-ordinates from reference frame to another

            break;
}
    case 15:


            {
               scalar_product();

               break; //the function called will carry on simple operations on vectors.
}
    case 16:
            {
               double x,y;//the function called will carry on operations on complex numbers.

                cout<<"Enter the compex no. in form a+ib(a is real part and b is imaginary part"<<endl;
                cin>>x>>y;

                int c;

                cout<<"Which operation would you like to do?"<<endl;
                cout<<"1.Conjugate"<<endl;
                cout<<"2.Argument"<<endl;
                cout<<"3.Modulus"<<endl;
                cin>>c;

           system("cls");

               if(c==1)
                    {
                        double w;

                        w=-1*y;
                        cout<<"conjugate is: "<<x<<","<<"i("<<w<<")"<<endl;
                    return 0;

                    }
                if(c==2)

                    {
                        long double ans,r,p,s,n;

                        n=y/x;
                        s=1+n*n;
                        s=sqrt(s);
                        p=n/s;
                        ans=inverse_sin(p);

                        if(x<0)
                            ans=ans+180;
                            cout<<"The ans is ="<<ans<<endl;
                     return 0;
                    }
                if(c==3)
                {
                    double m,n;

                    n=x*x+y*y;
                    m=sqrt(n);
                        cout<<"Modulus is:"<<m<<endl;
                    return 0;
                }

            break;
}
        case 17:
            {
                double x,ans;

                cout<<"Enter the number"<<endl;
                cin>>x;

                ans=sqrt(x);

                cout<<"Square root of "<<x<<" is "<<ans<<endl;
            return 0;

                break;
}
        case 18:
            {
                cout<<"In which form do you want to take out the eqn."<<endl;
                cout<<"1. A normal and a point is given."<<endl;
                cout<<"2. three points are given."<<endl;

                int c;
                cin>>c;
            system("cls");
                if(c==1)
                {
                    double n1,n2,n3,p1,p2,p3,s;

                    cout<<"Give direction ratio of normal of the plane:"<<endl;
                    cin>>n1>>n2>>n3;
                    cout<<"Give points(x,y,z) in the form of (p1,p2,p3) through which plane is passing."<<endl;
                    cin>>p1>>p2>>p3;
                    s=(n1*p1+n2*p2+n3*p3);


                    cout<<"("<<n1<<")x+("<<n2<<")y+("<<n3<<")z="<<s<<endl;
                return 0;    }

                else if(c==2)
                {
                        double A[3],B[3],C[3],s;
                    cout<<"Enter first point(x,y,z)"<<endl;

                        for(int i=0;i<=2;i++)
                            {
                                cin>>A[i];
                            }
                    cout<<"Enter second point(x,y,z)"<<endl;

                        for(int i=0;i<=2;i++)
                            {
                                cin>>B[i];
                            }

                cout<<"Enter third point(x,y,z)"<<endl;
                        for(int i=0;i<=2;i++)
                            {
                                cin>>C[i];
                            }
                double ans[3];
                ans[0]=A[1]*B[2]-A[2]*B[1];
                ans[1]=A[2]*B[0]-A[0]*B[2];
                ans[2]=A[0]*B[1]-A[1]*B[0];

                s=ans[0]*C[0]+ans[1]*C[1]+ans[2]*C[2];

            cout<<"("<<ans[0]<<")x+("<<ans[1]<<")y+("<<ans[2]<<")z="<<s<<endl;
        return 0;
}


                break;
}

      case 19:
      {
           int f;
            cout<<"select the number to plot that type of graph :"<<endl;
            cout<<"1.Trignometric"<<endl;
            cout<<"2.Quardatic and Others"<<endl;
            cin>>f;
      system("cls");

      if(f==1)
      {
      int m;
        cout<<"which function you need to do"<<endl;
               cout<<"1.sin"<<endl;
               cout<<"2.cos"<<endl;
               cout<<"3.tan"<<endl;
               cout<<"4.asin"<<endl;
               cout<<"5.acos"<<endl;
               cout<<"6.atan"<<endl;
                cout<<"7.sinh"<<endl;
               cout<<"8.cosh"<<endl;
               cout<<"9.tanh"<<endl;
        cin>>m;

            if(m==1)
                {
                    int i,j;
                    float p,q;

                    cout<<"enter range of ur graph:";
                    cin>>p>>q;
                    cout<<"Enter the power of x to which sin operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;

                    Plotdata x(p,q), y = pow(sin(pow(x,j)),i);//USE OF KOOLPLOT LIBRARY
                    plot(x, y);
                return 0;
                }

            if(m==2)
                {
                  int i,j;
                  float p,q;
                  cout<<"enter range of ur graph:";
                  cin>>p>>q;

                    cout<<"Enter the power of x to which cos operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(cos(pow(x,j)),i);
                            plot(x, y);
                return 0;
                }

            if(m==3)
                {
                  int i,j;
                  float p,q;
                  cout<<"enter range of ur graph:";
                  cin>>p>>q;

                    cout<<"Enter the power of x to which cos operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(tan(pow(x,j)),i);
                            plot(x, y);
                return 0;
                }
                   if(m==4){
                  int i,j;
                  float p,q;
                  cout<<"enter range of ur graph:";
                  cin>>p>>q;

                    cout<<"Enter the power of x to which sin operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(asin(pow(x,j)),i);
                            plot(x, y);
                return 0;
                }

                if(m==5){

                  int i,j;
                  float p,q;
                  cout<<"enter range of ur graph:";
                  cin>>p>>q;

                    cout<<"Enter the power of x to which cos operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(acos(pow(x,j)),i);
                            plot(x, y);
                            return 0;}

                 if(m==6)
                 {
                            int i,j;
                            float p,q;
                            cout<<"enter range of ur graph:";
                            cin>>p>>q;

                    cout<<"Enter the power of x to which cos operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(atan(pow(x,j)),i);
                            plot(x, y);
                    return 0;
                    }

                    if(m==7)
                    {
                        int i,j;
                        float p,q;
                        cout<<"enter range of ur graph:";
                        cin>>p>>q;

                        cout<<"Enter the power of x to which sin operate: ";
                        cin>>j;
                        cout<<"Enter the power of sin:";
                        cin>>i;
                        Plotdata x(p,q), y = pow(sinh(pow(x,j)),i);
                            plot(x, y);
                    return 0;
                    }

                if(m==8)
                {
                  int i,j;
                  float p,q;
                  cout<<"enter range of ur graph:";
                  cin>>p>>q;

                    cout<<"Enter the power of x to which cos operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(cosh(pow(x,j)),i);
                            plot(x, y);
                return 0;
                }

                 if(m==9)
                 {
                  int i,j;
                  float p,q;
                  cout<<"enter range of ur graph:";
                  cin>>p>>q;

                    cout<<"Enter the power of x to which cos operate: ";
                    cin>>j;
                    cout<<"Enter the power of sin:";
                    cin>>i;
                        Plotdata x(p,q), y = pow(tanh(pow(x,j)),i);
                            plot(x, y);
                return 0;
                }

                 }

            if(f==2)
                {
                        int m;
                    cout<<"which function you need to do"<<endl;
                           cout<<"1.Linear"<<endl;
                           cout<<"2.Quardatic"<<endl;
                           cout<<"3.cubic"<<endl;
                           cout<<"4.Exponential"<<endl;
                           cout<<"5.Logarthmic"<<endl;
                           cout<<"6.Any power of x"<<endl;
                    cin>>m;

                    if(m==1)
                    {
                        float z,c;
                        float p,q;

                        cout<<"enter range of ur graph:";
                        cin>>p>>q;

                        cout<<"The slope of the line:";
                        cin>>z;
                        cout<<"Enter the constant(if no contant then press 0):";
                        cin>>c;

                        Plotdata x(p,q), y = z*x - c;
                        plot(x, y);
               return 0;


                    }

                    if(m==2)
                    {
                        int a,b,c;
                        float p,q;

                        cout<<"enter range of ur graph:";
                        cin>>p>>q;

                        cout<<"Enter the cofficeint of x^2:";
                        cin>>a;
                        cout<<"Enter the cofficeint of x:";
                        cin>>b;
                        cout<<"Enter the constant(if no contant then press 0):";
                        cin>>c;
                            Plotdata x(p,q), y = a*pow(x,2)+b*x+c;
                            plot(x, y);
                        return 0;


                    }

                    if(m==3)
                    {
                            int a,b,c,d;
                            float p,q;
                          cout<<"enter range of ur graph:";
                          cin>>p>>q;

                            cout<<"Enter the cofficeint of x^3:";
                            cin>>d;
                             cout<<"Enter the cofficeint of x^2:";
                            cin>>a;
                            cout<<"Enter the cofficeint of x:";
                            cin>>b;
                            cout<<"Enter the constant(if no contant then press 0):";
                            cin>>c;
                            Plotdata x(p,q), y = d*pow(x,3)+a*pow(x,2)+b*x+c;
                            plot(x, y);
                    return 0;
                    }
                   if(m==4)
                   {
                           int i,j;
                           float p,q;
                          cout<<"enter range of ur graph:";
                          cin>>p>>q;

                           cout<<"Enter the power of x that operate on exp:";
                           cin>>i;
                           cout<<"Enter the power of exp:";
                           cin>>j;
                            Plotdata x(p,q), y = pow(exp (pow(x,i)),j);
                            plot(x, y);

                    return 0;
                    }
                    if(m==5)
                           {
                                       int i,j;
                                       float p,q;
                                      cout<<"enter range of ur graph:";
                                      cin>>p>>q;


                                       cout<<"Enter the power of x that operate on log:";
                                       cin>>i;
                                       cout<<"Enter the power of log:";
                                       cin>>j;
                                        Plotdata x(p,q), y = pow(log (pow(x,i)),j);
                                        plot(x, y);
                                return 0;
                            }

                    if(m==6)
                    {
                       int n;
                       float p,q;
                      cout<<"enter range of ur graph:";
                      cin>>p>>q;

                       cout<<"Enter the power of x:";
                       cin>>n;
                        Plotdata x(p,q), y = pow(x,n);
                        plot(x, y);
                            return 0;
                    }


                   }



                    }





                    default:
                        cout<<"Wrong choice"<<endl;


}
}
}//there will be function call for each operation (call by value)
}

double factorial(double n)
{
    double f=1;
    if(n==0)
        return f;
    else if(n>0)
    {
        for(int i=1;i<=n;i++)
    {
            f=f*i;
    }
            return f;

    }
}
double determinant()
{
    int x;
    cout<<"Type of matrix"<<endl;
    cout<<"1. 2x2"<<endl;
    cout<<"2. 3x3"<<endl;

    cin>>x;
        if (x==1)
            {
                double matrix[2][2];
                cout<<"give elements"<<endl;

        for(int i=0;i<=1;i++)
            {
             for(int j=0;j<=1;j++)
             cin>>matrix[i][j];
            }

            double ans;
            ans=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
            return ans;


         }

        if(x==2)
         {
             double matrix[3][3];

         cout<<"Give elements"<<endl;
         for(int i=0;i<=2;i++)
         {
             for(int j=0;j<=2;j++)
             cin>>matrix[i][j];
         }

             double ans;

             ans=matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]);
    return ans;


    }

}

void matrix_addition()
{
    int m,n,p,q;

    cout<<"Give order of matrix 1"<<endl;
    cin>>m>>n;

    cout<<"Give order of matrix 2"<<endl;
    cin>>p>>q;

    if((m!=p)||(n!=q))
    {
        cout<<"Addition not possible"<<endl;

        return;
    }
    else
    {

            double matrix_a[m][n];
            double matrix_b[p][q];

            double ans[m][n];

            cout<<"Enter matrix a"<<endl;
                for(int i=0;i<m;i++)
                    {

                        for(int j=0;j<n;j++)
                        {
                            cin>>matrix_a[i][j];
                        }
                    }

             cout<<"Enter matrix b"<<endl;

                for(int i=0;i<m;i++)
                {

                    for(int j=0;j<n;j++)
                    {
                        cin>>matrix_b[i][j];
                    }
                }


                     for(int i=0;i<m;i++)
                {

                    for(int j=0;j<n;j++)
                {
                  ans[i][j]=matrix_a[i][j]+matrix_b[i][j];
                }
            }

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {

               cout<<"Answer="<<ans[i][j]<<" ";
               getch();
               if(j==(n-1))
                cout<<endl;
           }
       }

        }


}
void matrix_subtraction()
{
    int m,n,p,q;
    cout<<"Give order of matrix 1"<<endl;
    cin>>m>>n;

    cout<<"Give order of matrix 2"<<endl;
    cin>>p>>q;

    if((m!=p)||(n!=q))
    {
        cout<<"Subtraction not possible"<<endl;
        return;
    }
    else{

            double matrix_a[m][n];
            double matrix_b[p][q];

            double ans[m][n];
            cout<<"Give elements of matrix a(row wise)"<<endl;

            for(int i=0;i<m;i++)
        {

                for(int j=0;j<n;j++)
                {
                    cin>>matrix_a[i][j];
                }
            }

             cout<<"Give elements of matrix b(row wise)"<<endl;
            for(int i=0;i<m;i++)
                {

                for(int j=0;j<n;j++)
                {
                    cin>>matrix_b[i][j];
                }
            }


                for(int i=0;i<m;i++)
                {

                    for(int j=0;j<n;j++)
                {
                    ans[i][j]=matrix_a[i][j]-matrix_b[i][j];
                }
            }

       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {

               cout<<"Answer="<<ans[i][j]<<" ";
                if(j==(n-1))
                cout<<endl;
           }
       }

        }


}

void matrix_multiplication()
{
     int m,n,p,q;
    cout<<"Give order of matrix 1"<<endl;
    cin>>m>>n;

    cout<<"Give order of matrix 2"<<endl;
    cin>>p>>q;
    double matrixA[m][n];
    double matrixB[p][q];
    if(n!=p)
    {
        cout<<"Matrix multiplication not possible"<<endl;

        return;
    }
    else

    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            cin>>matrixA[i][j];
            }
        }
         for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            cin>>matrixB[i][j];

        }
    }

    double ans[m][q];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j]=0;
            for(int k=0;k<n;k++)
            {
                ans[i][j]=ans[i][j]+matrixA[i][k]*matrixB[k][j];
            }
        }
    }

for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {

               cout<<"Answer="<<ans[i][j]<<" ";
               getch();
               if(j==(n-1))
                cout<<endl;
           }
       }

}



double quadratic(double a,double b,double c)
{
 double root1,m,root2;

    m=(b*b)-4*a*c;
if(m>0)
    {
        m=(b*b)-4*a*c;
        m=sqrt(m);

        root1=(-1*b+m)/(2*a);
        root2=(-1*b-m)/(2*a);

        cout<<"Real and distinct roots"<<endl;
        cout<<"Root1:"<<root1<<"Root2: "<<root2;
    return 0;

    }
if(m<0)
    {
    cout<<"Imaginary roots"<<endl;
    return 0;
    }
if(m==0)
    {
        m=(b*b)-4*a*c;
        m=sqrt(m);

        root1=(-1*b+m)/(2*a);
        root2=(-1*b-m)/(2*a);

        cout<<" Real and equal roots: "<<root1;
        return 0;
    }
    return 0;
}


int binary_to_deci_s()
   {
       int l;
   cout<<"Enter the length of binary:"<<endl;
   cin>>l;

   int A[l];
   cout<<"Digits should contain only 0 or 1"<<endl;
    for(int i=0;i<l;i++)
        {
       cin>>A[i];
        }

if(A[0]==1)
    {
   for(int i=1;i<l;i++)
    {
       if (A[i]==0)
        A[i]=1;
       else if(A[i]==1)
        A[i]=0;
   }

   double j,k,ans=0,p;
   for(int i=l-1,j=0;i>=1;i--,j++)
   {
        k=pow(2,j);
        p=A[i]*k;

       ans=ans+p;
    }

        ans=ans+1;ans=ans*(-1);
        cout<<"Answer is: "<<ans<<endl;
    return 0;

return 0;
}
else
{
   int j,k,ans=0,p;
   for(int i=l-1,j=0;i>=1;i--,j++)
   {
        k=pow(2,j);
        p=A[i]*k;

       ans=ans+A[i]*k;
    }
        cout<<"Answer is: "<<ans<<endl;
        return 0;

}
}

int binary_to_deci_us()
{

    int l;
   cout<<"Enter the length of binary:"<<endl;
   cin>>l;

   int A[l];
   cout<<"Digits should contain only 0 or 1"<<endl;
   for(int i=0;i<l;i++)
        {
       cin>>A[i];
        }

int ans,k,j=0;
for(int i=l-1;i>=0;i--,j++)
{

    k=pow(2,j);
    ans=ans+A[i]*k;
}
        cout<<"Answer is: "<<ans<<endl;
    return 0;
}


int deci_to_binary()
{

    int A[100];
    int x,k,r;
    cout<<"Enter the decimal number"<<endl;
    cin>>x;

    k=x;
    int l=0;
        for(int i=0;i<100;i++,l++)
            {
                r=k%2;
                k=k/2;

        if(r==1)
            A[i]=1;
        if(r==0)
            A[i]=0;
        if(k==1)
        {
            A[i+1]=1;
            l=l+1;
            break;
        }

    }


        for(;l>=0;l--)
            {
                cout<<A[l];
            return 0;
            }
        return 0;
}

int octal_to_deci()
{
    int x;
    cout<<"Give an octal number : "<<endl;
    cin>>x;
    int currlastdigit,n,ans,p,power;
    n=x;p=10;ans=0;
    for(int i=0;i<=100;i++)
    {
        currlastdigit=n%p;
        power=pow(8,i);
        ans=ans+currlastdigit*power;

        n=n/10;



    }
    cout<<"Answer: "<<ans;
    return 0;

    }
    int hexadeci_to_deci()
    {
         int x;
        cout<<"Give an hexadecimal number(0x is understood) : "<<endl;
        cin>>x;
        int currlastdigit,n,ans,p,power;
        n=x;p=10;ans=0;
            for(int i=0;i<=100;i++)
                {
                    currlastdigit=n%p;
                    power=pow(16,i);
                    ans=ans+currlastdigit*power;

                    n=n/10;
}
        cout<<"Answer: "<<ans;
        return 0;

    }
double conversion_of_points()

{

        cout<<"Type of conversion:"<<endl;
        cout<<"1.(x,y) to polar coordinates"<<endl;
        cout<<"2.Polar to (x,y) coordinates"<<endl;
        cout<<"Give your choices"<<endl;

        int c;
        cin>>c;
if(c==1)
{
    float x,y,r,o,n,s,p,ans;
    cout<<"Enter cartesian coordinates(x,y)"<<endl;
    cin>>x>>y;
    n=y/x;

                    s=1+n*n;
                    s=sqrt(s);
                    p=n/s;
                    ans=inverse_sin(p);

                    r=x*x+y*y;
                    r=sqrt(r);
    if(x<0)
        ans=ans+180;
    if((x>0)&&(y<0))
        ans+=360;


   cout<<"Polar coordinates are: "<<endl;
   cout<<"("<<r<<","<<ans<<")"<<endl;
   return 0;
   return 0;
    }
    else if(c==2)
    {
        float x,y,r,o,m,n;
        cout<<"enter r(distance from origin) and angle"<<endl;
        cin>>r>>o;
            n=sinefunction(o);
            y=r*n;
            m=1-n*n;
            m=sqrt(m);
            x=r*m;
        cout<<"cartesion coordinates are:"<<endl;
        cout<<"Answer="<<"("<<x<<","<<y<<")"<<endl;
         return 0;
         return 0;


    }

else
    cout<<"Wrong choice"<<endl;


    }

double scalar_product()
{

    cout<<"Enter the operation to be performed"<<endl;
    cout<<"1.Scalar product"<<endl;
    cout<<"2.Vector product"<<endl;

    int c;
    cin>>c;
        if(c==1)
            {

                double A[3],B[3];
                cout<<"Enter first vector(x,y,z)"<<endl;
    for(int i=0;i<=2;i++)
        {
        cin>>A[i];
        }
            cout<<"Enter second vector(x,y,z)"<<endl;
    for(int i=0;i<=2;i++)
            {
                cin>>B[i];
            }
    double ans;
            ans=A[0]*B[0]+A[1]*B[1]+A[2]*B[2];
            cout<<"Scalar product is:"<<ans<<endl;
    return 0;
    }
else if(c==2)
{


    double A[3],B[3];
     cout<<"Enter first vector(x,y,z)"<<endl;
     for(int i=0;i<=2;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter second vector(x,y,z)"<<endl;
    for(int i=0;i<=2;i++)
    {
        cin>>B[i];
    }
    double ans[3];                                                 //calculating vector product
    ans[0]=A[1]*B[2]-A[2]*B[1];
    ans[1]=A[2]*B[0]-A[0]*B[2];
    ans[2]=A[0]*B[1]-A[1]*B[0];

    cout<<"Answer="<<ans[0]<<"i+"<<ans[1]<<"j+"<<ans[2]<<"k"<<endl;
    return 0;
    }


}
double exponential(double x)
{

double ans,fact,power,z;
ans=0.0;
for(int i=0;i<=10;i++)
{
    fact=factorial(i);
    power=pow(x,i);
    z=power/fact;
    ans=ans+z;
}
return ans;

}

float sinefunction(float x){
float y=x*3.1415926535897932384626433832795028841971693993751/180;
return sin(y);
}

int dictionary(int c)
{
    switch(c)
    {
    case 1:
    {
      cout<<"Wrong choice"<<endl;

       break;
    }
    case 2:
        {
            cout<<"Standard Calculations : It involves general mathematical operations such as addition,subtraction,multiplication and division."<<endl;

             break;
        }
    case 3:
        {
            cout<<"Logarithmic : It takes out log value of any real +ve number."<<endl;
                 break;
        }
    case 4:

{
    cout<<"Exponential : Logarithmic scales reduce wide-ranging quantities to smaller scopes."<<endl;
         break;
}
    case 5:
        {
          cout<<"Factorial : The factorial operation is encountered in many areas of mathematics, notably in combinatorics, algebra, and mathematical analysis. "<<endl;

           break;
        }
    case 6:
        {
           cout<<"Trignometric : It includes 6 ratios of sides of a right angled triangle i.e. sin,cos,tan,cot,cosec and sec."<<endl;
                    break;
        }
    case 7:
        {
            cout<<"Inverse Trigonometric : This function can take out a specific value of angle if given a value of any ratio."<<endl;

             break;
        }
    case 8:
        {
            cout<<"Quadratic Equations : This Function takes out the root of any quadratic function."<<endl;


             break;
        }
    case 9:
        {
            cout<<"Higher power of Any no. : This function is to calculate higher power of any real number."<<endl;

             break;
        }
    case 10:
        {
            cout<<"Conversion Of Digits : This function converts one form of no. to another form i.e. decimal to binary,binary to hexadecimal etc..."<<endl;
                    break;
        }
    case 11:
        {
            cout<<"Conversion of units : This function converts one type of physical units to other types of Physical Units."<<endl;

             break;

        }
    case 12:
        {
            cout<<"Physical Constants : This fuction carries information about several physical constants used in day to day life."<<endl;

             break;
        }


    case 13:
        {
            cout<<"Operations on matrices : This function involves addition, subtraction and multiplication of matrices."<<endl;

             break;
        }
    case 14:
        {
            cout<<"Conversion of coordinates : This Function helps in changing the coordinates from cartesian to polar form and vice versa."<<endl;

             break;
        }
    case 15:
        {
            cout<<"Operations on vectors : This Function involves Dot and Cross product of 2 vectors."<<endl;

             break;
              }
    case 16:
        {
            cout<<"Operations on complex nos. : This Function takes out modulus, conjugate and argument of any given complex no."<<endl;

             break;
        }
    case 17:
        {
            cout<<"Square root : This Function takes out square root of any positive real no."<<endl;

             break;
        }
    case 18:
        {
            cout<<"Equation of a Plane: this function can determine the equation of a plane having several properties."<<endl;
        }
    case 19:
        {
            cout<<"Plot Graph in the given reigon. "<<endl;
    break;
        }
        default: cout<<"Wrong choice";
    }
}

long double inverse_sin(long double x)
{
    return (asin(x)*180/3.1415926535897932384626433832795028841971693993751);
}

int physical_constants(int choice)
{
    switch (choice)
    {
        case 1:{cout<<"Mass of proton is 1.672621580 X 10^(-27) kg"<<endl;return 0;break;}
        case 2:{cout<<"Mass of neutron is 1.67492716 X 10^(-27) kg"<<endl;return 0;break;}
        case 3:{cout<<"Mass of electron is 9.10938188 X 10^(-31) kg" <<endl;return 0;break;}
        case 4:{cout<<"Bohr's radius is 5.21772083 X 10^ (-11) m"<<endl;return 0;break;}
        case 5:{cout<<"Planks' constant is 6.62606876 X 10^(-34) j/s"<<endl;return 0;break;}
        case 6:{cout<<"Avogadro's no. is 6.02214199 X 10^(23)"<<endl;return 0;break;}
      //several physical constants
        case 7:{cout<<"Boltzman constant is 1.3806503 X 10^(-23)"<<endl;return 0;break;}
        case 8:{cout<<"Gas constant is 8.314472 J/moles/K"<<endl;return 0;break;}
        case 9:{cout<<"Acceleration due to gravity(g) is 9.80665m/s^2"<<endl;return 0;break;}
        case 10:{cout<<"Electonic charge (e) is 1.602176462 X10^(-19)coloumb"<<endl;return 0;break;}
        case 11:{cout<<"Stefan-boltzman constant constant is 5.6704 X 10^(-08)"<<endl;return 0;break;}
        case 12:{cout<<"Gravitational constant(G) is 6.673 X 10^(-11)"<<endl;return 0;break;}
        case 13:{cout<<"Magnetic constant() is 1.2566637061 X 10^(-06)"<<endl;return 0;break;}
        case 14:{cout<<"Electric constant() is 8.854187817 X 10^(-12)"<<endl;return 0;break;}
        case 15:{cout<<"Compton wavelength() is 2.426310215 X 10^(-12)"<<endl;return 0;break;}
        case 16:{cout<<"Faraday constant (F) is 96485.341"<<endl;return 0;break;}
        case 17:{cout<<"Fine stucture constant() is 7.297352533 X 10^(-03)"<<endl;return 0;break;}
        case 18:{cout<<"Atomic mass unit(u) is 1.66053873 X 10^(-27)"<<endl;return 0;break;}
        case 19:{cout<<"Rydberg's constant is 10973731.57"<<endl;return 0;break;}
        case 20:{cout<<"Molar volume() is 0.022413996 m^3/mol"<<endl;return 0;break;}
        case 21:{cout<<"Speed of light (c) in vaccum is 299,792,458"<<endl;return 0;break;}
        default :
        cout<<"Wrong choice"<<endl;


return 0;
    }
}

void conversion_of_units(int choice,double num)
{
    double i;
    switch(choice)
    {
    case 1: {cout<<"in-cm"<<endl;i=num*(2.54);cout<<i<<endl;getch();break;}
    case 2:{cout<<"cm-in"<<endl; i=num/(2.54);cout<<i<<endl;getch();break;}
    case 3:{cout<<"ft-m"<<endl; i=num*(0.3048);cout<<i<<endl;getch();break;}
    case 4: {cout<<"m-ft"<<endl; i=num/(0.3048);cout<<i<<endl;getch();break;}
//several conversion of units
    case 5: {cout<<"yd-m"<<endl; i=num*(0.9144);cout<<i<<endl;getch();break;}
    case 6:{cout<<"m-yd"<<endl; i=num/(0.9144);cout<<i<<endl;getch();break;}
    case 7: {cout<<"mile-km"<<endl; i=num*(1.609344);cout<<i<<endl;getch();break;}
    case 8:{cout<<"km-mile"<<endl; i=num/(1.609344);cout<<i<<endl;getch();break;}
    case 9: {cout<<"acre-m^2"<<endl; i=num*(4.046);cout<<i<<endl;getch();break;}
    case 10: {cout<<"m^2-acre"<<endl; i=num/(4.046);cout<<i<<endl;getch();break;}
    case 11: {cout<<"farhenheit-celsius"<<endl; i=((num-32)*5)/9;cout<<i<<endl;getch();break;}
    case 12: {cout<<"celsius_farhenheit"<<endl; i=((num*9)/5)+32;cout<<i<<endl;getch();break;}
    case 13: {cout<<"joules-calorie"<<endl; i=(num/4.184); cout<<i<<endl;getch();break;}
    case 14: {cout<<"calorie-joule"<<endl; i=num*(4.184); cout<<i<<endl;getch();break;}
    case 15:{cout<<"gallon-litre"<<endl; i=num*(4.546);cout<<i<<endl;getch();break;}
    case 16: {cout<<"liter-gallon"<<endl; i=num/4.546; cout<<i<<endl;getch();break;}
    case 17: {cout<<"atm-pascal"<<endl; i=num*101325; cout<<i<<endl;getch();break;}
    case 18: {cout<< "pascal-atm"<<endl; i=num/101325; cout<<i<<endl;getch();break;}
    case 19: {cout<<"hp-W"<<endl; i=num*(736); cout<<i<<endl;getch();break;}
    case 20: {cout<<"W-hp"<<endl; i=num/(736); cout<<i<<endl;getch();break;}
    }
return;

}
