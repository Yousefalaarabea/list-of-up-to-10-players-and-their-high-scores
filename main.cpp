#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,string>> vec;

    while(true)
    {
        sort(vec.rbegin(),vec.rend());
        cout<<"Welcome to Score Board:) "<<endl
            <<"1. Add new player"<<endl
            <<"2. Print top 10"<<endl
            <<"3. Check the player "<<endl
            <<"4. Exit"<<endl;
        int choice;
        cin>>choice;

        if(choice == 1)
        {
            cout<<"Enter player name: ";
            string n;
            cin>>n;
            cout<<"\nEnter player score: ";
            int s;
            cin>>s;
            vec.emplace_back(s,n);
            sort(vec.rbegin(),vec.rend());
        }

        else if(choice == 2)
        {
            int coun = 0;
            for(auto it:vec)
            {
                int a=it.first;
                string b=it.second;
                cout<<"Player [ "<<coun+1<<" ]: "<<b<<" -> "<<a<<endl;
                coun++;
                if(coun==10)
                    break;
            }
        }

        else if(choice == 3)
        {
            cout<<"Enter player name: ";
            string n;
            cin>>n;
            bool flag = true;
            int coun=0;
            for(auto it:vec)
            {
                int a=it.first;
                string b=it.second;
                coun++;
                if(coun==10)
                    break;
                if(b == n)
                {
                    cout<<"Player [ "<<coun<<" ]: "<<b<<" -> "<<a<<endl;
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout<<"This player isn't from top 10"<<endl;
            }
        }

        else if(choice == 4)
        {
            return 0;
        }

        cout<<endl<<"You want to do something else?"<<endl
            <<"1.Yes"<<endl
            <<"2.No"<<endl;
        int c;
        cin>>c;

        if(c==2)
        {
            break;
        }
    }
}
