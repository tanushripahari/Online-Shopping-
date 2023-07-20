#include <iostream>

using namespace std;

int main()
{
    char startValue;
    char choiceAgain;
startLevel:
    float onlineShopping(void);
    cout << " PRESS S TO START ONLINE SHOPPING " << endl;
    cin >> startValue;
start:
    if (startValue == 's' || startValue == 'S')
    {
        float totalAmount = onlineShopping();
        cout << "total bill Amount is " << totalAmount << endl;
    shopAgain:
        cout << " DO YOU WANT SHOPPING AGAIN, YES OR NO  ?" << endl;
        cin >> choiceAgain;
        if (choiceAgain == 'y' || choiceAgain == 'Y')
        {
            goto startLevel;
        }
        else if (choiceAgain == 'n' || choiceAgain == 'N')
        {
            cout << "THANK YOU FOR THE SHOPPING" << endl;
        }
    }
    else
    {
        cout << "YOU HAVE ENTERED A WRONG VALUE,PLEASE ENTER S " << endl;
        goto startLevel;
    }
}
float onlineShopping()
{
clothesLevel:
mobileLevel:
tvLevel:
bikeLevel:
shoesLevel:

    char choice;
    cout << "**********WELCOME TO THE ONLINE SHOPPING***********" << endl;
    cout << "FOLLOW THIS INSTRUCTIONS:-" << endl;
    cout << "(1) Press c to order clothes" << endl;
    cout << "(2) Press m to order mobiles" << endl;
    cout << "(3) Press t to order tv" << endl;
    cout << "(4) Press b to order bikes" << endl;
    cout << "(5) Press s to order shoes" << endl;
    cin >> choice;

    // clothes details

    char item;
    float billAmount = 0;
    int quantity;

    if (choice == 'c' || choice == 'C')
    {
        cout << "CLOTHES DETAILS" << endl;
        cout << "1. kurati = Price - 500 " << endl;
        cout << "2. jeans = Price - 700 " << endl;
        cout << "3. tops = Price - 800 " << endl;
        cout << "4. saree = Price - 1000 " << endl;
        cout << "5. jumsuit = Price - 1500 " << endl;
        cout << "PLEASE ENTER YOUR CHOICE" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 500;
        }
        else if (item == '2')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 700;
        }
        else if (item == '3')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 800;
        }
        else if (item == '4')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1000;
        }
        else if (item == '5')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1500;
        }
        else
        {
            cout << "YOU HAVE ENTERED A WRONG CLOTH VALUE, PLEASE ENTER GIVEN CHOICE " << endl;
            goto clothesLevel;
        }
    }

    // mobile details **************************************************************************************
    else if (choice == 'm' || choice == 'M')
    {
        cout << "MOBILE DETAILS" << endl;
        cout << "1.Apple = Price - 50000 " << endl;
        cout << "2.Redmi = Price - 17000 " << endl;
        cout << "3.Realme = Price - 18000 " << endl;
        cout << "4.Oppo = Price - 11000 " << endl;
        cout << "5.Samaung = Price - 15000 " << endl;
        cout << "PLEASE ENTER YOUR CHOICE" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 50000;
        }
        else if (item == '2')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 17000;
        }
        else if (item == '3')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 18000;
        }
        else if (item == '4')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 11000;
        }
        else if (item == '5')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 15000;
        }
        else
        {
            cout << "YOU HAVE ENTERED A WRONG MOBAIL VALUE, PLEASE ENTER GIVEN CHOICE " << endl;
            goto mobileLevel;
        }
    }

    // TV Details ************************************************************************************************
    else if (choice == 't' || choice == 'T')
    {
        cout << "TV DETAILS" << endl;
        cout << "1. Samsung = Price - 75000 " << endl;
        cout << "2. LG = Price - 77000 " << endl;
        cout << "3. Sony = Price - 78000 " << endl;
        cout << "4. Penasonic = Price - 71000 " << endl;
        cout << "5. Videocon = Price - 55000 " << endl;
        cout << "PLEASE ENTER YOUR CHOICE" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 75000;
        }
        else if (item == '2')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 77000;
        }
        else if (item == '3')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 78000;
        }
        else if (item == '4')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 71000;
        }
        else if (item == '5')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 55000;
        }
        else
        {
            cout << "YOU HAVE ENTERED A WRONG TV VALUE, PLEASE ENTER GIVEN CHOICE " << endl;
            goto tvLevel;
        }
    }

    // bike details *****************************************************************************************************
    else if (choice == 'b' || choice == 'B')
    {
        cout << "CLOTHES DETAILS" << endl;
        cout << "1. Honda = Price - 100000 " << endl;
        cout << "2. Mahindra  = Price - 200000 " << endl;
        cout << "3. TVS = Price - 300000 " << endl;
        cout << "4. KTM = Price - 400000 " << endl;
        cout << "5. Duke = Price - 500000 " << endl;
        cout << "PLEASE ENTER YOUR CHOICE" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 100000;
        }
        else if (item == '2')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 200000;
        }
        else if (item == '3')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 300000;
        }
        else if (item == '4')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 400000;
        }
        else if (item == '5')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 500000;
        }

        else
        {
            cout << "YOU HAVE ENTERED A WRONG BIKE VALUE, PLEASE ENTER GIVEN CHOICE " << endl;
            goto bikeLevel;
        }
    }

    // shoes details************************************************************************************************
    else if (choice == 's' || choice == 'S')
    {
        cout << "CLOTHES DETAILS" << endl;
        cout << "1. puma = Price - 1500 " << endl;
        cout << "2. Adidas = Price - 2000 " << endl;
        cout << "3. Nike = Price - 2500 " << endl;
        cout << "4. Juniour = Price - 3000 " << endl;
        cout << "5. Roadstar = Price - 3500 " << endl;
        cout << "PLEASE ENTER YOUR CHOICE" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1500;
        }
        else if (item == '2')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2000;
        }
        else if (item == '3')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2500;
        }
        else if (item == '4')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3000;
        }
        else if (item == '5')
        {
            cout << "ENTER OUANTITY" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3500;
        }

        else
        {
            cout << "YOU HAVE ENTERED A WRONG SHOES VALUE, PLEASE ENTER GIVEN CHOICE " << endl;
            goto shoesLevel;
        }
    }
    else
    {
        cout << "YOU HAVE ENTERED A WRONG VALUE, PLEASE ENTER CHOICE " << endl;
    }

    return billAmount;
}


