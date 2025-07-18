//program to use switch case
#include<iostream>
using namespace std;
int main()
{
 int choice;
 cout<<"1) Vada Pav"<<endl<<"2) Dosa"<<endl<<"3) Dal Chawal"<<endl<<"4) Chole Bhature"<<endl<<"5) Kadhai Paneer and Naan"<<endl;
 cout<<endl<<"enter your choice of lunch:"<<endl;
 cin>>choice;
 switch(choice)
 {
     case 1:
     cout<<"Enjoy your Vada pav,do leave a review on google :)";
     break;
     case 2:
     cout<<"Enjoy your Dosa,do leave a review on google :)";
     break;
     case 3:
     cout<<"Enjoy your Dal Chawal,do leave a review on google :)";
     break;
     case 4:
     cout<<"Enjoy your Chole Bhature,do leave a review on google :)";
     break;
     case 5:
     cout<<"Enjoy your Kadhai Paneer and Naan,do leave a review on google :)";
     break;
     default:
     cout<<"Sorry we have limited options for now, but we are expanding our menu soon :) ";
     break;
 }
}
