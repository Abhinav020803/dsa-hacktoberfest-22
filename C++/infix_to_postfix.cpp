#include<iostream>
#include<ctype.h>
using namespace std;

class infx_to_pofx{
	char s[20], infx[20], pofx[20];
	int top;
	public :
		infx_to_pofx()
		{
			top=-1;
		}
		void push(char);
		char pop();
		void getdata();
		int pr(char);
		void compute();
};

void infx_to_pofx :: getdata()
{
	cout <<"enter the infix expression " << endl;
	cin >> infx;
}

void infx_to_pofx :: push(char elem)
{
	s[++top]=elem;
}

char infx_to_pofx :: pop()
{
	return (s[top--]);
}

int infx_to_pofx :: pr(char elem)
{
	switch(elem)
	{
		case '#' : return 0;
		case '(' : return 1;
		case '+' : return 2;
		case '-' : return 2;
		case '*' : return 3;
		case '/' : return 3;
		case '^' : return 4;
	}
}

void infx_to_pofx :: compute()
{
	char ch, elem;
	int i=0, k=0;
	push('#');
	
	while( (ch=infx[i++]) != '\0' )
	{
		if (ch == '(' )
		   push(ch);
		else if (ch == isalnum(ch))
			pofx[k++]=ch;
		else if (ch == ')')
		{
			while(s[top] != '(')
			{
				pofx[k++]=pop();
			}
			elem=pop();
		}
		
	else
	   {
	   	 while (pr(s[top]) >= pr(ch))
			{
				pofx[k++]=pop();
				}    
			push(ch);	
	    }
	}
	while ( s[top] != '#')
	{
		pofx[k++]=pop();
	}
	pofx[k]='\0';
	cout << "postfix expression is " << pofx << endl;
}

int main()
{
	infx_to_pofx obj;
	obj.getdata();
	obj.compute();
	
	return 0;
}
