#include <iostream>
#include <windows.h>
using namespace std;

void header();
int menu();
string viewItems();
int updateItems();
int deleteItems();

int option;

main()
{
    int updatePrice1, updatePrice2;
    int updateQuantity1, updateQuantity2;

    system("cls");
    header();
    while(true) {
        menu();
        if(option == 1)
        {
            viewItems();
        }

        if(option == 2)
        {
        updateItems();
        if (option == 1)
        {
            cout << "1. Product one" << endl;
            cout << "2. Product two" << endl;
            cout << "Enter which product: ";
            cin >> option;

                if (option == 1)
                {
                    cout << "Enter New Quantity: ";
                    cin >> updateQuantity1;
                }

                if (option == 2)
                {
                    cout << "Enter New Quantity: ";
                    cin >> updateQuantity2;
                }           
        }

        if (option == 2)
        {
            cout << "1. Product one" << endl;
            cout << "2. Product two" << endl;
            cout << "Enter which product: ";
            cin >> option;

                if (option == 1)
                {
                    cout << "Enter New Price: ";
                    cin >> updatePrice1;
                }

                if (option == 2)
                {
                    cout << "Enter New Price: ";
                    cin >> updatePrice2;
                }            
        }
            
        }

        if(option == 3)
        {
            deleteItems();

            if(option == 1)
            {
                cout << endl;
                cout << "            ********************                      " << endl;
                cout << "            All Products Details                      " << endl;
                cout << "            ********************                      " << endl;
                cout << "Sr." << "\t" << "Name  " << "\t" << "Quantity" << "\t" << "Price" << endl;
                cout << "--------------------------------------" << endl;
                cout << "2. " << "\t" << "Milk  " << "\t" << "1 kilo  " << "\t" << "Rs200" << endl;
                cout << endl;
            }

            if (option == 2) {
                cout << endl;
                cout << "            ********************                      " << endl;
                cout << "            All Products Details                      " << endl;
                cout << "            ********************                      " << endl;
                cout << "Sr." << "\t" << "Name  " << "\t" << "Quantity" << "\t" << "Price" << endl;
                cout << "--------------------------------------" << endl;
                cout << "1. " << "\t" << "Apples" << "\t" << "12      " << "\t" << "Rs450" << endl;
                cout << endl;
            }
        }
    }

}

void header()
{
    cout << endl << endl;
    cout << "**************************************************************************************************************************************" << endl;
    cout << "||        ## ## ##    ## ##     ## ## ##   ##           ##        ## ##  ## ##  ## ## ##       ## ##     ## ## ##    ## ## ##       ||" << endl;
    cout << "||        ##        ##     ##   ##     ##  ## ##     ## ##             ##       ##      ##   ##     ##   ##     ##   ##             ||" << endl;
    cout << "||        ##       ##       ##  ##     ##  ##  ##   ##  ##             ##       ##      ##  ##       ##  ##      ##  ##             ||" << endl;
    cout << "||        ## ##    ## ## ## ##  ##  ##     ##    ###    ##             ##       ##   ##     ## ## ## ##  ##      ##  ## ## ##       ||" << endl;
    cout << "||        ##       ##       ##  ##  ##     ##           ##             ##       ##   ##     ##       ##  ##      ##  ##             ||" << endl;
    cout << "||        ##       ##       ##  ##    ##   ##           ##             ##       ##     ##   ##       ##  ##     ##   ##             ||" << endl;
    cout << "||        ##       ##       ##  ##      #  ##           ##             ##       ##       #  ##       ##  ## ## ##    ## ## ##       ||" << endl;
    cout << "||                                                                                                                                  ||" << endl;
    cout << "|| ##     ##   ####    ##    #   ####     ####  ##### ##      ## ##### ##    # ######     ####  #   #  ####  ###### ##### ##     ## ||" << endl;
    cout << "|| ## # # ## ##     ## ## #  # ##     ## #      #     ## #  # ## #     ## #  #   ##      #    #  # #  #    #   ##   #     ## # # ## ||" << endl;
    cout << "|| ##  #  ## ## # # ## ##  # # ## # # ## #  # # ####  ##  #   ## ####  ##  # #   ##      # # #    #   # # #    ##   ####  ##  #  ## ||" << endl;
    cout << "|| ##     ## ##     ## ##   ## ##     ## #    # #     ##      ## #     ##   ##   ##           #   #        #   ##   #     ##     ## ||" << endl;
    cout << "|| ##     ## ##     ## ##   ## ##     ##  ###   ##### ##      ## ##### ##   ##   ##      # # #    #   # # #    ##   ##### ##     ## ||" << endl;
    cout << "**************************************************************************************************************************************" << endl;
    cout << endl << endl;
}

int menu()
{ 
    cout << "Select one of the following options number..." << endl;
    cout << "1. View Items" << endl;
    cout << "2. Update Items" << endl;
    cout << "3. Delete Items" << endl;
    cout << "Enter number of any option: ";
    cin >> option; 
    
    return option;
}

string viewItems()
{
    cout << endl;
    cout << "            ********************                      " << endl;
    cout << "            All Products Details                      " << endl;
    cout << "            ********************                      " << endl;
    cout << "Sr." << "\t" << "Name  " << "\t" << "Quantity" << "\t" << "Price" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. " << "\t" << "Apples" << "\t" << "12      " << "\t" << "Rs450" << endl;
    cout << "2. " << "\t" << "Milk  " << "\t" << "1 kilo  " << "\t" << "Rs200" << endl;
    cout << endl;

}


int updateItems()
{
    cout << "1. Quantity" << endl;
    cout << "2. price" << endl;
    cout << "Enter any of the option: ";
    cin >> option;
}

int deleteItems()
{
    cout << "1. Product one" << endl;
    cout << "2. Product two" << endl;
    cout << "Enter the product: ";
    cin >> option;
}