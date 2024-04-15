//write a program to demonstrate an e-kart where you can insert the item name, display the current price and delete the item.
#include<iostream>
using namespace std;
const int Max=1000;
class e_kart 
{
    string item_name[Max];
    int item_price[Max];
    int num_items;
    int m;
    public:
        e_kart() : num_items(0) {}
        void setitem()
        { 
            if(num_items < Max)
            {
                cout<<"\nEnter the item name: ";
                cin>>item_name[num_items];
                cout<<"Enter the item price: ";
                cin>>item_price[num_items];
                num_items++;
            }
            else
            {
                cout<<"\nCart is Full,Clear the Cart first.\n";
            }
        }
        void deleteitem()
        {
            if(num_items>0)
            {
                cout<<"\nYour items in Cart are:\n";
                for(int i=0;i<num_items;++i)
                {
                    cout<<i<<"."<<item_name[i]<<"-->"<< item_price[i]<< endl;
                }
                cout<<"\nEnter the index number for deletion: ";
                cin>>m;
                cout<<"\nItem "<<item_name[m]<<"-->"<<item_price[m]<<" is deleted\n";
                for(int i=m;i<num_items-1;++i)
                {
                    item_name[i]=item_name[i+1];
                    item_price[i]=item_price[i+1];
                }     
                num_items--;   
            }
            else
            {
                cout<<"Nothing to delete,Cart is Empty.\n";
            }
            
        }
        void displaykart()
        {
            if(num_items==0)
            {
                cout<<"Cart is Empty.\n";
                return;
            }
            int total=0;
            cout<<"\nYour items in Cart are:\n";
            for(int i=0;i<num_items;++i)
            {
                cout<<item_name[i]<<" --> "<< item_price[i]<< endl;
                total+=item_price[i];
            }
            cout<<"\n\nTotal Ammount:\n";
            cout<<total<<endl;       
        }
};
int main()
{
    e_kart e;
    while(true)
    {
        int n;
        cout<<"\n\nPress 1 for input of item\nPress 2 for deleting a item\nPress 3 for displaying Kart\nPress 4 for Exit: ";
        cin>>n;
        switch(n)
        {
            case 1:
                e.setitem();
                break;
            case 2:
                e.deleteitem();
                break;
            case 3:
                e.displaykart();
                break;
            case 4:
                cout<<"\nExited and cleared the kart>>>\n";
                break;
        } 
        if(n==4)
        {
            break;
        }
    } 
}