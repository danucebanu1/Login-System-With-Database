#include <iostream>
#include <fstream>
#include <string>

using namespace std;

  bool isLoggedIn()
    {
        string username,password;
        string un,pw;
        
        // Get username and password from user
        cout<<"Enter your username:";
        cin>>username;
        cout<<"Enter your password:";
        cin>>password;
        cout<<endl;
        
        // Open the username and password file
        ifstream file(username + ".txt");
        
        // If the file is not open
        if(!file.is_open())
        {
            cout << "Error in the system (Error code 403) "<<endl; // Outputs error if the file is not open
            return false; // Returns the value 0 of the bool isLoggedIn
            
        }

        while (file >> un >> pw)
        {
            if (un == username && pw == password)
            {
                cout<<"Welcome back "<<username<<endl;
                cout<<endl;
                return true; // Returns the value 1 of the bool isLoggedIn
            }
        }
    } 
    int main()
{
    
    // Declared username / password and verify password variables (string)
    string ans,username,password,verifypassword;
    string un,pw;
    int a;
    
    // Welcome panel
    cout<<"                                                                                          ,,                                  "<<endl;
    cout<<" .M^^^bgd   mm                      `7MM          `7MM^^^Yb.              mm             *MM                                  "<<endl;
    cout<<",MI    ^Y   MM                        MM            MM    `Yb.            MM              MM                                  "<<endl;
    cout<<"`MMb.     mmMMmm   ,6^Yb.  `7Mb,od8   MM  ,MP'      MM     `Mb  ,6^Yb.  mmMMmm   ,6^Yb.   MM,dMMb.   ,6^Yb.  ,pP^Ybd  .gP^Ya  "<<endl;
    cout<<"  `YMMNq.   MM    8)   MM    MM' ^'   MM ;Y         MM      MM 8)   MM    MM    8)   MM   MM    `Mb 8)   MM  8I   `^ ,M^   Yb "<<endl;
    cout<<".     `MM   MM     ,pm9MM    MM       MM;Mm         MM     ,MP  ,pm9MM    MM     ,pm9MM   MM     M8  ,pm9MM  `YMMMa. 8M^^^^^^ "<<endl;
    cout<<"Mb     dM   MM    8M   MM    MM       MM `Mb.       MM    ,dP^ 8M   MM    MM    8M   MM   MM.   ,M9 8M   MM  L.   I8 YM.    , "<<endl;
    cout<<"P^Ybmmd^    `Mbmo `Moo9^Yo..JMML.   .JMML. YA.    .JMMmmmdP^   `Moo9^Yo.  `Mbmo `Moo9^Yo. P^YbmdP^  `Moo9^Yo.M9mmmP^  `Mbmmd' "<<endl;
    cout<<endl;
    cout<<"[1] Login"<<endl;
    cout<<"[2] Register"<<endl;
    cout<<"[3] Exit"<<endl;
    cout<<endl;
    cout<<"Choose an option:";
    cin>>a;
    cout<<endl;

    
    // Register
    if(a==2)
    
    { 
        // Declaring the "do you wish to continue?" answer 
        string ans2;
        cout<<"Enter a username: ";
        cin>>username;
        cout<<"Enter a password: ";
        cin>>password;
        
        ofstream file; // Creates a file
        file.open(username + ".txt"); // Opens the file and renames it by the username that you entered
        file<<username<<endl<<password; // Saves the username and password in the fie
        file.close();

        cout<<"You succesfully created an account!"<<endl;
        cout<<endl;
        cout<<"Hello "<<username<<endl;
        cout<<endl;
        cout<<"You can enter in your account now,do you wish to continue?[Y/N] ";
        cin>>ans2;
        
        if (ans2 == "Y" or "y")
        
        {
            main();
        }
        
        else if(ans2 == "N" or "n")
        
        {
            cout<<"Thank you for using Stark's Database,see you next time";
            system("exit");
        }

    }

    // Login
    if(a==1)
    
    {
        bool status = isLoggedIn();

        if(!status)
           {
            cout<<endl;
            cout<<"Invalid login"<<endl;
            main();
           }
        
    }

    // Exit
    else if(a==3)
   {
     cout<<"Are you sure you want to exit?[Y/N] ";
     cin>>ans;
     
     if (ans == "Y" or "y")
     {
     cout<<"Thank you for using Stark's Database"<<endl;
     system("exit");
     }
    
    else if(a==3)
    cin>>ans;
      {
        if (ans=="N" or "n")
        {
           cout<<"Welcome back"<<endl;
           cout<<endl;
           main();
        }
        else
        {
            cout<<"Error,there is no such option as"<<ans<<endl;
            cout<<endl;
        }
      }
   }

   else
   {
    cout<<"Error,there is no such option as "<<a<<endl;
    cout<<endl;
    main();
   }

}