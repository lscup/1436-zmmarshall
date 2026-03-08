#include <iostream>
using namespace std;

// z'mroion marshall 
// sat Mar 7  at 10:18 PM
// this code it goind to be a reincarnation of fnaf 5



int main() {
    // this is the beginning 
    bool isDead = false ; 
    int payCheck = 0 , name, end ;
    
    char choice ;
        //night1; ( did not work in beginning will try later )
        while (isDead == false)
            {
                
                cout << "Do you need a job? <y/n> " ; 
                cin >> choice;
                if (choice == 'y' || choice == 'Y')
                    {
                        cout << "hello there would you like to work at this abandoned facility ? ";

                        break;

                    }

                else if (choice == 'n' || choice == 'N')
                    {
                        
                       
                        cout << " Have a great day ";
                        goto end;

                    }

                else
                    {

                        cout << "error we can't process:" << choice << "\n";
                        continue; 

                    }
                cout << " hello there"<<
                








                
                
            }
        end: 


}