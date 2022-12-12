#include<iostream>
int main ()
{

int n;

cout << "Enter the number of courses: "; cin >> n;

if (n <= 0 or n > 20)
cout << "Invalid Range";

else{

        vector < string > vec (n);

        map < string, int >mp;

        cout << "\nEnter courses names: ";

            for (int i = 0; i < n; i++) { 
                cin >> vec[i];
                mp[vec[i]]++;
            }

        string ser;

        cout << "\nEnter the course to be searched: "; 
        cin >> ser;

            if (mp[ser] != 0)
                cout << "\n" << ser << " course is available.";

            else
                cout << "\n" << ser << " course is not available.";
        
    }

return 0;

}