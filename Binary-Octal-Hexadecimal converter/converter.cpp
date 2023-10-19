#include<bits/stdc++.h>
using namespace std;

string input;

int decimal_to_decimal()
{
    int ans = 0;
    int power = 0;

    for (int i = input.length()-1; i >= 0; i--)
    {
        ans = ans + ((input[i]-'0') * pow(10,power));
        power++;
    }
    return ans;
}

int binary_to_decimal()
{
    int ans = 0;
    int power = 0;

    for (int i = input.length()-1; i >= 0; i--)
    {
        ans = ans + ((input[i]-'0') * pow(2,power));
        power++;
    }
    return ans;
}

int octal_to_decimal()
{
    int ans = 0;
    int power = 0;

    for (int i = input.length()-1; i >= 0; i--)
    {
        ans = ans + ((input[i]-'0') * pow(8,power));
        power++;
    }
    return ans;
}

int hexadecimal_to_decimal()
{
    int ans = 0;
    int power = 0;

    for (int i = input.length()-1; i >= 0; i--)
    {
        ans = ans + ((input[i]-'0') * pow(16,power));
        power++;
    }
    return ans;
}

void decimal_to_binary(int d_input)
{
    string ans = "";
    int power = 0;
    string addable;

    while (d_input>0)
    {
        addable = d_input%2 + '0';
        d_input = d_input/2;
        ans = addable + ans;
    }
    cout<<"Binary : "<<ans<<'\n';
}

void decimal_to_octal(int d_input)
{
    string ans = "";
    int power = 0;
    string addable;

    while (d_input>0)
    {
        addable = d_input%8 + '0';
        d_input = d_input/8;
        ans = addable + ans;
    }
    cout<<"Octal : "<<ans<<'\n';
}

void decimal_to_hexadecimal(int d_input)
{
    string ans = "";
    int power = 0;
    string addable;

    while (d_input>0)
    {
        addable = d_input%16 + '0';
        d_input = d_input/16;
        ans = addable + ans;
    }
    cout<<"Hexadecimal : "<<ans<<'\n';
}


int main()
{
    int ans;
    char from;
    char to;
    
    cout<<"Welcome to Binary, Octal, Decimal and Hexadecimal interconverter"<<'\n';
    cout<<"Following are the shorthand notation for this program"<<'\n';
    cout<<"Binary : b \t Octal : o \t Decimal : d \t Hexadecimal : h\n";
    cout<<"In this program you can convert into many forms just you have to put in the format (a,b,c)\n";
    cout<<"You want to convert : ";
    cin>>from;
    cout<<"Into : ";
    cin>>to;
    cout<<"What do you want to change : ";
    cin>>input;
    
    
    	if(from == 'b')
    	{
    		if(to=='b') {cout<<"Bakchodi mat kar, kam dhandhe kar le\n";}
    		else if(to=='o') {decimal_to_octal(binary_to_decimal());}
    		else if(to=='d') {ans=binary_to_decimal();cout<<ans<<'\n';}
    		else if(to=='h') {decimal_to_hexadecimal(binary_to_decimal());}
    		else cout<<"Invalid input\n";
    	}
    	else if(from == 'o')
    	{
    		if(to=='b') {decimal_to_binary(octal_to_decimal());}
    		else if(to=='o') {cout<<"Bakchodi mat kar, kam dhandhe kar le\n";}
    		else if(to=='d') {ans = octal_to_decimal();cout<<ans<<'\n';}
    		else if(to=='h') {decimal_to_hexadecimal(octal_to_decimal());}
    		else cout<<"Invalid input\n";
    	}
    	else if(from == 'o')
    	{
    		if(to=='b') {decimal_to_binary(octal_to_decimal());}
    		else if(to=='o') {cout<<"Bakchodi mat kar, kam dhandhe kar le\n";}
    		else if(to=='d') {ans=octal_to_decimal();cout<<ans<<'\n';}
    		else if(to=='h') {decimal_to_hexadecimal(octal_to_decimal());}
    		else cout<<"Invalid input\n";
    	}
    	else if(from == 'd')
    	{
    		if(to=='b') {decimal_to_binary(decimal_to_decimal());}
    		else if(to=='o') {decimal_to_octal(decimal_to_decimal());}
    		else if(to=='d') {cout<<"Bakchodi mat kar, kam dhandhe kar le\n";}
    		else if(to=='h') {decimal_to_hexadecimal(decimal_to_decimal());}
    		else cout<<"Invalid input\n";
    	}
    	else if(from == 'h')
    	{
    		if(to=='b') {decimal_to_binary(hexadecimal_to_decimal());}
    		else if(to=='o') {decimal_to_octal(hexadecimal_to_decimal());}
    		else if(to=='d') {ans=hexadecimal_to_decimal();cout<<ans<<'\n';}
    		else if(to=='h') {cout<<"Bakchodi mat kar, kam dhandhe kar le\n";}
    		else cout<<"Invalid input\n";
    	}
    	else cout<<"Invalid input\n";
    	
    
    return 0;
}
