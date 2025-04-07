#include <iostream>
#include <string>
#include<cstdlib>
#include<iomanip>
#include <conio.h>

using namespace std;

void login() {
    string username;
    string pcode;
    int l = 0;

    do {
        cout << "ENTER USERNAME :";
        cin >> username;
        cout << "ENTER PASSWORD :";
        cin >> pcode;

        if (username == "ZAHEER" || username == "FAISAL" || username == "AYESHA") {
            cout << "";
        } else {
            cout << "\n Invalid Username \n";
        }

        if (pcode == "ZMA634315") {
        	cout<<"-----------------------"<<endl;
            cout << "Welcome " << username<<endl;
            cout<<"-----------------------"<<endl;
            l++;
        } else {
            cout << "\n Invalid Password \n";
        }
    } while (l < 1);
}

struct Item {
    string name;
    char size;
    int price;
};

Item Selected[100];
int selectedIndex=-1;
int total1;

void DisplayBill() {
    int total = 0;
    cout << "--------------------------------------------------------" << endl;
    cout << "                         Bill                           " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout  <<"Sr.\t"<< "Item Name\t" << "\tSize" << "\t\tPrice" << endl;

    for (int i = 0; i <= selectedIndex; i++) {
            cout <<i+1<<"\t"<< Selected[i].name << "  \t" << Selected[i].size << "\t\t" << Selected[i].price << endl;
            cout << "--------------------------------------------------------" << endl;
            total += Selected[i].price;
            	  total1+= total*70/100;
		  }
		  if(total>1000){
            	total1 =total1+ total*20/100;
				 cout << "\t\t\t\tTotal = " << total1+total1 << endl; }
            	 else
cout << "\t\t\t\tTotal = " << total1+total << endl;
}

void gardet() {
    int input;
    char sze;
    Item items[6];

    for (int i = 0; i < 6; i++) {
        switch (i + 1) {
            case 1:
                items[i].name = "Suit\t\t";
                items[i].price = 14000;
                break;
            case 2:
                items[i].name = "Jacket  \t";
                items[i].price = 9999;
                break;
            case 3:
                items[i].name = "Shorts  \t";
                items[i].price = 4500;
                break;
            case 4:
                items[i].name = "Jeans   \t";
                items[i].price = 4700;
                break;
            case 5:
                items[i].name = "Shirt   \t";
                items[i].price = 3400;
                break;
            case 6:
                items[i].name = "Trousers\t";
                items[i].price = 3000;
                break;
        }
    }

    cout << "Select (1-6)" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << "-" << items[i].name << "\t\t";
    }

    cout << endl;
    cin >> input;

    if (input >= 1 && input <= 6) {
        cout << "Enter size (S,M,L):";
        cin >> sze;
        items[input - 1].size = sze;

        cout << "------------------------------------" << endl;
        cout << "Name\t\t " << "  \tSize" << "   Price" << " \tDone" << endl;
        cout << items[input - 1].name << "\t" << items[input - 1].size << "\t" << items[input - 1].price << endl;
        cout << "------------------------------------" << endl;

        Selected[++selectedIndex] = items[input - 1];
    }
}

void garments() {
    gardet();
}

void Accessor() {
    int input;
    char sze;
    Item items[6];

    for (int i = 0; i < 6; i++) {
        switch (i + 1) {
            case 1:
                items[i].name = "Watch\t\t";
                items[i].price = 3000;
                break;
            case 2:
                items[i].name = "Rings\t\t";
                items[i].price = 2000;
                break;
            case 3:
                items[i].name = "Wallet   \t";
                items[i].price = 1500;
                break;
            case 4:
                items[i].name = "Ear-Rings\t";
                items[i].price = 5000;
                break;
            case 5:
                items[i].name = "Necklace \t";
                items[i].price = 2500;
                break;
            case 6:
                items[i].name = "Glasses  \t";
                items[i].price = 1000;
                break;
        }
    }

    cout << "Select (1-6)" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << "-" << items[i].name << "\t\t";
    }

    cout << endl;
    cin >> input;

    if (input >= 1 && input <= 6) {
        cout << "Enter size (S,M,L):";
        cin >> sze;
        items[input - 1].size = sze;

        cout << "------------------------------------" << endl;
        cout << "Name\t\t " << "\tSize" << "\tPrice" << "\tDone" << endl;
        cout << items[input - 1].name << "\t" << items[input - 1].size << "\t" << items[input - 1].price << endl;
        cout << "------------------------------------" << endl;

        Selected[++selectedIndex] = items[input - 1];
    }
}

void Accessories() {
    Accessor();
}

void allshoes() {
    int input;
    char sze;
    Item items[6];

    for (int i = 0; i < 6; i++) {
        switch (i + 1) {
            case 1:
                items[i].name = "Boot\t\t ";
                items[i].price = 3500;
                break;
            case 2:
                items[i].name = "Sandals  \t";
                items[i].price = 4500;
                break;
            case 3:
                items[i].name = "Sneakers\t ";
                items[i].price = 6000;
                break;
            case 4:
                items[i].name = "Loafer   \t";
                items[i].price = 2900;
                break;
            case 5:
                items[i].name = "Slippers\t ";
                items[i].price = 600;
                break;
            case 6:
                items[i].name = "Platform Shoe  ";
                items[i].price = 6600;
                break;
        }
    }

    cout << "Select (1-6)" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << "-" << items[i].name << "\t\t";
    }

    cout << endl;
    cin >> input;

    if (input >= 1 && input <= 6) {
        cout << "Enter size (S,M,L):";
        cin >> sze;
        items[input - 1].size = sze;

        cout << "------------------------------------" << endl;
        cout << "Name\t\t" << "\tSize" << "\tPrice" << "\tDone" << endl;
        cout << items[input - 1].name << "   \t" << items[input - 1].size << "\t" << items[input - 1].price << endl;
        cout << "------------------------------------" << endl;

        Selected[++selectedIndex] = items[input - 1];
    }
}

void shoes() {
    allshoes();
}

void itemes() {
    int it = 0;
    do {
        int iteam;
        cout << "What do you want to purchase? select anyone\n ";
        cout << "---------------------------" << endl;
        cout << "         Catagories        " << endl;
        cout << "----------------------------" << endl;
        cout << "Choices(1-4)" << endl;
        cout << "1-Garments\n";
        cout << "2-Accessories\n";
        cout << "3-Shoes\n";
        cout << "4-Exist and Print bill\n";
        cin >> iteam;

        switch (iteam) {
            case 1:
                garments();
                break;
            case 2:
                Accessories();
                break;
            case 3:
                shoes();
                break;
            case 4:
                DisplayBill();
                it++;
        }
    } while (it < 1);
}

int main() {
    do {
        cout <<setw(100)<< "-*-*-*-*-*-*-*-*-*- MEN's FASHION STORE -*-*-*-*-*-*-*-*-*-*-\n";
        cout << "-------------------------------------------------------------" << endl;
        cout << "Address:   COMSATS University Islamabad, Sahiwal Campus     " << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << "Phone #               0326-6625859                           " << endl;
        cout << "-------------------------------------------------------------" << endl;
        int user;
        cout << "Enter 1 if you are admin, otherwaise enter 2.";
        cout << "\n1- ADMIN\t\t2- CUSTOMER \n";
        cin >> user;

        switch (user) {
            case 1:
                cout << "Adminlogin\n";
                login();
                break;
            case 2:
                cout << "Customer\n";
                itemes();
                break;
            default:
                break;
        }
        cout << "Press a key to continue...";
        getch(); //get a key press from user
        system("CLS");
    } while (true);

    return 0;
}
