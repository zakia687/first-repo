#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

class validation
{

public:
    bool test_user(string username, string password);

private:
    string dm_username;
    string dm_password;
};
bool validation::test_user(string username, string password)
{
    dm_username= username;
    dm_password= password;
    if(dm_username=="Admin" && dm_password =="pass.1234")
{
    return true;
}
else{
    return false;
  }
}
  string user_password ;
  string user_name;
  int main()
  {
      system("COLOR 05");
      class validation user1;
      test_user:
      cout<<endl<<endl;
      cout<<"-----------------------------------------------------"<<endl;
      cout<<"|"<<setw(39)<<"|"<<endl;
      cout<<"| Bank Account Login |"<<endl;
      cout<<"|"<<setw(39)<<"|"<<endl;
      cout<<"|Key in username(Admin)";
      cin>>user_name;
      cout<<"|"<<setw(39)<<"|"<<endl;
      cout<<"|Key in passwords(pass.1234)";
      cin>>user_password;
      cout<<"|"<<setw(39)<<"|"<<endl;


  if(user1.test_user(user_name, user_password)==false)
  {
      cout<<"|"<<setw(16)<<"Invalid user"<<setw(23)<<"|"<<endl;
      goto test_user;

  }
  cout<<"|"<<setw(39)<<"|"<<endl;

  cout<<"|"<<setw(39)<<"|"<<endl;
  cout<<"-----------------------------------------------------"<<endl;
  return 0;
  }
